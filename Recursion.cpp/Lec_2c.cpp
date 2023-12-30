#include<iostream>
#include<vector>
using namespace std;

int checkkey(string& str,int& n,int i,char& key,vector<int>&ans){
    //base case
    if(i>=n){
        //char is not found
        return -1;
    }
    //1 case solve kar do
    if(str[i]==key){
        ans.push_back(i);
        // return i;
    }
    //baki recursion sambhal lega 
    return checkkey(str,n,i+1,key,ans);
     

}
int main(){
    string str = "Pratikhanagandi";
    int n = str.length();
    int i=0;
    char key ='a';
    vector<int> ans;

    checkkey(str,n,i,key,ans);
    //cout<<"Answer is: "<<ans<<endl;
    cout<<"Printing ans"<<endl;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}