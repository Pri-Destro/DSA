#include <iostream>
#include <map>
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



void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;

    }
    cout<<endl;
}


bool hasCycle(Node* &head){

    if (head == NULL){
        return false;
    }
    else {
        map<Node*,bool> visited;
        Node* curr = head;

        while(curr != NULL){
           if (visited[curr] == true) return true;
        
            visited[curr] = true;
            curr = curr->next;
        }
    }
}


int main(){
    Node* n = new Node(21);
    Node* head = n;

    insert_at_head(head,12);
    insert_at_head(head,10);

    print(head);
    if (hasCycle(head) == false) cout<<"cycle not present"<<endl;
    return 0;
}