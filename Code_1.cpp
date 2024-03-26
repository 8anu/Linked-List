#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* nxt;
    
    //constructor
    Node(int data){
        this -> data = data;
        this -> nxt = NULL;
    }

};



void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->nxt = head;
    head = temp;
}


void printNode(Node* &head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->nxt;
        
    }
}


int main(){
    Node* n1 = new Node(5);
    cout<<n1 -> data<<endl;
    cout<<n1 -> nxt<<endl;
    
    Node* head = n1;
    
    
    insertAtHead(head,10);
    printNode(head);
    
    
    return 0;
}
