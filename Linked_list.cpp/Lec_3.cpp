#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(node* &head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* getmiddle(node* &head)
{
    if (head == NULL)
    {
        cout << "LL is empty " << endl;
        return head;
    }
    if (head->next == NULL)
    {
        // only 1 node in NULL
        return head;
    }

    // LL have 1 node
    node* slow = head;
    node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
          if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
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

node* reverseKnodes(node* &head, int k){
    if(head==NULL){
        cout<<"LL is empty "<<endl;
        return NULL;
    }
    int len = getlength(head);
    if(k>len){
        return head; 
    }
    //It means number of nodes in LL is>=K 
    //step 1: Reverse first k nodes of LL
    node* prev= NULL;
    node* curr=head;
    node* forward = curr->next;
    int count =0;

    while(count<k){
        forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
         count++;
    }
    //step2:recueseive call
    if(forward!=NULL){
        //we still have nodes left to reverse
        head->next=reverseKnodes(forward,k);
    }
    //return head of modified LL
    return prev;
}

bool checkforloop(node* &head){
    if(head==NULL){
        cout<<"LL is empty"<<endl;
        return false;
    }
    node* slow = head;
    node* fast = head;

    while(fast!=NULL){
         fast = fast->next;
         if(fast!=NULL){
            fast= fast->next;
            slow = slow->next;
         }
         if(slow == fast){
            //loop present
            return true;
         }
    }
    //fast NULL ho gaya
    return false;
}

int main()
{
    node *head = new node(10);
    node *second = new node(20);
    node *third = new node(30);
    node *fourth = new node(40);
    node *fifth = new node(50);
    node *sixth = new node(60);
    node *seventh = new node(70);
    node *eighth = new node(80);


    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next= seventh;
    seventh->next = eighth;
    eighth->next= fifth;
    // print(head);
    // head=reverseKnodes(head,3);
    // print(head);

    //cout << "Middle node is " << getmiddle(head)->data << endl;

    cout<<"Loop is present or not "<<checkforloop(head);

    return 0;
}