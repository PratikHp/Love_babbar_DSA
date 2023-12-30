#include<iostream>
#include<string.h>

using namespace std;

void replacespaces(char sentence[]){
    int i=0;
    int n=strlen(sentence);

    for(int i=0; i<n; i++){
        if(sentence[i]==' '){
             sentence[i]='@';
        }

    }
}

int getlength(char name[100]){
    int length =0;
    int i=0;

    while(name[i] != '\0'){
        length++;
        i++;
    }

    return length;

}

void reversechararray(char name[100]){
    int n = getlength(name);
    int i=0;
    int j=n-1;

    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

bool checkpalindrome(char word[]){
    int i=0; 
    int n= strlen(word);
    int j=n-1;

    while(i<=n){
        if(word[i]!=word[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

void convertuppercase(char arr[]){
    int n = getlength(arr);
    
    for(int i=0; i<n; i++){
        arr[i]=arr[i]-'a'+'A';
    }
}

void convertlowercase(char arr[]){
    int n = getlength(arr);
    
    for(int i=0; i<n; i++){
        arr[i]=arr[i]-'A'+'a';
    }
}



int main(){
    // char name[100];
    // cout<<"Enter your name "<<endl;
    // cin>>name;

    // cout<<"Aapka naam: "<<name<<" hai "<<endl;

    // char ch[100];

    // ch[0]='a';
    // ch[1]='b';
    // ch[2]='c';

    // cin>>ch[3];

    // cout<<ch[0]<<ch[1]<<ch[2]<<ch[3]<<endl;

    // char name[100];

    // cout<<"Enter your name "<<endl;
    // cin>>name;

    // for(int i=0; i<7; i++){
    //     cout<<"char at index "<<i<<" is "<<name[i]<<endl;
    // }
    
    // int value = (int)name[6];
    // cout<<"Value is: "<<value<<endl;

    //char arr[100];
    // cin>>arr;

    // cout<<arr;

    // cin.getline(arr,50);//To read spaces in string 

    //cout<<arr;

    // char name[100];

    // cin>>name;

    // cout<<"Length of name is: "<<getlength(name)<<endl;
    // cout<<"Length of name is: "<<strlen(name)<<endl;
    
    // cout<<"Initially "<<name<<endl;
    // reversechararray(name);
    // cout<<"After reversal "<<name<<endl;

    // char sentence[100];

    // cin.getline(sentence, 100);

    // replacespaces(sentence);

    // cout<<"Printing sentence without spaces "<<endl<<sentence<<endl;

    // char word[100]="KadaK";
    // cout<<"Palindrome check "<<checkpalindrome(word);

//     char arr[100]="pratik";
//     convertuppercase(arr);
//     cout<<arr<<endl;

      char arr[100]="PRATIK";
      convertlowercase(arr);
      cout<<arr<<endl;
    return 0;
}