#include<iostream>
using namespace std;
int main() {
int arr[10];
int i,sum=0;
cout<<"Enter 10 numbers : ";
for(i=0;i<10;i++)
    cin>>arr[i];

    for(i=0;i<10;i++)
        sum=sum+arr[i];

    cout<<endl<<"Sum of the all 10 numbers is : "<<sum<<endl;
}
