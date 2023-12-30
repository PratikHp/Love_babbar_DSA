#include<iostream>
#include<string>
#include<stack>
using namespace std;

void solve(int arr[], int N){
  stack<int> st;

  for(int i=0; i<N; i++){
    st.push(arr[i]);
  }

  while(!st.empty()){
  cout<<st.top()<<" ";
  st.pop();
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  solve(arr,n);

  return 0;
}