#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Queue{
    private:
        Node* front;
        Node* rear;

    public:
        Queue(){
            front = NULL;
            rear = NULL;
        }

        void push(int data){
            Node* newNode = new Node(data);
            if(rear == NULL){
                rear = newNode;
                front = newNode;
            }
            else{
                rear->next = newNode;
                rear = newNode;
            }
        }

        int pop(){
            int value;
            if(front == NULL){
                value = -1;
                return value;
            }
            else if(front == rear){
                value = front->data;
                Node* temp = front;
                front = NULL;
                rear = NULL;
                delete temp;
                return value;
            }
            else{
                value = front->data;
                Node* temp = front;
                front = front->next;
                delete temp;
                return value;
            }
        }

        int front_element(){
            if(front == NULL){
                return -1;
            }
            else{
                return front->data; 
            }
        }  

        bool isEmpty(){
            if(front == NULL){
                return true;
            }
            else{
                return false;
            }
        }    
};

int main(){
    Queue q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    cout<<q.front_element()<<endl;
    q.pop();
    cout<<q.front_element()<<endl;
    q.pop();
    cout<<q.front_element()<<endl;
    q.pop();
    cout<<q.front_element()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.front_element()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.isEmpty()<<endl;
    q.push(5);
    cout<<q.isEmpty()<<endl;
}  