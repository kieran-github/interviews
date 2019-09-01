
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target){
    int arr[2];
    
    
    for (int i = 0;i<numsSize;++i){
        for (int j = (numsSize-1);j>=0;--j){
            if(nums[j]+nums[i] < target){
                break;
            } else if(nums[j]+nums[i]==target){
                arr[0] = nums[j];
                arr[1] = nums[i];
                return arr;
            } else{
                continue;
            }
        }
    }
    return arr;
}


int main(void){

}