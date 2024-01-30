#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void insert_at_head(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


void insert_at_tail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;    
}


void deletion(int position , Node* &head){
    if (position == 1){
        head = head -> next;
        Node* temp = head;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
    
}



void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;

    }
    cout<<endl;
}

void reverse(Node* &head){

    if(head == NULL || head -> next == NULL){
        cout<< head<<endl;
    }
    Node* prev = new Node;
    Node* curr = head;
    while (curr -> next == NULL){
        // fwd = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = curr -> next;
    }
    prev = head;
    
}

int main(){
    
    return 0;
}