#include<iostream>
#include<vector>
using namespace std;

int findunique(vector<int>arr){
      int ans=0;
      for(int i=0; i<arr.size(); i++ ){
        
        ans = ans^arr[i];
      }
      return ans;
}

void printArray(vector<int>arr){
    for(auto i: arr){
        cout<<i<<" ";
       
    }
     cout<<endl;
}
int main(){
    // vector<int>arr;

    // int ans= sizeof(arr)/sizeof(int);

    // cout<<ans<<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // //insert 
    // arr.push_back(5);
    // arr.push_back(6);

    // //print

    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // //remove/ delete

    // arr.pop_back();
    // //print

    // for(int i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // int n; 
    // cout<<"ENeter the value of n "<<endl;
    // cin>>n;

    // vector<int>brr(n,-1);

    // cout<<"Size of brr "<<brr.size()<<endl;
    // cout<<"Capacity of brr "<<brr.capacity()<<endl;

    // for(int i=0; i<brr.size(); i++){
    //     cout<<brr[i]<<" ";
    // }
    // cout<<endl;

    // vector<int>crr{10,20,30,40,50,60};

    // for(int i=0; i<crr.size(); i++){
    //     cout<<crr[i]<<" ";
    // }
    // cout<<endl;

    // cout<<"Vector crr is empty or not "<<crr.empty()<<endl;
    
    // vector<int>drr;
    // cout<<"Vector drr is empty or not "<<drr.empty()<<endl;
    
    //Unique Element
    // int n;
    // cout<<"Enter the size of array "<<endl;
    // cin>>n;

    // vector<int>arr(n);

    // for(int i=0; i< arr.size(); i++){

    //      cin>>arr[i];
    // }

    // int uniqueelement = findunique(arr);

    // cout<<"Unique element is "<<uniqueelement<<endl;
    
    //UNION
    // int arr[]= {1,3,5,7,9};
    // int sizea=5;
    // int brr[]= {2,4,6,8};
    // int sizeb=4;

    // vector<int>ans;
    
    // //Push all element of vector arr 
    // for(int i=0; i<sizea; i++){
    //     ans.push_back(arr[i]);
    // }

    // //Push all element of vector brr 
    // for(int i=0; i<sizeb; i++){
    //     ans.push_back(brr[i]);
    // }

    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    //Intersection

    // vector<int>arr={1,2,3,3,4,6,8,9};
    // vector<int>brr={3,3,4,10};

    // vector<int>ans;
    
    // //Outer loop on arr vector
    // for(int i=0; i<arr.size(); i++){
    //     int element=arr[i];
    //         //Inner loop in brr vector
    //        for(int j=0; j<brr.size(); j++){
    //           if(element==brr[j]){
    //             //mark
    //               brr[j]=-1;
    //               ans.push_back(element);
    //           }
    //        }

    // }

    // for(auto value: ans){
    //     cout<<value<<" ";
    // }

    // //Print pair sum
    
    // vector<int>arr={10,20,30,40,50,60,70};
    // //Outer loop is transverse for each element
    // int sum=80;
    // for(int i=0; i<arr.size(); i++){
    //     //cout<<"We are at element: "<<arr[i]<<endl;
    //     int element =arr[i];
    //     //for every element, will transverse on aage wale elemets
    //     for(int j=i+1; j<arr.size(); j++){
    //         //cout<<"pair "<<element<<"with "<<arr[j]<<endl;
    //         if(element+arr[j]==sum){
    //            cout<<"Pair found"<<element<<','<<arr[j]<<endl;
    //         }
    //         //cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //     }

    //Print triplet sum
    
    // vector<int>arr={10,20,30,40,50,60,70,80,90};
    // int sum=80;
    // for(int i=0; i<arr.size(); i++){
    //     int element1 =arr[i];
        
    //     for(int j=i+1; j<arr.size(); j++){
    //         int element2 = arr[j];
    //         for(int k=j+1; k<arr.size(); k++){
    //            int  element3=arr[k];
    //         if(element1+element2+element3==sum){
    //            cout<<"Pair found"<<element1<<','<<element2<<','<<element3<<endl;
    //         }  
    //     }

    //     }

        //For four number pair
        // vector<int>arr={10,20,30,40,50,60,70,80,90};
        // int sum=100;

        // for(int i=0; i<arr.size(); i++){
        // int element1 =arr[i];

        // for(int j=i+1; j<arr.size(); j++){
        //     int element2 = arr[j];

        //     for(int k=j+1; k<arr.size(); k++){
        //        int  element3=arr[k];

        //        for(int m=k+1; m<arr.size(); m++){
        //         int element4=arr[m];
        //         if(element1+element2+element3+element4==sum){
        //        cout<<"Pair found"<<element1<<','<<element2<<','<<element3<<','<<element4<<endl;
        //         }  

        //        }
        // }

        // }

        //Sort 0 and 1

        vector<int>arr{1,0,1,0,1,1,1,0,0,1};
        
        int start=0; 
        int end= arr.size()-1;
        int i=0;

        while(i!=end){
            cout<<"for i= "<<i<<"start= "<<start<<"end "<<end<<endl;
            if(arr[i]==0){
                cout<<"found zero"<<endl;
                cout<<"before swap ";
                printArray(arr);
                swap(arr[start],arr[i]);
                cout<<"After swap ";
                printArray(arr);
                start++;
                i++;
                cout<<"Now i= "<<i<<"start= "<<start<<"end "<<end<<endl;

            }
            else{
                cout<<"found onr"<<endl;
                cout<<"before swap ";
                printArray(arr);
                swap(arr[end],arr[i]);
                cout<<"After swap ";
                printArray(arr);
                end--;
                cout<<"Now i= "<<i<<"start= "<<start<<"end "<<end<<endl;

            }
        }

        for(auto val:arr){
            cout<<val<<" ";
        }

        
        

    }
     


    




