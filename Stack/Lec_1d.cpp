#include<iostream>
#include<stack>
using namespace std;
void printmiddle(stack<int> &s,int totalsize){
       if(s.size()==0){
        cout<<"There is no element in stack"<<endl;
       }
       //base case
       if(s.size()==totalsize/2 + 1){
        cout<<"Middle element is: "<<s.top()<<endl;
        return;
       }

       int temp = s.top();
       s.pop();

       //recurcive call
       printmiddle(s, totalsize);

       //backtrack
       s.push(temp);

}
int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);  
    s.push(70);

    printmiddle(s,s.size());





    
    return 0;
}