
public class lastIndexOfNumber{

	public static int lIndex(int input[], int x) {
		
        return lIndex(input,x,0);
	}
    public static int lIndex(int input[], int X, int sIndex){
        if(sIndex > input.length-1){
            return -1;
        }
        
        int smallAns = lIndex(input,X,sIndex+1);
        if(smallAns == -1){
            if(input[sIndex]==X){
                return sIndex;
            }else{
                return -1;
            }
        }else{
            return smallAns;
        }      
    }  
}