#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next = NULL;

    node(){
        int data = 0;
        node* next = NULL;
    }

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(node* &head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
   node* first = new node(10);
   node* second = new node(20);
   node* third = new node(30);

   first->next = second;
   second->next = third;

   print(first);
   return 0;
}