#include <iostream>
using namespace std;
class prime
{
void display_prime_number()
{
     int count=0;
     
     int number=1;
     
     while(count!=25)
     {
                     for(int i=1;i<number;i++)
                         {
                             if(number%i==0)
                             {
                                 break;
                             }
                                              
                             else 
                                     {
                                                  count++;
                                                  cout<<"The number "<<number<<" is a prime number"<<endl;
                                     }
                                              
                         }
                         
                         number++;                   
     }
     
 }
};


int main()
{
    student.stu;
    stu=display_prime_number();
    
    
}
