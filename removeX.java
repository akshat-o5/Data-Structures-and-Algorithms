public class solution {

	public static String removeX(String input){
        return removeX(input,0);
    }

    public static String removeX(String input , int sIndex){
        if(sIndex == input.length()){
            return "";
        }
        if(input.charAt(sIndex)=='x'){
            return removeX(input,sIndex+1);
        }
        String ans = input.charAt(sIndex) + removeX(input,sIndex+1);
        return ans;

	}
}
