class Solution {
    
    TreeMap<Integer,Integer> hm=new TreeMap();
    int val;
    
    public void insert(int e)
    {
        if(hm.get(e)==null)
                hm.put(e,1);
            else
            {
                val=(int)hm.get(e);
                hm.put(e,++val);
            }
    }
    
    public void remove(int e)
    {
        val=(int)hm.get(e)-1;
        if(val==0)
            hm.remove(e);
        else
            hm.put(e,val);
    }
    
    // public int findMax()
    // {
    //     int max=0;
    //     for(Map.Entry<Integer,Integer> j:hm.entrySet())
    //     {
    //         max=j.getKey();
    //         System.out.print(j);
    //     }
    //     System.out.println();
    //     return max;
    // }
    
    public int[] maxSlidingWindow(int[] nums, int k) {
        
        if(k==1)
            return nums;
        
        int i;
        int arr[]=new int[nums.length-k+1];
        
        for(i=0;i<k;i++)
        {
          insert(nums[i]);
        }
        arr[0]=hm.lastKey();
        
        int j=0;
        for(i=k;i<nums.length;i++)
        {
            insert(nums[i]);
            remove(nums[j]);
            j++;
            arr[j]=hm.lastKey();
        }
        return arr;
    }
}