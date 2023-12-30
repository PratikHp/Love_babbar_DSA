#include<iostream>
using namespace std;

void printname(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Pratik"<<endl;
    }

}

void printnumber(int num){

    cout<<num<<endl;
}

int add(int x,int y){

    int sum = x+y;
    return sum;
}

int findmax(int num1, int num2, int num3){
    if(num1>num2 && num1>num3){
        return num1;
    }
    else if(num2>num1 && num2>num3){
        return num2;
    }
    else{
        return num3;
    }

}
//n is parameter
void printcounting(int n){
    for(int i=0; i<n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

char getgrade(int a){
    // if(a>=90){
    //     return 'A';
    // }
    // else if(a>=80){
    //     return 'B';
    // }
    // else if(a>=70){
    //     return 'C';
    // }
    // else if(a>=60){
    //     return 'D';
    // }
    // else{
    //     return 'E';
    // }
    
    switch(a/10){
        case 10: return 'A'; break;
        case 9: return 'A'; break;
        case 8: return 'B'; break;
        case 7: return 'C'; break;
        case 6: return 'D'; break;
        default: return 'E';break;
    }
}

int getsum(int a){
    int add =0;
    for(int i=0; i<=a; i++ ){
        add = add+i;
    } 
    return add;
}

int getevensum(int n){
    cout << "inside getEveSum Fiunction" << endl;
	cout << "Vlaue of n is " << n << endl;
	
	int add = 0 ;
	cout << "Initial value of sum is " << add << endl;
	for(int i = 2; i<=n; i = i + 2) {
		cout << "for value of i: " << i << endl;
		add = add + i;
		cout << "sum now become: " << add << endl;
	}
	cout << "returning sum = " << add << endl;
	return add;
}
int main(){
    
    //Function Call or invoke
    //printname();
    // int a=5;
    // cout<<"Address of a is "<<&a<<endl;
    
    //printnumber(a);

    // int a;
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;

    // int b;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;

    // int sum = add(a,b);
    // cout<<"Addition Result is: "<<sum<<endl;


    // int a,b,c;
    // cin>>a>>b>>c;


    // int maximumnumber = findmax(a,b,c);
    // cout<<maximumnumber<<endl;
    
    //n is arguement
    // int n;
    // cout<<"Enter the value of n "<<endl;
    // cin>>n;

    // printcounting(n);

    // int marks;
    // cout<<"Enter the marks "<<endl;
    // cin>>marks;

    // char ans = getgrade(marks);
    // cout<<ans;
    
    // for(int i=1; i<100; i++){
    //     char ans = getgrade(i);
    //     cout<<"Grade for marks = "<<i<<" is "<<ans<<endl;
    // }

    // 
    
    // int n;
    // cout<<"Enter the value of n "<<endl;
    // cin>>n;
    
    // int sum = getevensum(n);

    // cout<<"Sum upto "<<n<<" for even number is "<<sum<<endl;

    int n;
	cout << "Enter the value of n " << endl;
	cin >> n;

	cout << "Calling getEvenSum function " << endl;
	int sum = getevensum(n);
	cout<<"Sum upto "<<n<<" for even number is "<<sum<<endl;
    
    return 0;
}