#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s,int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }

    int topelement = s.top();
    s.pop();
    //recursive call
    solve(s,target);
    //Back Tracking
    s.push(topelement);
}

void insertatbottom(stack<int> &s,int target){

    if(s.empty()){
        s.push(target);
        return;
    }
    int topelement = s.top();
    s.pop();
    
    //recursive call
    insertatbottom(s,target);

    //BT
    s.push(topelement);

}

void reversestack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();


    //reverse stack 
    reversestack(s);

    //insert at bottom target 
    insertatbottom(s,target);


}
int main(){
    //reverse a stack
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    reversestack(s);
    cout<<"Printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}