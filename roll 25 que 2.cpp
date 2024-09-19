//Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked,
//Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker.
//(Use Default values for Pay_Rate Rs. 500 per hours)

#include<iostream>
using namespace std;

class worker
{
	private:
		string worker_name;
		int no_of_hours_worked;
		float salary;
		
	public:
		void get()
		{
			cout<<"\nEnter Worker Name : ";
			cin>>worker_name;
			cout<<"\nEnter No Of Hours Worked : ";
			cin>>no_of_hours_worked;
			cout<<"\nEnter Salary : ";
			cin>>salary;
				
		}
		void show()
		{
			int pay_rate=500;
			salary=no_of_hours_worked*pay_rate;
			cout<<"\n"<<worker_name<<"is worked "<<no_of_hours_worked<<" hours Total salary is : "<<salary;
		}
};
int main()
{
	worker w1;
	w1.get();
	w1.show();

	return 0;
}