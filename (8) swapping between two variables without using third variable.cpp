#include<iostream>
using namespace std;
int main() {
int num1,num2;
cout<<"Enter two numbers : ";
cin>>num1>>num2;
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
cout<<endl<<"After swapping : "<<num1<<" "<<num2<<endl;
}
