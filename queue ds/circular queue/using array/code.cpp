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

        bool isEmpty(){
            return (front == -1 && rear == -1);
        }

        bool isFull(){
            return ((rear+1)%size == front);
        }

        bool enqueue(int x){
            if(isFull()){
                return false;
            }
            else if(isEmpty()){
                front = rear = 0;
            }
            else{
                rear = (rear+1)%size;
            }
            arr[rear] = x;
            return true;
        }

        int dequeue(){
            if(isEmpty()){
                return -1;
            }
            if(front == rear){
                int ans = arr[front];
                front = rear = -1;
                return ans;
            }
            else{
                int ans = arr[front];
                front = (front+1)%size;
                return ans;
            }
        }
};

int main(){

}