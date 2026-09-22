#include<iostream>
using namespace std;
class book
{
public:
int bookid;
float price;
string name;

void display()
{
cout<<"\nBook ID:"<<bookid;
cout<<"\nPrice:"<<price;
cout<<"\nBook Title:"<<name;
cout<<"\n";
}
};
int main()
{
book t1;
t1.bookid=43424;
t1.price=98.5;
t1.name="AI AND ML";
t1.display();
return 0;
}
