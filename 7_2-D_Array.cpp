#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void transpose(int arr[][3], int rows, int cols,int Artranspose[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            Artranspose[j][i] = arr[i][j];
        }
        cout<<endl;
    }
}

void printarray(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int getmax(int arr[][3], int rows, int cols){
    int maxi= INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;

}

int getmini(int arr[][3], int rows, int cols){
    int mini= INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;

}

bool findkey(int arr[][3],int cols, int rows, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key)
               return true;      
            }
    }
    return false;
}

void printrowwisesum(int arr[][3],int cols,int rows){
    
    for(int i=0; i<rows;i++){
        //sum->row wise travesal
        int sum=0;
        for(int j=0; j<cols; j++){
          sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
       
}

void printcolwisesum(int arr[][3],int rows,int cols){
    for(int i=0; i<rows;i++){
        //sum->row wise travesal
        int add=0;
        for(int j=0; j<cols; j++){
          add=add+ arr[j][i];
        }
        cout<<add<<endl;
    }

}

int main(){
    //Declare 2D-array
    // int arr[3][3];

    //initialization
    //int brr[3][3]={{1,2,3},{2,3,5},{2,4,5}};

    //cout<<brr[2][0]<<endl;

    //Row wise acess
    //Outer loop
    // for(int i=0; i<3; i++){
    //     //For every row we need to print value of each row
    //     for(int j=0; j<3; j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //Column wise Acess
    // //Outer loop
    // for(int i=0; i<3; i++){
    //     //For every row we need to print value of each row
    //     for(int j=0; j<3; j++){
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    //rowwise input
    // int arr[3][3];
    // int rows=3;
    // int cols=3;
    
    // //Row wise input
    // cout<<" ENter the vlaues rowwise "<<endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // //rowwise output
    // cout<<"The vlaues by rowwise "<<endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    //printrowwisesum(arr, rows,cols);


    //Col wise input
    // cout<<" ENter the vlaues colwise "<<endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>arr[j][i];
    //     }
    //     cout<<endl;
    // }

    // //colwise output
    // cout<<"The vlaues by columnwise "<<endl;
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }


    // printcolwisesum(arr,rows,cols);

    // int key=10;

    //     if(findkey(arr,3,3,key)){
    //         cout<<"True"<<endl;
    //     }
    //     else{
    //         cout<<"False"<<endl;
    //     }

    // cout<<"Maximum number is "<<getmax(arr,rows,cols)<<endl;
    // cout<<"Minimum number is "<<getmini(arr,rows,cols)<<endl;
    // cout<<"Printing Array "<<endl;
    // printarray(arr,rows,cols);
    // cout<<"Starting Transpose "<<endl;
    // int Artranspose[3][3];
    // transpose(arr,rows,cols,Artranspose);
    // cout<<"Printing array again "<<endl;
    // printarray(Artranspose,rows,cols);


    //2-D Vector
    // vector<vector<int> >arr;

    // vector<int> a{1,2,4};
    // vector<int> b{1,6,8};
    // vector<int> c{2,4,1};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // for(int i=0;i<arr.size(); i++){
    //     for(int j=0; j<arr[i].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    int cols=3;
    int rows=3;

    vector<vector<int> >arr(rows ,vector<int>(cols, 0));
    
    for(int i=0;i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    
  }
