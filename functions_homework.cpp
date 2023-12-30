#include<iostream>
using namespace std;

float areacir(int r){
    int area;
    float pi=3.142;
    area = pi*r*r;
    return area;
}

char EvenOdd(int a){
    if(a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}

int findfact(int a){
    int fact=1;
    for(int i=a; i>=1; i++){
        fact=fact*i;
    }
    return fact;
}

char findprime(int a){
    int i=2;
    for(;i<a; i++){
    if(a%i==0){
        cout<<"Not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;;
    }
    }
}
int main(){
    // int rad;
    // cout<<"Enter radius of circle "<<endl;
    // cin>>rad;
    
    // float circlearea = areacir(rad);
    // cout<<"Area of circle is: "<<circlearea<<endl;
    // return 0;

    // int n;
    // cout<<"Enter value of number "<<endl;
    // cin>>n;
    
    // char ch = EvenOdd(n);

    // int n;
    // cout<<"Enter value of number "<<endl;
    // cin>>n;

    // int ans=findfact(n);
    // cout<<ans<<endl;


    int n;
    cout<<"ENter the value of number "<<endl;
    cin>>n;

    char ans=findprime(n);

}