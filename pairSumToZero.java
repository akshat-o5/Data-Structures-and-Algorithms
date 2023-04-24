import java.util.*;

public class Solution {
	
    public static int PairSum(int[] input, int size) {
        HashMap<Integer,Integer> map = new HashMap<>();
         for(int i=0;i<size;i++){
            if(map.containsKey(input[i])){
                map.put(input[i],map.get(input[i])+1);
            }else{
                map.put(input[i],1);
            }
        }
        int count =	0;
        for(int i=0;i<size;i++){
            if(input[i]  == 0){
               int k = map.get(0);
                count += (k*(k-1))/2;
                map.put(input[i],0);
                continue;
            }
         if(map.containsKey(input[i]) && map.containsKey(-(input[i]))){
            count += map.get(input[i])*map.get(-(input[i]));
             map.put(input[i],0);
             map.put(-(input[i]),0);
         }
            
        }
        return count;  
    }
}