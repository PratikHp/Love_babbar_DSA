#include<iostream>
#include<stack>
using namespace std;

void insertsorted(stack<int> &s, int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }

    if(s.top()>=target){
        s.push(target);
        return;

    }

    int topelement= s.top();
    s.pop();
    insertsorted(s,target);

    //BT
    s.push(topelement);
}

void sortstack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int topelement = s.top();
    s.pop();
    
    sortstack(s);

    insertsorted(s,topelement);
}

int main(){
    stack<int> s;

    s.push(10);
    s.push(50);
    s.push(30);
    s.push(20);
    s.push(70);
    s.push(40);

    sortstack(s);
    cout<<"Printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;


    return 0;
}