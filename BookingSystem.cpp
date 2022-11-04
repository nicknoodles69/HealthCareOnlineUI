#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

int bookAppointment()
{
    system("cls");
	
    cout<<"\n ----- Book your appointment ----- \n";	
    cout<<"\n ----- Available slots are---- \n";	 

    
    ifstream read;					//check if record exists
    read.open("appointment.txt");
    
    int hoursbook = 8;
    
    int arr[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    int recordFound =0; 
     
    if(read)
    {     
	string line;
	char key = 'A';
	int i = 9;
	       
	while(getline(read, line)) {
	char temp = line[0];
	int index = (temp - 65);
	arr[index]=1;  
	recordFound = 1;
	}
	if(recordFound == 1)
	{
	cout<<"\n Appointment List by Hours:\n";
	char key = 'A';
	int hours = 9;
	for(int i = 0; i<=12; i++)
	{
	if(i == 0){
	if(arr[i] == 0) 
	cout<<"\n "<<key<<"-> 0"<<hours<<" - Available";
	else
	cout<<"\n "<<key<<"-> 0"<<hours<<" - Booked";
	}
	
	else
	{								           	
	if(arr[i] == 0) 
	cout<<"\n "<<key<<"->"<<hours<<" - Available";
	else
	cout<<"\n "<<key<<"->"<<hours<<" - Booked";
	}
	hours++; key++;
	}
            
	}
		
	read.close();
    }
	if(recordFound == 0){
	cout<<"\n Appointment Available for following hours :";
	char key = 'A';
	for(int i = 9; i<=21; i++)
	{
		if(i==9)
		cout<<"\n "<<key<<" -> 0"<<i<<" - Available";
		else
		cout<<"\n "<<key<<" -> "<<i<<" - Available";
		key++;
	}
		
	}
   
   char choice;

   cout<<"\n\n Choose your slot: ";
   cin>>choice;
   
   if( !(choice >= 'A' && choice <='Z'))
   {
	cout<< "\n Error: Invalid Selection";
	cout<<"\n Please selction correct value from menu A-Z";
	cout<<"\n Press any key to continue.";
	getchar(); 
	getchar();
	system("cls");
	bookAppointment();
   }
   
   int index = (choice-65);
   int isBooked = 1;
   if(arr[index] == 0) 
      isBooked = 0;
      
   if(isBooked ==1)
   {
   	cout<<"\n Error: This Appointment slot is booked.";
   	cout<<"\n Please select again.";
   	cout<<"\n Press any key to continue.";
   	getchar();
	getchar();
   	system("cls");
   	bookAppointment();
   }
   
   string name;
   cout<<"\n Enter your Name: ";
   cin>>name;  
   
   ofstream out;
   out.open("appointment.txt", ios::app);
	
   if(out){
	   out<<choice<<":"<<name.c_str()<<"\n";
	   out.close();
	   cout<<"\n Successfully Booked for : "<< (choice-65) + 9;
    }
    else
    {
    	cout<<"\n Error while saving.";
    }

    cout<<"\n Please any key to continue.";
	getchar(); 
	getchar();
	return 0;		
}

int existingAppointment()
{
    system("cls");
	
   cout<<"\n ----- List of Available Appointments ---- \n";
    //check if record already exist..
    ifstream read;
    read.open("appointment.txt");
    
    int hoursbook = 8;
    
    int arr[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    int recordFound =0; 
     
    if(read)
    {     
	string line;
	char key = 'A';
	int i = 9;
	       
	while(getline(read, line)) {
	char temp = line[0];
	int index = (temp - 65);
	arr[index]=1;  
	recordFound = 1;
	}
	if(recordFound == 1)
	{
	cout<<"\n Appointment List by hours: \n";
	char key = 'A';
	int hours = 9;
	for(int i = 0; i<=12; i++)
	{
	if(i == 0){
	if(arr[i] == 0) 
	cout<<"\n "<<key<<"-> 0"<<hours<<" - Available";
	else
	cout<<"\n "<<key<<"-> 0"<<hours<<" - Booked";
	}
	
	else
	{								           	
	if(arr[i] == 0) 
	cout<<"\n "<<key<<"->"<<hours<<" - Available";
	else
	cout<<"\n "<<key<<"->"<<hours<<" - Booked";
	}
	hours++; key++;
	}
            
	}
		
	read.close();
    }
	if(recordFound == 0){
	cout<<"\n Available Appointments: ";
	char key = 'A';
	for(int i = 9; i<=21; i++)
	{
		if(i==9)
		cout<<"\n "<<key<<" -> 0"<<i<<" - Available";
		else
		cout<<"\n "<<key<<" -> "<<i<<" - Available";
		key++;
	}
		
	}
   

   ofstream out;
   out.open("appointment.txt", ios::app);
	

    cout<<"\n Press any key to continue.";
	getchar(); 
	getchar();
	return 0;	 
}
 

int main(int argc, char** argv) {
	while(1)
	{
		system("cls");
		cout<<"\tAppointment Booking System\n";
		cout<<"---------------------------------------\n\n";
		
		cout<<"  (1) Book an Appointment\n";
		cout<<"  (2) Check Existing Appointments\n";
		cout<<"  (0) Exit \n";
		int choice;
		
		cout<<"\n Enter you choice: ";
		cin>>choice;
		
		switch(choice)
		{
			case 1: bookAppointment(); break;
			case 2: existingAppointment(); break;
			case 0: exit(0);
                 	 
            default: cout<<"\n Invalid choice. Enter again ";
                     getchar();
                 	
		}   		        

	}
	return 0;
}   
