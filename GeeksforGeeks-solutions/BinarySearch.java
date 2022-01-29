// URL: https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1/?problemType=functional&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&page=1&sortBy=submissions&category[]=Binary%20Search&category[]=Searching&query=problemTypefunctionaldifficulty[]-2difficulty[]-1difficulty[]0page1sortBysubmissionscategory[]Binary%20Searchcategory[]Searching#

public class BinarySearch {

    public static void main(String[] args) {

        int[] nums = {-1,0,3,5,9,12};
        int target = 9;
        int n = nums.length;

        int ans = binarysearch(nums, n, target);

        System.out.println(ans);

    }

    static int binarysearch(int arr[], int n, int k){
        // code here
        int start = 0;
        int end = n - 1;
        while (start<=end){
            int mid = start + (end - start) / 2;
            if (k < arr[mid]){
                end = mid - 1;
            }
            else if (k > arr[mid]){
                start = mid + 1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }

}