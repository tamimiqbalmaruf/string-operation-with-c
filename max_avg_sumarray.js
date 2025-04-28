
var findMaxAverage = function (nums, k) {

    let maxAvg = -10000;
    let i = 0;

    while (i <= nums.length - k) {
        let sum = 0;
        for (let j = 0; j < k; j++) {
            sum += nums[j+i];
        }

        if (sum / k > maxAvg) {
            maxAvg = sum / k;
        }
        i++;
    };

    return maxAvg;

};


console.log(findMaxAverage([-1], 1));