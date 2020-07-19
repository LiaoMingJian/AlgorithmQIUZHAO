int removeDuplicates(int* nums, int numsSize){
    if(numsSize < 2)
        return numsSize;
    int a = 0, b = 1;
    while(b < numsSize)
        if(nums[b++] > nums[a])
            nums[++a] = nums[b - 1];
    return (a + 1);
}





