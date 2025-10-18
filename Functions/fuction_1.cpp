#include <iostream>
#include <string>
using namespace std;

void myFunction(string fName){
    cout<<fName<<" Fonseka"<<endl;
}


// Default Parameter Value
void myFunction2(string country = "Sri Lanka"){  
    cout<<country<<endl;
}

//Multiple Parameters

void myFunction3(string name, int age){
    cout<<"My name is "<<name<< " and I am "<<age<<" years old."<<endl;
}

//Return Values

void addition(int x){
    int result = x + 20;
    cout<<"The reslut is: "<<result<<endl;
}

void addition2(int x , int y){
    int result2 = x + y;
    cout<<"The result is :"<<result2<<endl;
}

int main(){

    myFunction("Tanidi");
    myFunction("Sanesh");
    myFunction("Nilantha");

    myFunction2("India");
    myFunction2();
    myFunction2("USA");

    myFunction3("Tanidi", 22);
    myFunction3("Sanesh", 26);
    myFunction3("Nilantha", 59);

    addition(30);

    addition2(10, 15);

    return 0;
}