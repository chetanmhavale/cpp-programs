#include<iostream>
using namespace std;
class LibrayBook
{
private:
string title;
string author;
float issued_date;
float return_date;
public:
void get_data()
{
title="OOPS";
author="xyz";
issued_date= 3.4;
return_date= 14.4;
}
void display_data()
{
cout<<"Title of book:"<<title<<endl;
cout<<"Author of book:"<<author<<endl;
cout<<"Issued Date:"<<issued_date<<endl;
cout<<"Return Date:"<<return_date;
}
};
int main()
{
LibrayBook a;
a.get_data();
a.display_data();
return 0;
}

