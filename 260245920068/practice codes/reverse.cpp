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
        sum=sum*10+(temp%10);
        temp=temp/10;
     }
     cout<<"reverse"<<sum;
    
     

    return 0;
    
}