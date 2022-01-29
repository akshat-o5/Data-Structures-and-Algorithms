// Search an Element in Sorted Array
// URL: https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1/?category[]=Binary%20Search&category[]=Searching&category[]=Binary%20Search&category[]=Searching&problemType=functional&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&page=1&sortBy=submissions&query=category[]Binary%20Searchcategory[]SearchingproblemTypefunctionaldifficulty[]-2difficulty[]-1difficulty[]0page1sortBysubmissionscategory[]Binary%20Searchcategory[]Searching#

public class SearchInSorted {

    public static void main(String[] args) {

        int[] nums = {-1,0,3,5,9,12};
        int target = 9;
        int n = nums.length;

        int ans = searchInSorted(nums, n, target);

        System.out.println(ans);

    }

    static int searchInSorted(int arr[], int N, int K){
        // code here
        int start = 0;
        int end = N - 1;
        while (start<=end){
            int mid = start + (end - start) / 2;
            if (K < arr[mid]){
                end = mid - 1;
            }
            else if (K > arr[mid]){
                start = mid + 1;
            }
            else{
                return 1;
            }
        }
        return -1;
    }

}