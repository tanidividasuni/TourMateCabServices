#include <iostream>

using namespace std;

void print_pow(double x, int y){
    double myPower = x * y;
    cout<<"answer is "<<myPower<<endl;

}

int main()
{
    double x;
    int y;

cout<<"What is the x ";
cin>>x;
cout<<"What is the y ";
cin>>y;


print_pow(x, y);
}