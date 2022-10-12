public class Reverse_Integer {
	    public int reverse(int x) {
	        int ans=0;
	        while(x!=0)
	        {
	            int bit=x%10;
	            // System.out.println(x);
	            if(ans>(Integer.MAX_VALUE/10) || ans<(Integer.MIN_VALUE/10))
	                return 0;
	            ans=(ans*10)+bit;
	            // System.out.println(ans);
	            x=x/10;
	        }
	        return ans;
	    }
}
