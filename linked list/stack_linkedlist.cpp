// #include <iostream>
// #include<stdio.h>
// #include<stdlib.h>

// using namespace std;

// struct Node{
//     int data;
//     struct Node* next;
// };

// struct Node* top = NULL;

// void LL_traversal(struct Node *ptr){
//     while (ptr != NULL){
//         cout<<ptr -> data<<endl;
//         ptr = ptr -> next;

//     }
// }

// int isFull(struct Node* top){
//     struct Node* n = (struct Node*) malloc(sizeof(struct Node));
//     if (n == NULL){
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }
// int isEmpty(struct Node* top){
//     if (top == NULL) {
//         return 1;
//     }
//     else{
//         return 0;
//     }

// }

// struct Node* push(struct Node* top, int x){
//     if (isFull(top)){
//         cout<<"stack overflow";

//     }
//     else{
//         struct Node* n = (struct Node*)malloc(struct Node);
//         n -> data = x;
//         n -> next = top;
//         top = n;
//         return top;
//     }
// }


// int pop(struct Node* tp){
//     if (isEmpty(tp)){
//         cout<<"stack underflow";
//         }
//     else{
//         struct Node* n = tp;
//         top = tp -> next;
//         int x = n -> data;
//         free(tp);
//         return x;
//     }
// }


// int main(){
//     // struct Node* top == NULL;
//     top = push(top,8);
//     LL_traversal(top);

//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* top = NULL;
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout<< "element: " << ptr -> data<<endl;
        ptr = ptr -> next; 
    }
}
 
int isEmpty(struct Node* top){
    if (top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
int isFull(struct Node* top){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    if(temp==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
 
struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
        temp -> data = x;
        temp -> next = top;
        top = temp;
        return top;
    }
}
 
int pop(struct Node* tp){
    if(isEmpty(tp)){
        cout<< "stack overflow"<<endl;
    }
    else{
        struct Node* temp = tp;
        top = (tp) -> next;
        int x = temp -> data;
        free(temp);
        return x; 
    }
}
 
int main(){
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    
    // linkedListTraversal(top);
 
    int element = pop(top); 
    // printf("Popped element is %d\n", element);
    cout<<"popped element : "<<element <<endl;
    linkedListTraversal(top);
    return 0;
}
