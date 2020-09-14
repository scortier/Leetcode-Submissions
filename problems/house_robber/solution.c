int rob(int* nums, int numsSize){
    int i, odd_houses_sum = 0, even_houses_sum = 0;

    for(i = 0; i < numsSize; i++) {
        if(i % 2 == 0) {
            even_houses_sum = fmax(even_houses_sum + nums[i], odd_houses_sum);
        } else {
            odd_houses_sum = fmax(even_houses_sum, odd_houses_sum + nums[i]);
        }
    }

    return fmax(even_houses_sum, odd_houses_sum);

}