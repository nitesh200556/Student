#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class abc
{
	public:
	char name[20];
	int year,sem;
	void getdata();
	void showdata();
};
void abc::getdata()
{
	cout<<"enter name : ";
	gets(name);
	cout<<"enter year : ";cin>>year;
	cout<<"enter semester : ";cin>>sem;
	cout<<"\n-------------------------\n";
}
void abc::showdata()
{
	cout<<" your name : "<<name;
	cout<<"\n your year : "<<year;
	cout<<"\n your semester : "<<sem;
	cout<<"\n--------------------------\n";
}
void main()
{
	abc ob[5];
	int i;
	clrscr();
	for(i=0;i<5;i++)ob[i].getdata();
	clrscr();
	for(i=0;i<5;i++)ob[i].showdata();
}