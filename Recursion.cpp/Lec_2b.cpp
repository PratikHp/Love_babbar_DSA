#include<iostream>
#include<limits.h>
using namespace std;

void findmax(int arr[], int n, int i, int& maxi){
       //base case
       if(i>=n){
            //Array agar khatm hogaya or pua transverse hogaya 
            //toh waapas jao
            return;
       }
       //1 case solve karna hai baki recursion sambhal lega
       //current element ko check karo for MAx
       if(arr[i]>maxi){
        maxi=arr[i];
       }
       //Baki recursion sambhal lega 
       findmax(arr,n,i+1,maxi);
       
}
void findmin(int arr[],int n, int i,int& mini){
    if(i>=n){
        return;
    }
    mini = min(mini,arr[i]);
    findmin(arr,n,i+1,mini);
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n= 8;
    int i=0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    findmin(arr,n,i,mini);
    findmax(arr,n,i,maxi);
    cout<<"Minimum number is: "<<mini<<endl;
    cout<<"Maximum number is: "<<maxi<<endl;
    return 0;
}