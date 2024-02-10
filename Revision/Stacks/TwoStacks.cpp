// https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article



//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends




class twoStacks
{
    int *arr;
    int top1;
    int top2;
    int size;
    
    
    public:
    
    twoStacks()
    {
        size = 100; // Default size of the stack arrays

        top1=-1;
        top2=size;
        arr = new int[size];
        
    }
 
    //Function to push an integer into the stack1.
    void push1(int x)
    {
        if(top1 < top2 - 1){
            top1++;
            arr[top1]=x;
            
        }
        else {
            cout << "Stack Overflow for stack1" << endl;
        }
        
        
        
    }
    
    //Function to push an integer into the stack2.
    void push2(int x){
        
     if(top1 < top2 - 1){
    
        top2--;
        arr[top2]=x;
     }
     else {
            cout << "Stack Overflow for stack2" << endl;
        }
        
       
    }
    
    //Function to remove an element from top of the stack1.
    int pop1()
    {
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    
    //Function to remove an element from top of the stack2.
    int pop2()
    {
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
       
    }
};




//{ Driver Code Starts.

int main()
{

    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";

        }
        }
        cout<<endl;
    }
}

// } Driver Code Ends