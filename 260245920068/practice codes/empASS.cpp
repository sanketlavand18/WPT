#include<iostream>
using namespace std;
class Emp
{
    int empid,sal;
    string name;
  int totalEmp;

 int count;
public:
 Emp()
 {
    cout<<"enter the empid"<<endl;
    cin>>empid;
    cout<<"enter the name"<<endl;
    cin>>name ;
    cout<<"enter the sal"<<endl;
    cin>>sal;

    count++;
 }
 public:

 void display()
 {
    cout<<"Employee details"<<endl;
    cout<<empid<<endl;
    cout<<name<<endl;
    cout<<sal<<endl;
    totalEmp=count;
    cout<<totalEmp<<endl;
 }

 
};
int Emp::count = 0;1

int main()
{
    int n;
    cout<<"enter the employee number";
    cin>>n;

    Emp em[n];
    for(int i=0;i<=n;i++)
    {
      em[i].display();
    }

   return 0;
};