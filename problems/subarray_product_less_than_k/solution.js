const numSubarrayProductLessThanK = (nums, k) => {
  let count = 0,
    prod = 1,
    left = 0
  for (let right in nums) {
    prod *= nums[right]
    while (left <= right && prod >= k) prod /= nums[left++]
    count += right - left + 1
  }
  return count
}