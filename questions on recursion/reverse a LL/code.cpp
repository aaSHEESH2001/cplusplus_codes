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

void print(Node* temp){
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

void reverse_List(Node* &head, Node* prev, Node* curr){
    if(curr == NULL){
        head = prev;
        return ;
    }
    Node* forward = curr->next;
    reverse_List(head,curr,forward);
    curr->next = prev;

}

Node* reverse1(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* chotaHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;
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

    //Node* curr = head;
    //Node* prev = NULL;
    head = reverse1(head);
    print(head);
}
