#include<iostream>
using namespace std;

class Stack{
    public:
        int size;
        int* arr;
        int top;
        
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element){
            if(size-top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"Stack overflow"<<endl;
            }
        }
        
        void pop(){
            if(top >= 0){
                top--;
            }
            else{
                cout<<"Stack underflow"<<endl;
            }
        }
        
        int peek(){
            if(top >= 0 && top < size)
                return arr[top];
            else{
                cout<<"Stack is empty"<<endl;
                return -1;
            }
        }

        bool isempty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.peek()<<endl;
    s.push(4);
    s.push(5);
    cout<<s.peek()<<endl;
    s.push(7);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
    s.push(5);
    cout<<s.isempty()<<endl;
}