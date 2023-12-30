#include<iostream>
using namespace std;
void printdigits(int n){
     if(n==0){
        return;
     }
     int newvalue= n/10;
     printdigits(newvalue);
     int digit = n%10;
     cout<<digit<<" ";
     
     

}
int main(){
    int n = 647;

    printdigits(n);

    return 0;
}