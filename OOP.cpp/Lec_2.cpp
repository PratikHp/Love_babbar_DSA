#include<iostream>
using namespace std;

// class animal{
//         private:
//             int age;
//             int weight;
//         public:
//            void eat()
//            {
//             cout<<"Eating"<<endl;
//            }

//            int getage()
//            {
//              return this->age;
//            }
//            void setage(int age){
//             this->age = age;
//            }
// };

class animal{
  protected:
  int age;

};

class dog:protected animal{
      public:
      void print(){
        cout<<this->age;
      }

};
int main(){
    dog d1; 
    d1.print();  
    return 0;
}