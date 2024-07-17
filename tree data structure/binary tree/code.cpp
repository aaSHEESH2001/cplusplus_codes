#include<iostream>
#include<string>
using namespace std;

class Node{
    public:
    
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* buildTree(Node* root){

    int data;
    cout<<"Enter the data : ";
    cin>>data;
    cout<<endl;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Inserting data in the left of : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Inserting data in the right of : "<<data<<endl;
    root->right = buildTree(root->right);
    
    return root;

}

int main(){

    Node* root = NULL;

    root = buildTree(root);

    return 0;
}
