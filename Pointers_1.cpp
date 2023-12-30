#include<iostream>
using namespace std;

void solve(int arr[]){
    cout<<"Size inside solve function: "<<sizeof(arr)<<endl;

    cout<<"arr: "<<arr<<endl;
    cout<<"&arr: "<<&arr<<endl;
    arr[0]=50;
}
int main(){
    // int a= 5;
    // int b= 5;

    // cout<<a<<endl;

    // cout<<&a<<endl;
    // cout<<&b<<endl;

    // int a = 5;
    // //Pointer create 
    // int* ptr = &a;
    
    // //access the value ptr is pointing to
    // cout<<"Address of a is: "<<&a<<endl;
    // cout<<"Value stored at ptr is: "<<ptr<<endl;
    // cout<<"Value ptr is pointing to is: "<< *ptr<<endl;
    // cout<<&ptr<<endl;

    // int a=5;
    // int *p = &a;

    // cout<<sizeof(p)<<endl;

    // char ch ='a';
    // char* c= &ch;

    // cout<<sizeof(c)<<endl;

    // double dtr = 5.03;
    // double* d = &dtr;

    // cout<<sizeof(d)<<endl;

    //Bad practice
    // int* ptr;

    // cout<<*ptr<<endl;

    //NULL pointer
    // int* ptr = 0;

    // cout<<*ptr<<endl;

    // int a=5;

    // int* ptr = &a;
    
    // //Copy pointer
    // int* dusraptr = ptr; 

    // cout<<*ptr<<endl;
    // cout<<*dusraptr<<endl;

    // int a = 10;
    // int* p = &a;
    // int* q = p;
    // int* r = q;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<r<<endl;
    // cout<<&r<<endl;
    // cout<<*r<<endl;
    // cout<<(*p + *q + *r)<<endl;
    // cout<<(*p)*2+(*r)*3<<endl;
    // cout<<(*p)/2-(*q)/2<<endl;

    //int arr[4]={12,14,16,18};

    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;

    // int* p = arr;
    // cout<<p<<endl;
    // cout<<&p<<endl;

    // cout<<*arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<*arr + 1<<endl;
    // cout<<arr[1]<<endl;
    // cout<<*(arr) + 1<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<arr[2]<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<arr[3]<<endl;

    // int i=0;
    // cout<<arr[i]<<endl;
    // cout<<i[arr]<<endl;
    // cout<<*(arr+i)<<endl;
    // cout<<*(i+arr)<<endl;

    // int arr[10];
    // cout<<sizeof(arr)<<endl;

    // int* p= arr;
    // cout<<sizeof(p)<<endl;

    // cout<<sizeof(*p)<<endl;

    // char ch[10]="Pratik";

    // char* c=ch;

    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;

    // cout<<*c<<endl;
    // cout<<&c<<endl;
    // cout<<c<<endl;

    int arr[10]= {1,2,3,4};
    cout<<"Size inside main function: "<<sizeof(arr)<<endl;

    cout<<arr<<endl;
    cout<<&arr<<endl;

    //printing array inside the main
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<endl<<endl<<"Now Calling solve function"<<endl;
    

    solve(arr);

    cout<<"Wapas main fuction aagaye hai"<<endl;
    
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

    return 0;
}