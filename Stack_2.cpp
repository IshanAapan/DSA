// Implement Stack using class

#include<bits/stdc++.h>
 using namespace std;

class Stack {
    // properties
    public:
        int *arr;
        int top;
        int size;
        
    // behaviour
    Stack(int size){
        this->size = size; 
        arr=new int[size];
        top=-1;
    }
    
    // 4 functions
    void push(int element){
        if(top==size-1){
            cout<<"Stack is Overflow";
        }
        else{
            top++;
            arr[top]=element;
        }
    }
    
    void pop (){
        if(top==-1){
            cout<<"Stack is underflow";
        }
        else{
            top--; 
        }
    }
    
    int peek(){
        if(top>=0){
            return arr[top]; 
        }
        else{
            cout<<"Stack is Empty";
            return -1; 
        }
    }
    
    bool isempty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
};
 
 int main(){
     Stack s(5);
     s.push(11);
     s.push(12);
     s.push(13);
     s.push(14);
     s.push(15);
     cout<<"Top:->"<<s.peek()<<endl;
     cout<<"empty:->"<<s.isempty()<<endl;
    //  s.peek();
     s.pop();
     cout<<"Top 2:->"<<s.peek()<<endl;
     cout<<"empty 2:->"<<s.isempty()<<endl;
     
     s.pop();
    cout<<"Top 3:->"<<s.peek()<<endl;
     cout<<"empty 3:->"<<s.isempty()<<endl;
     
    //  s.isempty();
     s.pop();
     cout<<"Top 4:->"<<s.peek()<<endl;
     cout<<"empty 4:->"<<s.isempty()<<endl;
     
     s.pop();
     cout<<"Top 5:->"<<s.peek()<<endl;
     cout<<"empty 5:->"<<s.isempty()<<endl;
     
     s.pop();
     cout<<"Top 6:->"<<s.peek()<<endl;
     cout<<"empty 6:->"<<s.isempty()<<endl;
     
    //  s.isempty();
 }
