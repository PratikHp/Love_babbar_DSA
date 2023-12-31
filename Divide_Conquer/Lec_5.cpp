#include<iostream>
#include<vector>
using namespace std;

  

bool solve(int board[9][9]){
    int n=board[].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            //check for empty cell
            if(board[i][j]==0){
                for(int value; value<=9;value++){
                    //check for safety
                    if(issafe(board,value,i,j)){
                        //Insert
                        board[i][j]=value;
                        //baki recursion sambhal lega
                        bool aagekasol = solve(board);
                        if(aagekasol==true){
                            return true;
                            //backtracking
                            board[i][j]=0;
                        }

                    }
                }
            }
        }
    }
    return false;
}

int main(){
    int board[9][9] = { 
        {4,5,0,0,0,0,0,0,0},
        {0,0,2,0,7,0,6,3,0},
        {0,0,0,0,0,0,0,2,8},
        {0,0,0,9,5,0,0,0,0},
        {0,8,6,0,0,0,2,0,0},
        {0,2,8,6,0,0,7,5,0},
        {0,0,0,0,0,0,4,7,6},
        {0,7,0,0,4,5,0,0,0},
        {0,0,8,0,0,9,0,0,0},
    };
    int n =9;
    solve(board);
    //pring the solution

    for(int i=0; i<9;i++){
        for(int j=0; j<9; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}