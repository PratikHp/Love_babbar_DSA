#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> arr, int s, int e, int mid,int target){
    //base case
    //Case 1=Key not found
    if(s>e){
        return -1;
    }
    
    mid = (e+s)/2;
    //case 2=key found  
    if(arr[mid]==target){
        return mid;
    }
    
    //arr[i]<key ->right me search
    if(arr[mid]<target){
        return binarysearch(arr,mid+1,e,mid,target);
    }
    //arr[i]>key ->left me search
    if(arr[mid]>target){
        return binarysearch(arr,s,mid-1,mid,target);
    }
}
int main(){
    vector<int> v{10,20,30,40,50,70,99};
    int target = 99;
    int s =0;
    int n= v.size();
    int e = n-1;
    int mid =(e+s)/2;

    int ans = binarysearch(v,s,e,mid,target);

    cout<<"Index is "<<ans<<endl;
    return 0;
}