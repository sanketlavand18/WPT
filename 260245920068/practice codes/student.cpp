#include<iostream>
using namespace std;
class student
{
     static int roll_no;
    int dob;
    int marks;



public:
student(int dob ,int marks)
{
    
    this->dob = dob;
        this->marks = marks;
    roll_no++;

}
public:
void display()
{
    cout<<"Rollno"<<"="<<roll_no<<", "<<"dob"<<"="<<dob<<", "<<"marks"<<"="<<marks<<endl;
}}
;
int student ::roll_no;

int main()
{
    student s1(23,566);
    s1.display();
    student s2(111,56);
    s2.display();
}
    
    


