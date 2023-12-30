#include<iostream>
#include<limits.h>
using namespace std;

bool find(int arr[], int size, int key){
    //linear search
    for(int i=0; i<size; i++){
        if(arr[i]==key)
        return true;
    }
    return false;
}
int main(){
    //Array Declare
    // int arr[10];
    // cout<<arr<<endl;
    // cout<<&arr<<endl;
    // cout<<"Array created sucessfully";
    // int arr[57];
    // char brr[106];
    // bool crr[23];

    //Array initialization
    // int arr[]={1,4,6,4,7};
    // int brr[5]={1,4,6,4,7};
    // int crr[10]={1,4,6,8,9};
    // int a[]={1,3,5,7};
    // char b[]={'a','b','c'};
    //Error
    // int drr[4] ={1,2,5,6,4};
    // cout<<"Array initialized Sucessfully";

    //Printing all values of array

    // int arr[5]= {1,2,4,5,6};
    // for(int index=0; index<5; index++){
    //    cout<<arr[index];
    // }

    // int arr[10];

    // cout<<"ENter the input values for array "<<endl;
    // for(int i=0; i<10; i++){
    //     cin>>arr[i];
    // }
    // cout<<"Printing the vlaues in array"<<endl;
    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }

    //int arr[500];

    // cout<<"ENter the number of input elements in array "<<endl;
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // cout<<"Doubles";
    // for(int i=0; i<5; i++){
    //     cout<<2*arr[i]<<" ";
    // }

    // cout<<"ENter the number of input elements in array "<<endl;
    // int n;
    // cin>>n;

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // for(int i=0; i<5; i++){
    //     arr[i]=1;
    //     cout<<arr[i]<<" ";
    // }

    // int arr[10]={1,2};

    // for(int i=0; i<10; i++){
    //     cout<<arr[i]<<" ";
    // }  

    // int arr[5] = { 8,7,6,3,5};
    // int size = 5;

    // cout<<"Enter the key to find "<<endl;
    // int key;
    // cin>>key;

    // if(find(arr, size, key)){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not Found";
    // }

    // int arr[5] = { 8,7,6,3,5};
    // int size = 5;

    // cout<<"Enter the key to find "<<endl;
    // int key;
    // cin>>key;

    // bool flag=0;
    // //0-->Not found
    // //1-->Found

    // for(int i=0; i<size; i++){
    //     if(arr[i]==key){
    //         flag =1; 
    //         break;
    //     }
    // }

    // if(flag){
    //     cout<<"found";
    // }
    // else
    //    cout<<"not found";
    
    //Count zeros and ones in an array
    // int arr[]={0,1,1,1,0,1,1,1,0,0,1,0,1};

    // int size=15;

    // int numzero=0;
    // int numone=0;

    // for(int i=0; i<size; i++){
    //     //if zero found ,increment numzero
    //     if(arr[i]==0){
    //         numzero++;
    //     }
    //     //if one found increment numone 
    //     if(arr[i]==1){
    //         numone++;
    //     }
    // }

    // cout<<"Number of zeroes "<<numzero<<endl;
    // cout<<"Number od ones "<<numone<<endl;
    
    // //Maximum element in an array
    // int arr[]={2,4,6,1,3,7,9,12,56,43,21};
    // int maxi=INT_MIN;
    // //initialize maxi int variable with minimum possible int value 
    // int size=11;
    
    // for(int i=0; i<size; i++){
    //     if(arr[i]>maxi){
    //         //found a number greater than maxi, update maxi
    //         maxi= arr[i];
    //     }
    // }

    // cout<<"Maximum number is "<<maxi<<endl;

    //Minimum number of an array
    // int arr[]={2,4,6,1,3,7,9,12,56,43,21};
    // int mini=INT_MAX;
    // //initialize maxi int variable with minimum possible int value 
    // int size=11;

    // for(int i=0; i<size; i++){
    //     if(arr[i]<mini){
    //         mini=arr[i];
    //     }
    // }

    // cout<<"Minimum number is "<<mini<<endl;

    // int arr[8]={10,20,30,40,50,60,70,80};
    // int size=8;
    
    // int start=0;
    // int end=size-1;

    // while(true){
    //     if(start>end)
    //         break;
    //     if(start==end){
    //         cout<<arr[start]<<" ";
    //     }
    //     else{
    //         cout<<arr[start]<<" ";
    //         cout<<arr[end]<<" ";
    //     }
    //     start++;
    //     end--;
    // }

    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8;

    int start=0;
    int end= size-1;

    while(start<=end){
        //Step1
        swap(arr[start],arr[end]);
        //step2
        start++;
        //step3
        end--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    


    return 0;

}