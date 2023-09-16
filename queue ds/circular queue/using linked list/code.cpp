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
class CircularQueue{
    public:
        Node* front;
        Node* rear;
        int size;

    CircularQueue(int n){
        size = n;
        front = NULL;
        rear = NULL;
    }

    bool enqueue(int value){
        Node* newNode = new Node(value);
        if(size == 0){
            return false;
        }
        if(front == NULL){
            size--;
            front = rear = newNode;
            return true;
        }
        else{
            size--;
            rear->next = newNode;
            newNode->next = front;
            rear = newNode;
            return true;
        }
    }

    
    int dequeue(){
        if(front == NULL){
            return -1;
        }
        else if(front == rear){
            Node* temp = front;
            int value = front->data;
            front = NULL;
            rear = NULL;
            size++;
            delete temp;
            return value;
        } else {
            Node *temp = front;
            int value = front->data;
            front = front->next;
            size++;
            delete temp;
            return value;
        }
    }
};

int main(){
    
}