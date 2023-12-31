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
    s.pop();
    solve(s,target);

}
int main(){
    //insert at bottom
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    
    if(s.empty()){
        cout<<"Stack is empty,can't insert at bottom "<<endl;
    }
    int target = s.top();

    insertatbottom(s,target);

    cout<<"printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    return 0;
}