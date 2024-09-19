//Write a program create employee class with members variable as EmpId,Name of Employee and
//Salary. For 10 Employees
//Print list of all employees.
//Print list of employee who got heights salary.

#include<iostream>
using namespace std;

class employee
{
	private:
		int emp_id;
		string emp_name;
		float sal;
		
	public:
		void get()
		{
			cout<<"\nEnter employee ID : ";
			cin>>emp_id;
			cout<<"\nEnter Employee Name : ";
			cin>>emp_name;
			cout<<"\nEnter Employee Salary : ";
			cin>>sal;
		}
		
		void show()
		{
			cout<<"\nSalary of employee id "<<emp_id<<" name is "<<emp_name<<" is "<<sal;
			
		}
		float getSalary()
		{
        	return sal;
    	}
};
int main()
{
	employee employees[10];
    float maxSalary = 0;
    
	for(int i=0;i<3;i++)
	{
		employees[i].get();
	}
	for(int i=0;i<3;i++)
	{
		employees[i].show();
	}
	
	
	
    for(int i=0;i<10;i++) \
	{
    	if(employees[i].getSalary()>maxSalary) 
		{
            maxSalary=employees[i].getSalary();
        }
    }
    cout<<"\nEmployees with the highest salary"<<maxSalary;
	
	return 0;
} 