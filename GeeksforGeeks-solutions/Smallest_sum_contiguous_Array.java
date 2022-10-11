//User function Template for Java


class Solution
{
    static int smallestSumSubarray(int a[], int size)
    {
         int sum  = Integer.MAX_VALUE;
        int minSum = Integer.MAX_VALUE;
        int cSum = 0;
        
        for(int i=0;i<size;i++){
            
            cSum = Math.min(cSum +a[i],a[i]);
            sum = Math.min(cSum,sum);
            
        }
        return sum;
    }
}
     