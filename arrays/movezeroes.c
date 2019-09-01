/**
*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
*/

void moveZeroes(int* nums, int numsSize){
    int index = 0;
    for(int i = 0;i<numsSize;++i){
        if(nums[i]!=0){
            nums[index++]=nums[i];
        }    
    }
    for(int j = index;j<numsSize;++j){
        nums[j] = 0;
    }
}

