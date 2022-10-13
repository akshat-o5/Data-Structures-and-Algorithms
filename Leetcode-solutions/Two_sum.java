class Solution {

    public int[] twoSum(int[] nums, int target) {

       

        HashMap<Integer,Integer> hm=new HashMap<>(); 

        int res[]=new int[2];

        

        for(int i=0;i<nums.length;i++)

        {

            int needed=target-nums[i];

            if(hm.containsKey(needed)) 

            {

                res[0]=i;

                res[1]=hm.get(needed);

				break;            }

            else

                hm.put(nums[i],i);

        }

        return res;

        

    }

}
