#include <iostream>
using namespace std;

void display_prime_number()
{
     int count=1;
     
     int number=2;
     
     while(count<=25)
     {
                     for(int i=2;i<number;i++)
                         {
                             if((number%i)==0 && i!=number-1)
                             {
                                              break;
                                              }
                                              
                             else if (number%i!=0 && i==number-1)
                                     {
                                                  count++;
                                                  cout<<"The number "<<number<<" is a prime number"<<endl;
                                     }
                                              
                         }
                         
                         number++;                   
     }
     
 }


int main()
{
    
    display_prime_number();
    
    
}
