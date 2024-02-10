// https://www.geeksforgeeks.org/problems/reverse-a-string-using-stack/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    
    stack<char> s;
    for(int i=0; i<len; i++){
        s.push(S[i]);
    }
    int i=0;
    while(!s.empty() && i<len){
        char ch = s.top();
        S[i] = ch;
        i++;
        s.pop();
    }
    return S;
    
}