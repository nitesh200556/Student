#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class abc
{
	public:
	abc()
	{
		printf("hello i am constructor");
	}

	abc(int a)
	{
		printf("%d",a*a);
	}
};
void main()
{
	clrscr();
	abc obj;
}