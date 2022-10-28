
public class firstIndexOfNumber {

	public static int fIndex(int input[], int x) {
		
        return fIndex(input,x,0);
    }
    public static int fIndex(int input[],int X,int sIndex){
        if(sIndex > input.length-1){
            return -1;
        }
        if(input[sIndex]==X){
            return sIndex;
        }
        int smallAns = fIndex(input,X,sIndex+1);
        return smallAns;
    }
	
}