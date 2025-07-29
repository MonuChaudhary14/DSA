#include<bits/stdc++.h>
using namespace std;

class Node{

    int data;
    Node * next;

    public:
    Node(int data  , Node *next){
        this->data = data;
        this->next = next;
    }

};
 
int main(){
 
    Node * head = new Node(5, nullptr);


    return 0;
}