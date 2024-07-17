#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int d){
            this->data = d;
            this->next = NULL;
            this->prev = NULL;
        }
};

class doublyQueue{
    Node* front;
    Node* rear;

    doublyQueue(){
        front = NULL;
        rear = NULL;
    }

    void push_front(int x){
        Node* newNode = new Node(x);
        if(front == NULL){
            front = newNode;
            rear = newNode;
        }
        else{
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
    }

    void push_back(int x){
        Node* newNode = new Node(x);
        if(front == NULL){
            front = newNode;
            rear = newNode;
        }
        else{
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
    }

    int pop_front(){
        if(front == NULL){
            return -1;
        }

        if(front == rear){
            delete front;
            front = rear = NULL;
        }
        else{
            int value = front->data;
            Node* temp = front;
            front = front->next;
            front->prev = NULL;
            delete temp;
            return value;
        }

    }

    int pop_back(){
        if(front == NULL){
            return -1;
        }

        if(front == rear){
            delete front;
            front = rear = NULL;
        }
        else{
            Node* temp = rear;
            int value = rear->data;
            rear = rear->prev;
            rear->next = NULL;
            delete temp;
            return value;
        }
    }

    int getfront(){
        if(front == NULL){
            return -1;
        }
        return front->data;
    }

    int getLast(){
        if(rear == NULL){
            return -1;
        }
        return rear->data;
    }

    bool isEmpty(){
        return front == NULL;
    }

};

int main(){

    

}