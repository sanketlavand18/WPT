#include<iostream>
using namespace std;
class mydate
{
    int d,m,y;
    public:
    static int count;
    public:
    mydate()
    {
        cout<<"no parameter constructor called"<<endl;
        d=24;
        m=5;
        y=56478;
    }
     mydate(int x,int y,int z)
    {
        cout<<" parameter constructor called"<<endl;
        d=d;
        m=m;
        y=y;
        count++;
    }
};
int main()
{
    sta
}