//URL:-https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Matrix/problem/transpose-of-matrix-1587115621
class Solution
{
    //Function to find transpose of a matrix.
    static void transpose(int matrix[][], int n)
    {
    
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++){
              int temp=matrix[i][j];  
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
        }
    }
}
