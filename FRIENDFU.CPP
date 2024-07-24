#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class two;
class one
{
	int x;
	public:
	void setdata(int i)
	{
		x=i;
	}
	friend void show(one,two);
};
class two
{
	int y;
	public:
	void setdata(int j)
	{
		y=j;
	}
	friend void show(one,two);
};
void show(one o,two t)
{
	if(o.x>t.y)
	cout<<"X is grater";
	else
	cout<<"Y is grater";
}
void main()
{
	one A;
	two B;
	clrscr();
	A.setdata(100);
	B.setdata(20);
	show(A,B);
}