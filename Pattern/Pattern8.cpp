#include <iostream>
using namespace std;

int main(){   
    int n;
    cin>>n;
     
    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        
        int start=1;
        for(int col=0; col<(2*row+1); col++){

            if(col==0 || col==2*row){
               if(col%2==0){
                cout<<start;
                start=start+1;
               }
               else{
                cout<<" ";
               }
            }
            else{
            
                cout<<" ";
            }
        }

        cout<<endl;
    }
}
