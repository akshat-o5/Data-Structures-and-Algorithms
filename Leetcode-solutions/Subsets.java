// Given an integer array nums of unique elements, return all possible subsets.
// Problem link: https://leetcode.com/problems/subsets/

class Solution {
    
    private List< List<Integer> > allSubset = new ArrayList< List<Integer> >();
    private List< Integer > bag = new ArrayList<Integer>();
    
    private void makeSubset(int startIndex, int[] nums){
        
        // Add current subset into final result
        // Java object is passing by refernce, so we have to make a copy here
        allSubset.add(new ArrayList<Integer>(bag));


        // Base cases aka stop condition:
        // No more element
        if( startIndex == nums.length ){
            return;
        }

        //// General cases
        // Current level, we choouse element on index i
        for( int i = startIndex ; i < nums.length ; i++ ){ 

            bag.add( nums[i] );            // put this element into bag
            makeSubset(i+1, nums );   // make subset from remaining elements
            bag.remove(bag.size()-1);     // undo selection
        }
        return;
        
    }
    public List<List<Integer>> subsets(int[] nums) {
        
         makeSubset(0, nums);    
         return allSubset;
    }
}
