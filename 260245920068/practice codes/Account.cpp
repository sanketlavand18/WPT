#include <iostream>
using namespace std;
class account
{
int accno,balance;
public:
void accept()
{
    cout<<"\nenter the AccNo and Balance"<<endl;
    cin>>accno>>balance;
}
void display(){
    cout<<"accno is"<<accno<<endl;
    cout<<balance<<"is balance"<<endl;
}
};
int main()
{
    account a;
    a.accept();
    a.display();
    return 0;
}