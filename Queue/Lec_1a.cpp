#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Creation
    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);
    q.push(55);

    //size
    cout<<"Size of queue "<<q.size()<<endl;
    
    //removel
    q.pop();

    cout<<"Size of queue "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    //Front element
    cout<<"Front element is "<<q.front()<<endl;
    return 0;
}