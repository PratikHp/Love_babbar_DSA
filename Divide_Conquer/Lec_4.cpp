#include<iostream>
#include<vector>
using namespace std;

void printsolution(vector<vector<int>> &board,int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
    cout<<endl;
    }
    cout<<endl<<endl;
}
bool issafe(int row,int col,vector<vector<int>> &board,int n){
    //check karana hai kya me current cell [row,col] pr queen rakh sakta hu ya nahi
    int i=row;
    int j= col;

    //check row
    while(j>=0){
        if(board[i][j]==1){
            return false;
        }
        j--;
    }

    //check left diagonal
    i= row;
    j= col;

    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;

    }
    //check bottom left diagonal
    i= row;
    j= col;

    while(i<n && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i++;
        j--; 
    }
    return true;


}

void solve(vector<vector<int>> &board,int col, int n){
    //base case
    if(col>=n){
        printsolution(board, n);
        return;
    }
    //1 case solve karo baki recursion sambhal lega
    for(int row=0; row<n; row++){
        
    if(issafe(row,col,board,n)){
        //rakh do
        board[row][col]=1;
        //recursion solution laega
        solve(board,col+1,n);
        //backtrakinng
        board[row][col]=0;
    }
    }
}
int main(){
    int n= 4;
    vector<vector<int>> board(n, vector<int>(n,0));
    int col=0;
    //0-->empty cell
    //1--> queen at the cell
    solve(board,col,n);

    return 0;
}