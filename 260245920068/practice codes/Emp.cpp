#include<iostream>
using namespace std;
class Emp
{
    int id,sal;
    public:
    void accept(int id, int sal)
    {
        id=id;
        sal=sal;
    }
    public:
     void display()
    {
        cout<<id<<"is id"<< sal<<"is sal";
    }
    void setid(int id)
    {
        id=id;
    }
    void getid(int id)
    {
        id=id;
    }
     void setsal(int sal)
    {
        sal=sal;
    }
    void getsal(int sal)
    {
        sal=sal;
    }
   
};int main()
{
    Emp e1;
    e1.accept(474,748);
    e1.display();
    e1.setid(41);
}