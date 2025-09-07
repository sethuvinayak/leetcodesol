#include <sstream>
#include <string>
#include <cstdlib> // for stoi
using namespace std;

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string result;
        helper(root, result);
        // Optional: cout << result;
        return result;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(const string& data) {
        int pos = 0;
        return deserializeHelper(data, pos);
    }

private:
    void helper(TreeNode* node, string& result) {
        if (!node) {
            result += "#,";
            return;
        }
        result.append(to_string(node->val) + ",");
        helper(node->left, result);
        helper(node->right, result);
    }

    TreeNode* deserializeHelper(const string& data, int& pos) {
        if (pos >= (int)data.size()) {
            return nullptr;
        }
        // Find the next comma
        int comma = data.find(',', pos);
        string token = data.substr(pos, comma - pos);
        pos = comma + 1;

        if (token == "#") {
            return nullptr;
        }
        int value = stoi(token);
        TreeNode* node = new TreeNode(value);
        node->left = deserializeHelper(data, pos);
        node->right = deserializeHelper(data, pos);
        return node;
    }
};
