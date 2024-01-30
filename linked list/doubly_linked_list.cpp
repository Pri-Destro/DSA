#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;

    }
};


void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insert_at_head(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}


void insert_at_tail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void insert_at_position(Node* &head, Node* &tail,int position, int d){
    if (position == 1){
        insert_at_head(head,d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position -1 ){
        temp = temp -> next;
        count++;
    }

    if (temp -> next == NULL){
        insert_at_tail(tail,d);
        return;
    }
    //creating node for d
    Node* NewNode = new Node(d);
                     //next element
    NewNode -> next = temp -> next;
    temp -> next -> prev = NewNode;
    temp -> next = NewNode;
    NewNode -> prev = temp;

}

void deletenode(int position, Node* head, Node* tail){
    if(position == 1){
        Node* temp = head;
        head = temp -> next;

        temp -> next -> prev = NULL;
    }   
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr-> next;
            cnt ++;
        }
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        

    }

}

int main(){
    Node* node1  = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insert_at_head(head,11);
    print(head);


    insert_at_position(head, tail, 2,12);
    print(head);
    return 0;


}