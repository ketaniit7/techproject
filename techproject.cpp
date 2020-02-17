#include<iostream>
using namespace std;

class emp
{
	public:
	int id=1234;
	string name="leader";
	char reply='Y';
	
	public:
	void welcome()
{
	cout<<"Enter the name:"<<endl;
	cin>>name;
	cout<<"Enter the id:"<<endl;
	cin>>id;
	
	if (id==1234 && name=="leader")
	{
		cout<<"\tWelcome To Application: "<<name<<"\n";
		menu();// invoked here...
		
	}
	else
	{
		cout<<"\t Exit \n";
	}
}
	public:
	void menu()
	{
	
		int option;
		while(reply=='Y' || reply=='y')
		{
			
				cout<<"\t Press 1 to: Add Employee data \n";
				cout<<"\t Press 2 to: Modify Employee data \n";
				cout<<"\t Press 3 to: Delete Employee data \n";
				cout<<"\t Press 4 to: View All Employee \n";
				cout<<"\t Press 5 to: View Single Employee \n";
				cout<<"\t Press 6 to: Exit \n";
				cout<<"\t Press Any Number to Continue..??\n";
				cin>>option;
				switch(option)
			{
				case 1:
				addemp();
				break;
				
				case 2:
				modemp();
				break;
				
				case 3:
				delemp();
				break;
				
				case 4:
				viewemp();
				break;
				
				default:
				cout<<"\t Invalid Option \n";
			}
				cout<<"\t Do you want to continue..?? \n";
				cin>>reply;
				if (reply=='n' || reply=='N')
				{
				cout<<"\t Visit Us Again.....\n";
				}
				
			}
		}
	
	void addemp()// press 1
	{
		int id;
		string nm;
		cout<<"\t Enter name of new Employee \n";
		cin>>nm;
		cout<<"\t Enter id of new Employee \n";
		cin>>id;
		cout<<"\t New Employee is:"<<nm<<"Id is :"<<id;
	}
	void modemp()// press 2
	{
		
	}
	void delemp()// press 3
	{
		
	}
	void viewemp()// press 4,5
	{
		cout<<"\t The List of Employees are \n";
		cout<<"\t"<<name<<"\n";
		cout<<"\t"<<nm<<"\n";
		
		
	}
	void exit()// press 6
	{
		
	}
	
};
main()
{
	emp e;
	e.welcome();
	
}
