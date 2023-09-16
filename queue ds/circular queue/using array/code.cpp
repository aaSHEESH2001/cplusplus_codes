#include<iostream>
using namespace std;

class CircularQueue{
    public:
        int front;
        int rear;
        int* arr;
        int size;

        CircularQueue(int n){
            size = n;
            arr = new int[size];
            front = rear = -1;
        }

        bool enqueue(int x){
            if((rear == size-1 && front == 0) || (rear == (front-1)%(size-1))){
                return false;
            }
            else if(front == -1){
                front = rear = 0;
            }
            else if(rear == size-1 && front != 0){
                rear = 0;
            }
            else{
                rear++;
            }
            arr[rear] = x;
            return true;
        }

        int dequeue(){
            if(front == -1){
                return -1;
            }
            int value = arr[front];
            arr[front] = -1;
            if(front == rear){
                front = rear = -1;
            }
            else if(front == size-1){
                front = 0;
            }
            else{
                front++;
            }
            return value;
        }

};

int main(){

}