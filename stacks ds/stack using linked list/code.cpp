#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

class Stack{
    private:
        Node* top;

    public:
        Stack(){
            top = NULL;
        }

        void push(int x){
            Node* newNode = new Node(x);
            newNode->next = top;
            top = newNode;
        }

        int pop(){
            if(top == NULL){
                cout<<"There is no element to pop";
                return -1;
            }
            Node* del_Node = top;
            top = top->next;
            delete del_Node;
        }

        int Top(){
            if(top == NULL){
                cout<<"Stack is empty";
                return -1;
            }
            return top->data;
        }

        bool isEmpty(){
            if(top == NULL){
                return false;
            }
            else{
                return true;
            }      
        }

        void print(){
            Node* temp = top;
            if(top == NULL){
                cout<<"The stack is empty"<<endl;
            }
            while(temp != NULL){
                cout<<temp->data<<endl;
                temp = temp->next;
            }
        }

};

int main(){
    Stack s;
    s.push(5);
    s.push(3);
    s.push(4);
    s.push(6);
    s.print();
    cout<<"Top element : "<<s.Top()<<endl;
    s.push(7);
    s.print();
    cout<<"Top element : "<<s.Top()<<endl;
    s.pop();
    s.print();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.print();
}