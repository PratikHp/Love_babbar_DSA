#include<iostream>
using namespace std;

int main(){
    //Printing Solid Rectangle
    
    //Outer Loop- Row observe
    // for(int row=0; row<3; row=row+1){
    //     //Inner Loop- Col observe
    //     for(int col=0; col<5; col=col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    
    //Printing Square Rectangle
    // int n;
    // cin>>n;

    // for(int row=0; row<n; row += 1){
    //     for(int col=0; col<n; col += 1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //Printing Hollow Rectangle

    // for(int row=0; row<3; row=row+1){
    //     if(row==0 || row==2){
    //         for(int i=0;i<5; i=i+1){
    //             cout<<"*";
    //         }
    //     }
    //     else{
    //         cout<<'*';
    //         for(int i=0; i<3; i=i+1){
    //             cout<<" ";

    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Generic Code

    int rowcount;
    int colcount;
    cin>>rowcount;
    cin>>colcount;

    for(int row=0; row<rowcount; row=row+1){
        if(row==0 || row==rowcount-1){
            for(int col=0; col<colcount; col=col+1){
                cout<<"* ";
            } 
        }
        else{
            cout<<"* ";
            for(int i=0; i<colcount-2; i=i+1){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }

}