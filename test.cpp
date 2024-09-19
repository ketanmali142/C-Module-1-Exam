/*Q.No. 1 Banking Record System.
File handling has been effectively used for each feature of this project
Operations
? Add Record:
? Show/List Data:
? Search Record:
? Edit Record:
  Delete Record:
*/


#include<iostream>
#include<fstream>
using namespace std;

main()
{
	string title;
	string author;
	int quantity;

	
	ofstream file("books.txt", ios::app);
	cout<<"\nEnter Book Title: ";
    cin>>title;
    cout<<"\nEnter Author: ";
    cin>>author;
    cout<<"\nEnter Quantity: ";
    cin>>quantity;
        
	file<<title<< " " <<author<< " " <<quantity;
    file.close();
    
    	return 0;
    }

