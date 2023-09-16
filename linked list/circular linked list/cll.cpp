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

// void insertAtHead(Node* &head, int d){
//     Node* newNode = new Node(d);
//     if(head == NULL){
//         head = newNode;
//         newNode->next = head;
//     }
//     else{
//         Node* temp = head;
//         while(temp->next != head){
//             temp = temp->next;
//         }
//         newNode->next = head;
//         head = newNode;
//         temp->next = newNode;
//     }
// }

void insertAtHead(Node* &head, Node* &tail, int d){
    Node* newNode = new Node(d);
    if(head == NULL && tail == NULL){
        head = newNode;
        tail = newNode;
        tail->next = head;
    }
    else{
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
}

void insertAtTail(Node* &tail, int d){
    Node* newNode = new Node(d);
    if(tail == NULL){
        tail = newNode;
        tail->next = tail;
    }
    else{
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

void InsertAtPosition(Node* &head,Node* &tail, int d, int pos){

    if(pos == 1){
        insertAtHead(head,tail,d);
        return ;
    }

    Node* temp = head;
    int i = 1;
    while(i < pos-1){
        temp = temp->next;
        i++;
    }

    if(temp->next == head){
        insertAtTail(tail,d);
        return ;
    }
    Node* newNode = new Node(d);
    newNode->next = temp->next;
    temp->next = newNode;
}

void printFromHead(Node* &head){
    Node* temp = head;
    while(temp->next != head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,45);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,35);
    printFromHead(head);
    //cout<<head->next->next->next->next->data<<endl;
    //cout<<head->data<<endl;
    insertAtTail(tail,55);
    printFromHead(head);
    //cout<<tail->next->data;
    InsertAtPosition(head,tail,37,2);
    printFromHead(head);
    InsertAtPosition(head,tail,25,1);
    printFromHead(head);
    InsertAtPosition(head,tail,60,8);
    printFromHead(head);
    cout<<tail->next->data;
}