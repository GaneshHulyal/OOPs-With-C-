#include<iostream>
using namespace std;
class patient{
	public:
		string name;
		int id;
		bool typeOfAdmission;
		void setData(string nname,int iid, bool ttypeOfAdmission)
		{
			name=nname;
			id=iid;
			typeOfAdmission=ttypeOfAdmission;
		}
		void display()
		{
			cout<<"Name :"<<name<<endl<<"id="<<id<<endl;
			if(typeOfAdmission)
			{
				cout<<"type=in ward"<<endl;
			}
			else
			{
				cout<<"type= out ward"<<endl;
			}
		}
		void readdata()
		{
			cout<<" Enter Id, Type and  Name"<<endl;
			cin>>id>>typeOfAdmission>>name;
		}
		static void search(patient arr[], int size, int keyId)
		{
			int i;
			int flag=0;
			for(i=0;i<=size;i++)
			{
				if(arr[i].id==keyId)
				{
					printf("Using Search Method\n");
					arr[i].display();
					flag=1;
				}
			}
			if(flag==1)
			{
				printf("Patient Found\n");
			}
			else
			{
				printf("Patient Not Found\n");
			}
		}
	};
class Hospital
{
public:
patient arr[100];
int count=0;
string name;
string address;
void setData(string nname, string aadress)
{
	name=nname;
	address=aadress;
}	
void addPatient(patient p)
{
	if (count>100)
	{
		printf("Its full\n");
		return;
	}
	else
	{
		arr[count++]=p;
	}
}
};
/*
int main()
{
	patient p2;
	p2.setData("XYZ",1234,true);
	cout<<"Name="<<p2.name<<endl;
	cout<<"ID :"<<p2.id<<endl;
	p2.display();
	p2.readdata();
	//cout<<"Id="<<p2.id<<endl<<"Type of Admission"<<p2.typeOfAdmission<<endl<<"Name="<<p2.name<<endl;
	p2.display();
}*/
/*int main()
{
	patient p1[4];
	p1[0].setData("ABCD",123,1);
	p1[1].setData("BCDA",456,0);
	p1[2].setData("LMNA",890,1);
	p1[3].setData("XYZA",432,1);
	p1[0].display();
	p1[1].display();
	p1[2].display();
	p1[3].display();
	printf("Using For Loop\n");
	int i;
	for(i=0;i<5;i++)
	{
		p1[i].display();
	}
	patient::search(p1,5,890);
}*/
int main()
{
	Hospital h;
	h.setData("ABC","LMN");
	patient p1;
	p1.setData("ZZZ",10,0);
	h.addPatient(p1);
	h.arr[0].display();
}
