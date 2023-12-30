#include<iostream>
using namespace std;

int main(){
    //hollow inverted half ractangle

    int n; 
    cin>>n;

    //Inverted half hollow pyramid
    // for(int row =0; row<n; row++){
    //     for(int col=0; col<n; col++){
    //         if(row==0 || col==0 || col==n-row-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //hollow full pyramid
    for(int row=0; row<n; row++){
        for(int space=0; space<n-row-1; space++){
            cout<<" ";
        }
        for(int star=0; star<n; star++){
            cout<<"*";
        }
    }
}