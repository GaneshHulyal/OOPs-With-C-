#include<iostream>
using namespace std;
class student
{
	public:
string name1;
int regNo;
float Marks;
int age;	
void setData(string a,int b,float c,int d)
{
	name1=a;
	regNo=b;
	Marks=c;
	age=d;
}
void display(student temp)
{
	cout<<"Name: "<<temp.name1<<endl;
	cout<<"RegNO: "<<temp.regNo<<endl;
	cout<<"Marks: "<<temp.Marks<<endl;
	cout<<"Age: "<<temp.age<<endl;
}
void displayArray(student arr[])
{
	int i;
	for(i=0;i<1;i++)
	{
		cout<<"Name of the Student: "<<arr[i].regNo<<endl;
	}
}
void readInput()
{
	cin>>name1;
	cin>>regNo;
	cin>>Marks;
	cin>>age;
}
};
int main()
{
	student p1,p2,p3[10];
	int i;
	p1.setData("Ganesh",123456,70.45,21);
	p1.display(p1);
	p2.readInput();
	p2.display(p2);
	for(i=0;i<1;i++)
	{
		p3[i].readInput();
	}
	p2.displayArray(p3);
}
