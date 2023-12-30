#include<iostream>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

bool cmp(char x, char y){
        return x>y;
}

bool compareString(string a, string b) {
        if(a.length() != b.length())
                return false;


                for(int i=0; i<a.length(); i++) {
                        if(a[i] != b[i]) {
                                return false;
                        }
                }

        return true;
}

int main(){
    //String create 
    //string str;
    //input
    //cin>>str;
    //getline(cin,str);
    // str[0]='P';
    // str[1]='r';
    // str[2]='a';
    // str[0]='\0';
    // str[0]='t';
    // str[0]='i';
    // str[0]='\0';
    // str[0]='k';
    //Output
    //cout<<str<<endl;

    //   cout << "length: "<< str.length() << endl;
//   cout << "isEmpty: " << str.empty() << endl;
//   str.push_back('A');
//   cout << str << endl;
//   str.pop_back();
//   cout << str << endl;
//   cout << str.substr(1, 3) << endl;
//   cout << str << endl;

//   string a = "Love";
//   string b = "love";

//   if(a.compare(b) == 0) {
//           cout << " a and b are exactly same strings" << endl;
//   }
//   else {
//           cout << "a and b are not same" << endl;
//   }

//   string x = "bbbb";
//   string y = "bbbba";

//   cout << x.compare(y) << endl;

//   string sentence = "hello Jee kaise ho saare";
//   string target = "Everyone";

//   //cout << sentence.find(target) << endl;
//   if(sentence.find(target) == string::npos) {
//           cout << "Not Found" << endl;
//   }

// string str = "This is my First Message";
// string word = "Babbar";

// str.replace(11, 5 , "Second");
// cout << str << endl;

//     string str = "ABCDEFGHIJKLMNOPQRST";
//     str.erase(10,10);
//     cout << str;

        // string s = "babbar";
        // sort(s.begin(), s.end(),cmp);

        // cout<<s<<endl;

        //Creation of map
        map<int, char> meramap;
        //Insertion
        meramap[0]='a';
        meramap[1]='b';
        meramap[25]='z';

        //Acessing
        cout<<"Your ans is: "<<meramap[1]<<endl;


    return 0;
}