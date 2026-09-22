#include<iostream>
using namespace std;
class book
{
public:
string title;
int id;
int year;
void display()
{
cout<<"\nTitle of The Book: "<<title;
cout<<"\nYear Of Publishion:"<<year;
cout<<"\nID of the Book:"<<id;
}
book()
{
title="\nfaster fan";
id=345;
year=2019;
}
book(string a,int b,int c)
{
title=a;
year=b;
id=c;
}
};
int main()
{
book b1;
b1.display();
book b2("atomic habit",2018,568\n);
b2.display();
return 0;
}
