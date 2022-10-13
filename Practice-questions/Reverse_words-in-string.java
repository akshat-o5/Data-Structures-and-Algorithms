import java.util.*;
import java.io.*;
import java.lang.*;
  
class Main{ 
       
    static void reverse(char str[],int low, int high){
    while(low<=high){
      
        char temp=str[low];
        str[low]=str[high];
        str[high]=temp;
        //
        low++;
        high--;
    }
    }

    static void reverseWords(char str[],int n){
    int start=0;
    for(int end=0;end<n;end++)
    {
        if(str[end]==' '){
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
    }
  
    public static void main(String args[]) 
    {   String s = "Welcome to Program";
         int n=s.length();
        char[] str = s.toCharArray();
        reverseWords(str,n);
        System.out.println(str);  
    } 
} 
