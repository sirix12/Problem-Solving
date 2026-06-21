/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
// var twoSum = function (nums, target) {
//     for (let i = 0; i < nums.length; i++) {
//         for (let j = i + 1; j < nums.length; j++) {
//             console.log(nums[i] + " " + nums[j])
//         }
//     }
// };

function twoSum(nums, target) {
    let mapped = new Map()
    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i]
        if (mapped.has(complement)) {
            return [i, mapped.get(complement)]
        }
        mapped.set(nums[i], i)
    }
}




console.log(twoSum([2, 7, 11, 15], 9))
