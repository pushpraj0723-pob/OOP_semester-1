#include<iostream>
using namespace std;
class student 
{
public:
int applicationID;
int rollno;
char grades;
string name;
student(int applicationID,int rollno,char grades,string name)
{
this->applicationID=applicationID;
this->rollno=rollno;
this->grades=grades;
this->name=name;
}
void display()
{
cout<<"\nApplicationID:"<<applicationID;
cout<<"\nRollno:"<<rollno;
cout<<"\nGrades:"<<grades;
cout<<"\n Name:"<<name;
}
};
int main()
{
student s1(20261230,17,'A',"Raj Saundane");
s1.display();
return 0;
}
