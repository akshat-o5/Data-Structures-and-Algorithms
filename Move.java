class Solution {
    public void moveZeroes(int[] arr) {
        if(arr==null || arr.length==0){
            return;
        }
       int res =0;
        for(int i=0;i<arr.length;i++){
            if(arr[i] != 0){
              arr[res] = arr[i];
                res++;
              
            }
        }
       while(res<arr.length){   // put extra zero at the end
            arr[res]=0;
            res++; 
        
    }
}}
