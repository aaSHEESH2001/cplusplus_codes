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

void insertAtHead(Node* &head,int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
}

void print(Node* temp){
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* reverseInGroup(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;

    int count = 0;

    while(count < k && curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if(next != NULL){
        head->next = reverseInGroup(next,k);
    }
    return prev;
}

int main(){
    Node* head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,9);
    insertAtHead(head,10);
    print(head);
    head = reverseInGroup(head,3);
    print(head);
}