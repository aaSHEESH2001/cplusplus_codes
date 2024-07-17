#include<iostream>
using namespace std;

class Deque{
    int front;
    int rear;
    int* arr;
    int size;
    public:
        Deque(){
            front = rear = -1;
            size = 1000;
            arr = new int[size];
        }

        bool isEmpty(){
            if(rear == -1 && front == -1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            return ((rear+1)%size == front); 
        }

        void push_front(int value){
            if(isFull()){
                cout<<"Queue is full";
                return ;
            }
            else if(isEmpty()){
                front = rear = 0;
            }
            else{
                front = (front-1 + size)%size;
            }
            arr[front] = value;
        }

        void push_back(int value){
            if(isFull()){
                cout<<"Queue is full";
                return ;
            }
            else if(isEmpty()){
                front = rear = 0;
            }
            else{
                rear = (rear+1)%size;
            }
            arr[rear] = value;
        }

        int pop_front(){
            if(isEmpty()){
                return -1;
            }
            else if(front == rear){
                int ans = arr[front];
                arr[front] = -1;
                front = rear = -1;
                return ans;
            }
            else{
                int ans = arr[front];
                arr[front] = -1;
                front = (front+1)%size;
                return ans;
            }
        }

        int pop_back(){
            if(isEmpty()){
                return -1;
            }
            else if(front == rear){
                int ans = arr[front];
                arr[front] = -1;
                front = rear = -1;
                return ans;
            }
            else{
                int ans = arr[rear];
                arr[rear] = -1;
                rear = (rear-1+size)%size;
                return ans;
            }
        }

        int getFront(){
            if(isEmpty()){
                return -1;
            }
            else{
                return arr[front];
            }
        }

        int getBack(){
            if(isEmpty()){
                return -1;
            }
            else{
                return arr[rear];
            }
        }
};

int main(){

}