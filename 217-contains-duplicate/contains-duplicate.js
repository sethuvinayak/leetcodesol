/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let mp =new Map();
    for(let c of nums){
        if(mp.has(c)){
            return true;
        }
        mp.set(c,1);
    }
    return false;
};