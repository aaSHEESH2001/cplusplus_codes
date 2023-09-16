#include<iostream>
using namespace std;

class Queue{
    int front;
    int rear;
    int* arr;
    int size;

    Queue(){
        front = rear = 0;
        int size = 10000;
        arr = new int[size];
    }

    void push(int x){
        if(rear == size){
            cout<<"Queue is full cant push element";
        }
        else{
            arr[rear] = x;
            rear++;
        }
    }
    int pop(){
        if(front == rear){
            cout<<"The queue is empty cannot perform pop operation";
            return -1;
        }
        else{
            int value = arr[front];
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
            return value;
        }
    }

    int front_element(){
        if(front == rear){
            return -1;
        }
        return arr[front];
    }

    bool isEmpty(){
        return front == rear;
    }

};

int main(){

}