/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {
    // for (i = 0; i < nums.length; i++){
    //     for (j = i+1;j < nums.length;j++){
    //         if ((nums[i] === nums[j]) && (Math.abs(i-j) <= k)){
    //             return true
    //         }
    //     }
    // }
    // return false
    let temp = new Map()
    for (n in nums){
        if (temp.has(n) && Math.abs() ){

        }
    }
};

// test cases
console.log(containsNearbyDuplicate([1,2,3,1], 3)); // true
console.log(containsNearbyDuplicate([1,0,1,1], 1)); // true
console.log(containsNearbyDuplicate([1,2,3,1,2,3], 2)); // false

//tricky test cases
console.log(containsNearbyDuplicate([1,2,3,4,5,6,7,8,9,10], 10)); // false