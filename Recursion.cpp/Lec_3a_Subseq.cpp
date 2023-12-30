#include<iostream>
#include<vector>
using namespace std;

void printsubsequences(vector<string> &v,string str,string output, int i){
     //base
     if(i>=str.length()){
        //cout<<output<<endl;
        //store
        v.push_back(output);
        return;
     }

     //exclude
     printsubsequences(v,str,output,i+1);

     //include
     //Below line is responsible for concatination of output string
     //and ith char of sting str
     output.push_back(str[i]);
     printsubsequences(v,str,output,i+1); 
}
int main(){
    string str="abc";
    string output = " ";
    vector<string> v;
    int i=0;

    printsubsequences(v,str,output,i);

    cout<<"Printing all subsequences "<<endl;
    for(auto val: v){
        cout<<val<<" ";
    }

    return 0;
}