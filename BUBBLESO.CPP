#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class abc
{
	public:
	int ar[5],i,j,temp;
	void getval(int []);
	void sort();
	void showarr();
};
void abc::getval(int m[])
{
	for(i=0;i<5;i++)
	ar[i]=m[i];
}
void abc::sort()
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<(i-1);j++)
		{
			if(ar[i]<ar[j])
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
}
void abc::showarr()
{
	for(i=0;i<5;i++)
	cout<<"\n sorted value : "<<ar[i];
}
void main()
{
	abc ob;
	int i,ar[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter a number :");
		scanf("%d",&ar[i]);
	}
	ob.getval(ar);
	ob.sort();
	ob.showarr();
}