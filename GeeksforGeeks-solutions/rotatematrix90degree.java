//URL:-https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Matrix/problem/rotate-by-90-degree-1587115621
class Solution
{
    //Function to rotate matrix anticlockwise by 90 degrees.
    static void rotateby90(int matrix[][], int n) 
    { 
        // code here
        for(int i=0; i<n;i++)
        {
            for(int j=i+1; j<n;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int low=0;
            int high=n-1;
            while(low<=high){
                int temp=matrix[low][i];
                matrix[low][i]=matrix[high][i];
                matrix[high][i]=temp;
                low++;
                high--;
            }
        }
    }
}