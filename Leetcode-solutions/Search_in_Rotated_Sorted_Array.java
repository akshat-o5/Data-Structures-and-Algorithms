public class Search_in_Rotated_Sorted_Array {	    
	    public int binarySearch(int s,int e,int target,int[] arr)
	    {
	        int mid;
	        while(s<=e)
	        {
	            mid=(s+e)/2;
	            if(arr[mid]==target)
	                return mid;
	            else if(arr[mid]<target)
	                s=mid+1;
	            else
	                e=mid-1;
	        }
	        return -1;
	    }
	    
	    public int search(int[] nums, int target) {
	        int mid,s=0,e=nums.length-1;
	        while(s<e)
	        {
	            mid=(s+e)/2;
	            if(nums[mid]>=nums[0])
	                s=mid+1;
	            else
	                e=mid;
	        }
	        int pivot=s;
	        if(target>=nums[pivot] && target<=nums[nums.length-1])
	            return binarySearch(pivot,nums.length-1,target,nums);
	        else
	            return binarySearch(0,pivot-1,target,nums);
	            
	    }
}
