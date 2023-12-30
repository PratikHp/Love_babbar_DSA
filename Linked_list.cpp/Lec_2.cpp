#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(node* &head){
    node* temp = head;
    while(temp!=0){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getlength(node* head){
    int len = 0;
    node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertathead(node* &head,node* &tail, int data){
    if(head==NULL){
        //LL is empty
        node* newnode= new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    //linked list is non-empty
    //step:1 create a node
    node* newnode = new node(data);
    //step:2
    newnode->next= head;
    //step:3
    newnode->prev=newnode;
    //step:4
    head = newnode;
}

void insertattail(node* &head,node* &tail, int data){
    if(head==NULL){
        //LL is empty
        node* newnode= new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    //linked list is non-empty
    //step:1 create a node
    node* newnode = new node(data);
    //step:2
    tail->next= newnode;
    //step:3
    newnode->prev = tail;
    //step:4
    tail = newnode;
}

void insertatposition(node* &head, node* &tail,int data,int position){
    if(head==NULL){
        //LL is empty
        node* newnode= new node(data);
        head = newnode;
        tail = newnode;
        return;
    }

    if(position==1){
           insertathead(head,tail,data);
           return;
    }
    int len = getlength(head);
    if(position>len){
        insertattail(head,tail,data);
        return;
    }
    //insertion in middle
    //step1:find prev & curr
    int i = 1;
    node* prevnode = head;
    while(i<position-1){
        prevnode=prevnode->next;
        i++;
    }
    node* curr = prevnode->next;

    //step2:Create a node
    node* newnode = new node(data);

    //step3:
    prevnode->next= newnode;
    newnode->prev= prevnode;
    curr->prev= newnode;
    newnode->next= curr;
}

void deleteatpos(node* &head, node* &tail, int pos){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    if(head->next==NULL){
        //single node
        node* temp = head;
        head = NULL;
        tail= NULL;
        delete temp;
        return; 
    }
    if(pos==1){
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
        return;
    }
    int length = getlength(head);

    if(pos==length){
        node* temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    int i =1;
    node* left = head;
    while(i<pos-1){
        left=left->next;
        i++;
    }
    node* current =  left->next;
    node* right = current->next;

    left->next  = right;
    right->prev = left;

    current->next = NULL;
    current->prev = NULL;

    delete current;

}

node* reverse(node* &prev,node* &curr){
    //base case
    if(curr==NULL){
        //LL reverse ho chuki hai
        return prev;
    }

    //solve 1 case reccursion will take care
    node* forward=curr->next;
    curr->next=prev;

    reverse(curr,forward);
}

node* reverseusingloop(node* head){
    node* prev = NULL;
    node* curr = head;
 
    while(curr!=NULL){
        node* temp = curr->next;
        curr->next = prev;
        prev=curr;
        curr=temp;
    }
   return prev;
}

node* reverseusingRecursion(node* prev, node* curr) {
        //base case
        if(curr == NULL) 
                return prev;

        node* temp = curr ->next;
        curr ->next = prev;
        prev = curr;
        curr = temp;

        //recursion sambhal lega
        return reverseusingRecursion(prev, curr);
}

int main(){
    node* first= new node(10);
    node* second = new node(30);
    node* third = new node(50);
    node* head = first;
    node* tail = third;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev= second;

    print(first);
    cout<<endl;
    insertathead(head,tail,101);
    cout<<endl;
    print(head);
    // cout<<endl;
    // insertattail(head,tail,501);
    // cout<<endl;
    // print(head);
    // cout<<endl;
    // insertatposition(head,tail,401,1);
    // cout<<endl;
    // print(head);
    cout<<endl;
    deleteatpos(head,tail,3);
    cout<<endl;
    print(head);
    cout<<endl;

    // node* prev = NULL;
    // node* curr = head;
    // //head = reverse(prev,curr);
    // //head = reverseusingloop(head);
    // head = reverseusingRecursion(prev,curr);
    // cout<<endl;
    // print(head);
    // cout<<endl;


    return 0;
}