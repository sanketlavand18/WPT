#include <iostream>
using namespace std;

int main()
{

    int number=2;

    while(number<25)
    {
        int count=0;
        for(int i=2;i<number;i++)
        {
            
            if((number%i)==0)
            {
                count++;
                break;
            }
        }
        
             if (count!=0)
             {
                //cout<<endl;
             }
             else
            {
                cout<<number<<endl;
            }
            count--;
        
        number ++;
    }
    return 0;
}