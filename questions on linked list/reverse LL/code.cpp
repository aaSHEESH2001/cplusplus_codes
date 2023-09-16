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

void insertNode(Node* &head,int d){
    if(head == NULL){
        Node* newNode = new Node(d);
        head = newNode;
    }
    else{
        Node* newNode = new Node(d);
        newNode->next = head;
        head = newNode;
    }
}

void reverse_List(Node* &head){
    Node* store_next = NULL;
    Node* temp = head->next;
    head->next = NULL;
    while(temp != NULL){
        store_next = temp->next;
        temp->next = head;
        head = temp;
        temp = store_next;
    }
}


void print(Node* temp){
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

int main(){

    Node* head = NULL;

    insertNode(head,70);
    insertNode(head,60);
    insertNode(head,50);
    insertNode(head,40);
    insertNode(head,30);
    insertNode(head,20);
    insertNode(head,10);
    insertNode(head,5);
    print(head);
    reverse_List(head);
    print(head);
}
