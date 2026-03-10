#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    void accept(){
        cout<<"\n accept value for real and imagnary no"<<endl;
        cin>>real>>img;
    }
    void display()
    {
    cout<<real<<"+"<<img<<"i"<<endl;
    }
    void setReal(int r)
    {
        real= r;
    }
    int  getReal()
    {
        return real;
    }
};
int main()
{
    complex c;
    c.accept();
    c.display();
    c.setReal(155);
  int r=  c.getReal();
    cout<<r;
}