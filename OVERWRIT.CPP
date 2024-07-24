#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
class b;
class a
{
	public:
	char name[20],fname[20],mname[20];
	int rollno,hindi,english,maths,science,comp,tot;
	float per;
	void detail(void);
	void show (void);
	friend void transfer(b,a);
};
class b:public a
{
	public:
	void result(void);
	void show(void);
	friend void transfer(b,a);
};
void transfer(b t,a o)
{
	strcpy(o.name,t.name);
	strcpy(o.fname,t.fname);
	strcpy(o.mname,t.mname);
	o.show();
}
void a::detail()
{
	fflush(stdin);
	cout<<"Enter your Name : ";gets(name);
	fflush(stdin);
	cout<<"Enter your Father's Name : ";gets(fname);
	fflush(stdin);
	cout<<"Enter your Mother's Name : ";gets(mname);

};
void a::show()
{
	cout<<"\n Student Name : "<<name;
	cout<<"\n Father's Name : "<<fname;
	cout<<"\n Mother's Name : "<<mname;
};
void b::result()
{
	cout<<"Enter your Roll no. : ";cin>>rollno;
	cout<<"Enter your Hindi marks : ";cin>>hindi;
	cout<<"Enter your English marks : ";cin>>english;
	cout<<"Enter your Maths marks : ";cin>>maths;
	cout<<"Enter your Science marks : ";cin>>science;
	cout<<"Enter your Computer marks : ";cin>>comp;
};
void b::show()
{
	tot=hindi+english+maths+science+comp;
	cout<<"\n Total Marks Is : "<<tot;
	per=tot/5;
	cout<<"\n Percentage is : "<<per;
};
void main()
{
	b ob[200];
	a o;
	int i,ch,n;
	clrscr();
	cout<<"How many student's data you want to insert : ";cin>>n;
	for(i=0;i<n;i++)
	{
		ob[i].detail();
		ob[i].result();
	}
	for(i=0;i<n;i++,ch=123)
	{
		clrscr();
		if(ch==0)
			continue;
		while(ch!=0)
		{
			clrscr();
			cout<<"1."<<ob[i].name<<"'s details \n 2. "<<ob[i].name<<"'s Result";
			cout<<"\n Press 0 to move to next student ";
			cout<<"\n Enter your choice : ";cin>>ch;
		switch(ch)
		{
			case 1:
				transfer(ob[i],o);
				getch();
				break;
			case 2:
				ob[i].show();
				getch();
				break;
			case 0:
				break;
			default:
				cout<<"Not select show";
				getch();
		}
	}
	}
}