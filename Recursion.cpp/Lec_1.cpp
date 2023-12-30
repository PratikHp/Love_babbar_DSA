#include<iostream>
using namespace std;

int factorial(int n){
    cout<<"Function is called for "<<n<<endl;
    //Base case
    if(n==1)
        return 1;
    int chotiproblemans = factorial(n-1);
    int badiproblemans = n * chotiproblemans;
    return badiproblemans;
}

void printcount(int n){
    //base
    if(n==0){
        return;
    }
    //Processing
    cout<<n<<" ";
    //Recursive relation
    printcount(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    //int ans = factorial(n);
    printcount(n);
    //cout<<"Answer is: "<<ans<<endl;
    cout<<endl;
    return 0;
}