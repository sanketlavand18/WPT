#include<iostream>
using namespace std;

int main()
{
    int number;
    int temp;
    cout<<"enter the number";
    
    cin>>number;
temp=number;
    int sum=0;
     while (temp!=0)
     {
        sum=sum+(temp%10);
        temp=temp/10;
     }
     cout<<sum;

    return 0;
    
}