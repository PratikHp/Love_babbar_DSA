#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
     
    //Complete Solid Diamond

    // Full Pyramid
    //  for(int row=0; row<n; row=row+1){
    //       for(int space=0; space<(n-row-1); space=space+1)
    //       {
    //              cout<<" ";
    //       }
    //       for(int star=0; star<(row+1); star=star+1){
    //         cout<<"* ";
    //       }
    //       cout<<endl;
    //   }

    // //Inverted Full Pyramid

    //  for(int row=0; row<n; row=row+1){
    //      for(int space=0; space<row; space=space+1){
    //          cout<<" ";
    //      }
    //      for(int star=0; star<n-row; star=star+1){
    //          cout<<"* ";
    //      }
    //      cout<<endl;
    //  }


    //Hollow Diamond
    
    //Half Hollow Diamond
    for(int row=0; row<n; row=row+1){
         for(int space=0; space<(n-row-1); space=space+1)
          {
                 cout<<" ";
         }
        for(int star=0; star<(2*row+1); star=star+1){
            if(star==0){
                cout<<"* ";
            }
            else if(star==2*row){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;
}
    
    //Inverted Half hollow diamond
    for(int row=0; row<n; row=row+1){
         for(int space=0; space<(row); space=space+1)
          {
                 cout<<" ";
         }
        for(int star=0; star<(2*n-2*row-1); star=star+1){
            if(star==0){
                cout<<"* ";
            }
            else if(star==2*n-2*row-2){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<endl;
}
}