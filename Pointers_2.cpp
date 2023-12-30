#include<iostream>
using namespace std;

// void solvee(int* val ){
//     *val = *val + 1;
// }

void solvee(int*& p){
    p = p + 1;
}

void util(int* p){
    // p = p+1;
    *p = *p+1;

}

void solve(int** ptr){
    // ptr = ptr +1;
    //*ptr = *ptr +1;
    **ptr = **ptr +1;
    
}
int main(){
    // int a = 5;
    // int* p= &a;

    // int** q = &p;

    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    // int a= 5;
    // int* p=&a;
    
    // cout<<"Before"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // util(p);
    // cout<<"After"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int x = 5;
    // int* p = &x;
    // int** q= &p;

    // solve(q);

    // cout<<x<<endl;

    // int a= 5;
    
    // //Creating a reference variable
    // int& b= a;

    // cout<<a<<endl;
    // cout<<b<<endl;

    // a++;

    // cout<<a<<endl;
    // cout<<b<<endl;

    int a= 5;
    int* p = &a;

    cout<<"Before "<<p<<endl;
    solvee(p);

    cout<<"After "<<p<<endl;


    return 0;


}