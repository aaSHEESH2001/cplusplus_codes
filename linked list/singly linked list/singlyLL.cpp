#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(int d){
            this -> data = d;
            this -> next = NULL;
        }

        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
        }
};

void insertAtHead(Node* &head, int d){

    Node* newNode = new Node(d);

    newNode -> next = head;
    head = newNode;
        
}

void insertAtTail(Node* &tail,int d){
    Node* newNode = new Node(d);
    tail->next = newNode;
    tail = newNode;
}

void print(Node* &head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void InsertAtPosition(Node* &head, int d, int pos,Node* &tail){

    if(pos == 1){
        insertAtHead(head,d);
        return ;
    }

    Node* newNode = new Node(d);
    Node* temp = head;
    int i = 1;
    while(i < pos-1){
        temp = temp->next;
        i++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d);
        return ;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteNode(Node* &head, int pos, Node* &tail){
    int i = 1;

    if(head == tail){
        delete head;
        head = NULL;
        return ;
    }

    if(pos == 1){
        head = head->next;
        return ;
    }

    Node* temp = head;
    while(i < pos-1){
        temp = temp->next;
        i++;
    }

    if(temp->next->next == NULL){
        delete temp->next;
        temp->next = NULL;
        tail = temp;
        return ;
    }

    // Node* del = temp->next;
    // temp->next = del->next;

    temp->next = temp->next->next;

    //delete del;
}

int main(){

    Node *first = new Node(15);

    //cout<<first->data<<endl;
    //cout<<first->next<<endl;

    Node* head = first;
    Node* tail = first;

    insertAtHead(head, 20);

    print(head);

    insertAtHead(head, 25);

    print(head);

    insertAtHead(head,30);
    print(head);

    insertAtTail(tail,50);
    print(head);

    insertAtTail(tail,60);
    print(head);

    insertAtHead(head,70);
    print(head);

    InsertAtPosition(head,80,3,tail);
    print(head);

    InsertAtPosition(head,90,1,tail);
    print(head);

    InsertAtPosition(head,100,10,tail);
    print(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    deleteNode(head,3,tail);
    print(head);

    deleteNode(head,1,tail);
    print(head);

    deleteNode(head,8,tail);
    print(head);
    cout<<head->data<<endl;
    //cout<<tail->data<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next->data<<endl;
    cout<<head->next->next->next->data<<endl;

    cout<<endl<<endl;
    deleteNode(head,4,tail);
    deleteNode(head,1,tail);
    deleteNode(head,1,tail);
    deleteNode(head,1,tail);
    deleteNode(head,1,tail);
    deleteNode(head,1,tail);
    print(head);
    cout<<endl<<endl;
    deleteNode(head,1,tail);
    print(head);

}