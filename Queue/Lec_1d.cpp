#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseque(queue<int> &q){
    stack<int> s;

    //step 1: Put all the elements of q to s
    while (!(q.empty()))
    {
     int element = q.front();
     q.pop();

     s.push(element);
    }


    while (!(s.empty()))
    {
        int element = s.top();
     s.pop();

     q.push(element);
      
    }

}

void reverserecursionqueue(queue<int> &q){
    //Base case 
    if(!q.empty()){
        return;
    }

    //step A:
    int temp = q.front();
    q.pop();

    //step B:
    reverserecursionqueue(q);

    q.push(temp);
}
int main(){
    queue<int> q;

    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverserecursionqueue(q);

    cout<<"Printing queue" <<endl;

    while (!q.empty())
    {
     cout<<q.front()<<" " ;  
     q.pop();
    }
    cout<<endl;

    
    return 0;
}