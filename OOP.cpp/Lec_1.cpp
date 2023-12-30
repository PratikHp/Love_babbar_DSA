#include<iostream>
using namespace std;
class animal{
    private:
        int weight;
    //state or properties 
    public: 
    int age ;
    string type;
    
     //default constructor
    animal(){
        this->weight = 60;
        this->age = 22;
        this->type= "cat";
        cout<<"Constructor is called "<<endl;
    }

    //parameterized constructor
    animal(int age,int weight){
        this->age=age;
        this->weight= weight;
        cout<<"Parametersed constructor is called "<<endl;
    }

    //copy constructor
    animal(animal &obj){
        this->age = obj.age;
        this->weight = obj.weight;
        this->type = obj.type;
        cout<<"I am inside a copy constructor "<<endl;
    }
    
    //behaviour
    void eat(){
        cout<<"eating"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    
   

    int getweight(){
        return weight;
    }

    void setweight(int weight){
        this->weight = weight;
    }
    void print(){
        cout<<this->age<<" "<<this->weight<<this->type<<endl;
    }
};
int main(){
    //Object creation
    //static
    // animal ramesh;
    // ramesh.age = 12;
    // ramesh.type = "lion";
    // cout<<"Age of ramesh is "<<ramesh.age<<endl;
    // cout<<"Type of ramesh is "<<ramesh.type<<endl;

    // ramesh.eat();

    // ramesh.sleep();

    // //to private member
    // ramesh.setweight(101);

    // cout<<"weight of ramesh "<<ramesh.getweight()<<endl;

    // //Dynamic memory 
    
    // animal* suresh = new animal;
    // (*suresh).age = 15;
    // (*suresh).type = "Billi";

    // //Alternate dynamic
    // suresh->age=17;
    // suresh->type = "tiger";

    // suresh->eat();
    // suresh->sleep();

    animal a(10,100);
    animal* b=new animal(15,56);
    
    //object copy
    animal c = a;
    animal d(c); 
    
    animal a;
    a.age = 20;
    a.setweight(101);
    a.type = "Babbar";

    animal b = a;
    cout<<"a->"<<" ";
    a.print();

    cout<<"b->"<<" ";
    b.print();

    a.type[0] = "G";
    cout<<"a->"<<" ";
    a.print();

    cout<<"b->"<<" ";
    b.print();
    return 0;
}