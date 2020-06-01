#include<iostream>                                                                                        //DEFINING THE REQUIRED LIBRARIES
#include<cstdio>
#include<cstring>
#include<conio.h>
#include<cstdlib>
#include<iomanip>
#include<fstream>


using namespace std;                                                                                      //USING THE NAMESPACE STD METHOD
class student{
		private :                                                                                               //access specifier for sensitive information
		int ID ;
		long contactno;
	
	public :
		                                                                                                 //DECLARING THE REQUIRED VARIABLES
	string firstname, cource,lastname;                                                                  //DECLARING THE REQUIRED VARIABLES
	int section ;
		

	public :                                                                                              //access specifier for the function to be accessed globally
		addrecord();
        viewrecord();
        overrightdatabase();
	

};
student st1();

 student :: addrecord()

 {

	
cout<<"\nEnter Your 4-digit College ID<as username> : "<<endl;
 cin>>ID;
 	
 cout<<"\nEnter Your 8-digit Contact Number <as password> : "<<endl;
 cin>>contactno;
 
	cout<<"\nEnter your firstname : "<<endl;
	cin>>firstname ;
	
	cout<<"\nEnter your lastname : "<<endl;
	cin>>lastname ;
	
	cout<<"\nEnter your cource : "<<endl;
	cin>>cource; 
	
	cout<<"\nEnter your section : "<<endl;
	cin>>section;
	
	fstream myfile("student DBMS.txt", ios::app);                                                                                     //PERFORMING THE FILE-HANDLING OPERATION

	myfile<<firstname<<endl;

	myfile<<lastname<<endl;

	myfile<<cource<<endl;

	myfile<<section<<endl;

	myfile.close();
 } 
 
 student :: viewrecord()
 
 {    
 	char ch,arr1[100];
 ifstream fin;
 
cout<<"\nEnter Your 4-digit College ID<as username> : "<<endl;
 cin>>ID;
 	
 cout<<"\nEnter Your 8-digit Contact Number <as password> : "<<endl;
 cin>>contactno;


 fin.open("student DBMS.txt",ios::out);

 ch=fin.get() ;
 
 while(!fin.eof())
 
 {
     cout<<ch;
 	 ch=fin.get(),"\n","\t" ;
 	
 }
 fin.close();
}
 
 student::overrightdatabase()
  {
  	
 ofstream modify;

cout<<"\nEnter Your 4-digit College ID<as username> : "<<endl;
 cin>>ID;
 	
 cout<<"\nEnter Your 8-digit Contact Number <as password> : "<<endl;
 cin>>contactno;


 cout<<"\nEnter Your College ID<as username> : "<<endl;
 cin>>ID;
 	
 cout<<"\nEnter Your 8-digit Contact Number <as password> : "<<endl;
 cin>>contactno;
 
 modify.open("student DBMS.txt",ios::out)  ;

 cout<<"\nEnter Your College ID<as username> : "<<endl;
 cin>>ID;

 cout<<"\nEnter Your 8-digit Contact Number <as password> : "<<endl;
 cin>>contactno;

 cout<<"\nEnter Your First Name : "<<endl;
 cin>>firstname;

 cout<<"\nEnter Your Last Name : "<<endl;
 cin>>lastname;

 cout<<"\nEnter Your Cource Name : "<<endl;
 cin>>cource;

 cout<<"\nEnter Your Section : "<<endl;
 cin>>section;

 modify.close();
   
  }
 



int main()
{
    student st1;

	int CHOICE;
	
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~STUDENT DATABSE MANAGEMENT SYSTEM~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	cout<<"\n1. ADD RECORD\n2. VIEW RECORD\n3. MODIFY DATABASE\n4. EXIT PROGRAMME ";
	
	cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
do 
{	
cout<<"\nChoose An Operation To Be Performed : "<<endl;
cin>>CHOICE;

 switch(CHOICE)
 {
 case 1 : st1.addrecord();
 break;
 
 case 2 : st1.viewrecord();
 break;
 
 case 3 : st1.overrightdatabase();
 break;	
 
 case 4 : exit(0);
 break;
 
 default : cout<<"INVALID CHOICE";
 }
 
cout<<"\nTHANKS FOR CONTRIBUTING TO THE STUDENT DATABASE"<<endl;
}
while(CHOICE<5);


return 0 ;
}
