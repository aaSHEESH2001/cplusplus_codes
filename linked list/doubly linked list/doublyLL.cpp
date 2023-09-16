#include<iostream>
using namespace std;

class DoubleNode{

    public:
        int data;
        DoubleNode *prev;
        DoubleNode *next;

        DoubleNode(int d){
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
        }
};

void insertAtHead(DoubleNode* &head, int d){
    if(head == NULL){
        DoubleNode* newNode = new DoubleNode(d);
        head = newNode;
    }
    else{
        DoubleNode* newNode = new DoubleNode(d);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(DoubleNode* &tail,int d){
    if(tail == NULL){
        DoubleNode* newNode = new DoubleNode(d);
        tail = newNode;
    }
    else{
        DoubleNode* newNode = new DoubleNode(d);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

}

void printFromHead(DoubleNode* &head){
    DoubleNode* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void printFromTail(DoubleNode* &tail){
    DoubleNode* temp = tail;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

void insertAtPosition(DoubleNode* &head,DoubleNode* &tail, int pos, int d){
    DoubleNode* temp = head;
    if(pos == 1){
        insertAtHead(head,d);
        return ;
    }

    int i = 1;
    while(i < pos-1){
        temp = temp->next;
        i++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d);
        return ;
    }
    DoubleNode* newNode = new DoubleNode(d);
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    newNode->next->prev = newNode;
}

void deleteFromHead(DoubleNode* &head, DoubleNode* &tail, int pos){
    DoubleNode* temp = head;
    if(head == NULL){
        return ;
    }

    if(head == tail){
        head = NULL;
        tail = NULL;
        delete head;
        delete tail;
        return ;
    }

    if(pos == 1){
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    int i = 1;
    while(i < pos-1){
        temp = temp->next;
        i++;
    }
    if(temp->next->next == NULL){
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
        return;
    }
    DoubleNode* NodeToDelete = temp->next;
    temp->next = NodeToDelete->next;
    NodeToDelete->next->prev = temp;
    NodeToDelete->next = NULL;
    NodeToDelete->prev = NULL;
    delete NodeToDelete;
}

int main(){

    DoubleNode *first = new DoubleNode(20);
    DoubleNode* head = first;
    DoubleNode* tail = first;
    // cout<<first->data<<endl;
    // cout<<first->next<<endl;
    // cout<<first->prev<<endl;

    insertAtHead(head,15);
    //printFromHead(head);
    insertAtHead(head,10);
    //printFromHead(head);

    //cout<<tail->data<<endl;
    //cout<<tail->next<<endl;
    //cout<<tail->prev->data<<endl;
    //cout<<tail->prev->prev->data<<endl;
    
    insertAtTail(tail,25);
    //printFromHead(head);
    //printFromTail(tail);

    insertAtPosition(head,tail,2,13);
    //printFromHead(head);
    //printFromTail(tail);

    insertAtPosition(head,tail,1,5);
    //printFromHead(head);
    //printFromTail(tail);

    insertAtPosition(head,tail,7,30);
    //printFromHead(head);
    //printFromTail(tail);
    printFromHead(head);

    deleteFromHead(head,tail,7);
    printFromHead(head);
    //cout<<tail->next<<endl;
    //cout<<tail->prev->data<<endl;
    //cout<<tail->data<<endl;

    deleteFromHead(head,tail,1);
    deleteFromHead(head,tail,1);
    deleteFromHead(head,tail,1);
    deleteFromHead(head,tail,1);
    deleteFromHead(head,tail,1);
    deleteFromHead(head,tail,1);
    printFromHead(head);
    printFromTail(tail);
    cout<<"Working fine"<<endl;
}