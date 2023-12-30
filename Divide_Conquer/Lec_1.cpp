#include<iostream>
using namespace std;

int merge(int* arr, int s, int e){
    int mid= (e+s)/2;

    int len1= (mid-s)+1;
    int len2= e-mid;
    
    //assume to create array
    int* left = new int[len1];
    int* right = new int[len2];

    //copy values 
    int k = s;
    for(int i=0; i<len1; i++){
        left[i]= arr[k];
        k++;
    }

    k = mid+1;
    for(int i=0; i<len2; i++){
        right[i]=arr[k];
        k++;
    }

    int leftindex= 0;
    int rightindex= 0;
    int mainindex = s;

    while(leftindex< len1 && rightindex< len2){
        if(left[leftindex]<right[rightindex]){
          arr[mainindex++]=left[leftindex++];
        }
        else{
            arr[mainindex++]=right[rightindex++];
        }
    }
    //Copy logic for left array
    while(leftindex<len1){
     arr[mainindex++] = left[leftindex++];
    }
    
    //Copy ligic for right array
    while(rightindex<len2){
     arr[mainindex++] = right[rightindex++];
    }
   
   //TODO: delete left and right wala newly created array

}

void mergesort(int* arr, int s, int e){
    //Base case
    //e==s --> single element is sorted 
    // s>e   invalid array
    if(s>=e){
       return;
    }

    int mid = (e+s)/2;

    //right part sort kardo recursion
    mergesort(arr,s,mid);

    //Left part sort kardo recurssion
    mergesort(arr,mid+1,e);

    //2 parts merge kardo

    merge(arr,s,e);
}
int main(){
    int arr[]={1,3,4,7,8,5,2,9};
    int n=8;
    int s=0;
    int e= n-1;
    //Calling mergesort function
    mergesort(arr,s,e);
    
    //Prnting an array
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    
    return 0;
}