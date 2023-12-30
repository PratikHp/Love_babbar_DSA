#include<iostream>
#include<stack>
using namespace std;
int main(){
    // //creation
    // stack<int> st;

    // //Insertion 
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // st.push(50);

    // //remove
    // st.pop();

    // //Check element on top of stack
    // cout<<"ELement at the top of stack: "<<st.top()<<endl;

    // if(st.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }
    // else{
    //     cout<<"Stack is not empty"<<endl;
    // }
    
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    } 

    return 0;
}