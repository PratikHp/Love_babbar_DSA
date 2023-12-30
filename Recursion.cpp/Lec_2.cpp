#include<iostream>
using namespace std;

int climbstair(int n){
    //base case
    if(n==0 || n==1){
        return 1;
    }
    //RR
    int ans = climbstair(n-1)+ climbstair(n-2);
    return ans;
}
int main(){
    //climbStaircase Problem leetcode
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    int ans = climbstair(n);

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}