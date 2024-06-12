void sortColors(int* nums, int numsSize) {
        
        for(int k=0;k<numsSize;k++){
            for(int i=k+1;i<numsSize;i++){
                if(nums[k]>nums[i]){ ///比較大小不對就交換
                int temp =nums[k];
                nums[k]=nums[i];
                nums[i]=temp;
            }
        }
    }
}