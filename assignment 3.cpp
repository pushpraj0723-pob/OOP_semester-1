#include<iostream>
using namespace std;
class emp
{
public:
int empID;
float emp_salary;
string emp_name;
void in()
{
cout<<"Enter The Employee Name: ";
cin>>emp_name;
cout<<"Enter the  Employee ID: ";
cin>>empID;
cout<<"Enter The  Employee Salary: ";
cin>>emp_salary;
}
void display()
{
cout<<"\nEmployee Name: "<<emp_name;
cout<<"\nEmployee ID: "<<empID;
cout<<"\nEmployee Salary :"<<emp_salary;
cout<<"\n";
}
};
int main()
{
emp e1;
e1.in();
e1.display();
return 0;
}
