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

// void reverse(Node* &head){

//     if(head == NULL || head -> next == NULL){
//         cout<< head<<endl;
//     }
//     Node* prev = new Node;
//     Node* curr = head;
//     while (curr -> next == NULL){
//         // fwd = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = curr -> next;
//     }
//     prev = head;
    
// }

void reverse_by_recursion(Node* &head, Node* curr, Node* prev){
    //base case
    if (curr == NULL){
        head = prev;
        return;
    }

    Node* fwd = curr -> next;
    reverse_by_recursion(head,fwd,curr);
    curr -> next = prev;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;

    }
    cout<<endl;
}





int main(){
    Node* n = new Node(21);
    Node* head = n;

    insert_at_head(head,12);
    insert_at_head(head,10);
    cout<<n->data<<endl;
    cout<<head->data<<endl;
    print(head);
    return 0;
}