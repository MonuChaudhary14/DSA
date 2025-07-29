#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    public:
    Node(int data  , Node *next){
        this->data = data;
        this->next = next;
    }
    Node(int data){
        this->data = data;
        next = nullptr;
    }

};


Node* deletenode(Node * head , int x){    // This is wrong

    if(head == NULL) return head;
    if(head->data == x){

        Node * temp = head;
        head = head->next;
        free(temp);

    }
    if(head->next == NULL) return head->data == x? NULL : head;

    Node * temp = head;
    Node * prev = NULL;
    int count = 0;

    while(temp != NULL){


        if(temp->data == x){
            prev->next = temp->next;
            Node * curr = temp;
            temp = temp->next;
            free(curr);
        }        
        else{
            prev = temp;
            temp = temp->next;
        } 
        
    }
    return head;
}

Node* insert(Node *head , int x, int num){

    if(head == NULL){

        if(x == 1) return new Node(num, nullptr);
        else return NULL;

    }

    if(x == 1){
        Node *temp = new Node(num, head);
        return temp;
    }

    Node * temp = head;
    int count = 0;

    while(temp != NULL){

        count++;

        if((x-1) == count){
            Node * newElement = new Node(num , nullptr);
            newElement->next = temp->next;
            temp->next = newElement;
            break;
        }
        else{
            temp = temp->next;
        }

    }
    return head;
}
 
int main(){
 
    
    return 0;
}