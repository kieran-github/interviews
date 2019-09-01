def twosum(ar, target):
    ret_value = []
    for i in ar:
        for j in range(len(ar)-1, -1, -1):
            if ar[i] + ar[j] < target:
                break
            elif ar[i] + ar[j==target:
                ret_value.append(ar[i])
                ret_value.append(ar[j])
                return ret_value
            else:
                continue
    return ret_value

    # for (int i = 0;i<numsSize;++i){
    #     for (int j = (numsSize-1);j>=0;--j){
    #         if(nums[j]+nums[i] < target){
    #             break;
    #         } else if(nums[j]+nums[i]==target){
    #             arr[0] = nums[j];
    #             arr[1] = nums[i];
    #             return *arr;
    #         } else{
    #             continue;
    #         }
    #     }
    # }
    # return *arr;
print(twosum([2,7,11,15], 9))