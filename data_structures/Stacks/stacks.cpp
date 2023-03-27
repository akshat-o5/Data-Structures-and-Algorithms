// #include <iostream>
// using namespace std;

// class Stack{

//     //properties
//     public:
//     int *arr;
//     int top;
//     int size;

//     //functions

//     // Constructor for creating an empty stack
//     Stack(int size){
//         this -> size = size;
//         arr = new int(size);
//         top = -1;
//     }

//     // Inserting an element in stack
//     void push(int element){
//         if(size - top > 1){
//             // Space available
//             top++;
//             arr[top] = element;
//         }
//         else{
//             // Space not available
//             cout<<"Stack OverFlow"<<endl;
//         }
//     }

//     // Removing an element from stack
//     void pop(){
//         if(top >= 0){
//             // An element is present
//             top--;
//         }
//         else{
//             // Stack is empty
//             cout<<"Stack UnderFlow"<<endl;
//         }
//     }

//     // Accessing top-most element
//     int peek(){
//         if(top >= 0 ){
//             // Element is present
//             return arr[top];
//         }
//         else{
//             // Stack is empty
//             cout<<"Stack Underflow"<<endl;
//             return -1;
//         }
//     }

//     bool isEmpty(){
//         if(top == -1){
//             // Stack is empty
//             return true;
//         }
//         else{
//             // Stack is not Empty
//             return false;
//         }
//     }

// };

// int main(){

//     Stack s(5);

//     s.push(2);
//     s.push(5);
//     s.push(7);

//     cout<<s.isEmpty()<<endl;

//     cout<<s.peek()<<endl;

//     s.pop();
//     cout<<s.peek()<<endl;

//     s.pop();
//     cout<<s.peek()<<endl;

//     s.pop();
//     cout<<s.peek()<<endl;

//     cout<<s.isEmpty()<<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

class Stack
{

    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour

    // Constructor for creatingan empty stack
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // Inserting an element in stack
    void push(int element)
    {
        if (size - top > 1)
        {
            // space available hai
            top++;
            arr[top] = element;
        }
        else
        {
            // space availabe nhi hai
            cout << "Stack Overflow" << endl;
        }
    }

    // Removing an element from stack
    void pop()
    {
        // element present hai
        if (top >= 0)
        {
            top--;
        }
        else
        {
            // element present nhi hai
            cout << "Stack Underflow" << endl;
        }
    }

    // Accessing top-most element
    int peek()
    {
        if (top >= 0)
        {
            // Element is present
            return arr[top];
        }
        else
        {
            // Stack is empty
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    // Checking for empty stack
    bool isEmpty()
    {
        if (top == -1)
        {
            // Stack is empty
            return true;
        }
        else
        {
            // Stack is not Empty
            return false;
        }
    }
};

int main()
{

    Stack st(5);

    st.push(22);
    st.push(33);
    st.push(44);
    st.push(55);
    st.push(66);

    // st.push(77);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    cout << st.isEmpty() << endl;
}