// https://leetcode.com/problems/implement-stack-using-queues/

class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1, q2);
    }
    
    int pop() {
        int ans;
        if(q2.empty()){
            return -1;
        }
        else{
            ans = q2.front();
            q2.pop();
        }
        return ans;
    }
    
    int top() {
        return q2.front();
    }
    
    bool empty() {
        if(q2.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
