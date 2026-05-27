/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    let min = Infinity
    let maxPro = 0
    prices.forEach(pri => {
        if (pri < min) min = pri
        let pro = pri - min
        if (pro > maxPro) maxPro = pro
    })
    return maxPro
}

console.log(maxProfit([7, 6, 5, 1, 6, 4]))
console.log(maxProfit([2, 4, 1]))
console.log(maxProfit([2, 1, 2, 0, 1]))

