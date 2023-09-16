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

Node* middle_linked_list(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* onestep = head;
    Node* twostep = head->next;

    while(twostep != NULL){
        twostep = twostep->next;
        if(twostep != NULL){
            twostep = twostep->next;
        }
        onestep = onestep->next;
    }

    return onestep;
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
    Node* middle = middle_linked_list(head);
    print(middle);
}