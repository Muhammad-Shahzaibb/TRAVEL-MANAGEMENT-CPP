#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class Customer
{
	string name;
	int age;
	string cus_id;
	string password;
	
	public:
	
	Customer(string name,int age,string cus_id,string password)
	{
		this->name=name;
		this->age=age;
		this->cus_id=cus_id;
		this->password=password;
	}
	Customer()
	{
		
	}
	
	void set_name(string Name)
	{
		name=Name;
	}
	string get_name()
	{
		return name;
	}
	
	void set_age(int Age)
	{
		age=Age;
	}
	int get_age()
	{
		return age;
	}
	
	void set_CusID(string Id)
	{
		cus_id=Id;
	}
	string get_CusID()
	{
		return cus_id;
	}
	
	void set_password(string pass)
	{
		password=pass;
	}
	string get_password()
	{
		return password;
	}
	friend class AirlineTravelAgency;
	friend class RailwayTravelAgency;
	
	~Customer()
	{
		
	}
};

class TravelAgency
{
	int NumOfTickets;
    double TicketPrice;
	double tax;
	
	public:
	
	TravelAgency()
	{
		
	}
	TravelAgency(int NumOfTickets,double TicketPrice,double tax)
	{
		this->NumOfTickets=NumOfTickets;
		this->TicketPrice=TicketPrice;
		this->tax=tax;
	}
	
    public:
    	
    virtual void registration()=0;	
    virtual void Bill() = 0;
    virtual void getDetails()=0;
	virtual double cancelBooking()=0;
};

class AirlineTravelAgency : public TravelAgency
{	
    int numOfTickets;
    string TicketType;
    double charges;
    double tax;
    double bill;   
    string Flight[5] = {"DUBAI","AUSTRALIA","USA","LONDON","CANADA"};
    int choice1,choice2;
    string refund;
    string pass;
    Customer c;
    
    public:	
    
    AirlineTravelAgency()
	{
	
	}
	
	AirlineTravelAgency(int numOfTickets,string TicketType)
	{
		this->numOfTickets=numOfTickets;
		this->TicketType=TicketType;
	}
	
	void setTicketType(string TicktTyp)
	{
		TicketType=TicktTyp;
	}
	string getTicketType()
	{
		return TicketType;
	}
		
    void registration()
    {	
		cout << "\n\n******************* WELCOME TO THE AIRLINES ***********************\n" << endl;
    	cout << "SELECT THE NUMBER OF THE COUNTRY OF WHICH YOU WANT TO BOOK THE FLIGHT\n" << endl;
    	
    	for(int i=0; i<5 ; i++)
    	{
    		cout << (i+1) << ". FLIGHT TO " << Flight[i] << endl;
		}
		
		cin >> choice1;
		
		switch(choice1)
		{
			case 1:
			{
				cout << "\n_________________ WELCOME TO DUBAI EMIRATES __________________\n\n" << endl;
				cout << endl << "FOLLOWING IS THE SCHEDULE OF FLIGHTS\n" << endl;
				cout << "\nFLIGHT 1:\t 08-6-2022\t 9-A.M\tRS.8000/=" << endl;
				cout << "FLIGHT 2:\t 09-6-2022\t 6-P.M\tRS.10000/=" << endl;
				cout << "FLIGHT 3:\t 10-6-2022\t 10-P.M\tRS.12000/=" << endl;
		
				cout << "\nSELECT THE FLIGHT YOU WANT TO BOOK" << endl;
				cin >> choice2;
				cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;
			
			    if(choice2==1)
		        {
			    	charges = 8000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 1" << endl;
				}
				else if(choice2==2)
				{
					charges = 10000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 2" << endl;
				}
				else if(choice2==3)
				{
					charges = 12000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 3" << endl;
			    }
				else
			    {
		     		cout << "INVALID CHOICE: ";
				}
				break;
			}
				
		    case 2: 
			{
				cout << "\n_________________ WELCOME TO AUSTRALIAN EMIRATES __________________\n" << endl;
				cout << endl << "FOLLOWING IS THE SCHEDULE OF FLIGHTS\n" << endl;
				cout << "\nFLIGHT 1:\t 11-6-2022\t 2-A.M\tRS.9000/=" << endl;
				cout << "FLIGHT 2:\t 12-6-2022\t 4-P.M\tRS.12000/=" << endl;
				cout << "FLIGHT 3:\t 13-6-2022\t 9-P.M\tRS.14000/=" << endl;
				
				cout << "SELECT THE FLIGHT YOU WANT TO BOOK" << endl;
				cin >> choice2;
				cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;
				
			    if(choice2==1)
			    {
			    	charges = 9000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 1" << endl;
				}
				else if(choice2==2)
				{
					charges = 12000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 2" << endl;
				}
				else if(choice2==3)
				{
					charges = 14000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 3" << endl;
				}
				else
				{
					cout << "INVALID CHOICE: ";
				}
				break;
			}
				
		    case 3:
			{
				cout << "_________________ WELCOME TO USA EMIRATES __________________" << endl;
				cout << endl << "FOLLOWIND IS THE SCHEDULE OF FLIGHTS\n" << endl;
				cout << "\nFLIGHT 1:\t 11-6-2022\t 12-A.M\tRS.9000/=" << endl;
				cout << "FLIGHT 2:\t 12-6-2022\t 3-P.M\tRS.11000/=" << endl;
		     	cout << "FLIGHT 3:\t 13-6-2022\t 7-P.M\tRS.13000/=" << endl;
				
				cout << "SELECT THE FLIGHT YOU WANT TO BOOK" << endl;
		     	cin >> choice2;
				cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;
				
			    if(choice2==1)
			    {
			    	charges = 8000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 1" << endl;
				}
		     	else if(choice2==2)
			    {
					charges = 10000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 2" << endl;
				}
				else if(choice2==3)
			    {
					charges = 12000*numOfTickets;
		         	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 3" << endl;
				}
				else
				{
					cout << "INVALID CHOICE: ";
				}
				break;
			}
				
		    case 4:
		    {
			    cout << "_________________ WELCOME TO LONDON EMIRATES __________________" << endl;
				cout << endl << "FOLLOWING IS THE SCHEDULE OF FLIGHTS\n" << endl;
				cout << "\nFLIGHT 1:\t 14-6-2022\t 9-A.M\tRS.8000/=" << endl;
				cout << "FLIGHT 2:\t 15-6-2022\t 6-P.M\tRS.10000/=" << endl;
				cout << "FLIGHT 3:\t 15-6-2022\t 10-P.M\tRS.12000/=" << endl;
				
				cout << "SELECT THE FLIGHT YOU WANT TO BOOK" << endl;
				cin >> choice2;
				cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;

			    if(choice2==1)
			    {
		    	charges = 8000*numOfTickets;
			   	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 1" << endl;
				}
				else if(choice2==2)
				{
					charges = 10000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 2" << endl;
				}
				else if(choice2==3)
				{
					charges = 12000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 3" << endl;
				}
				else
				{
					cout << "INVALID CHOICE: ";
				}
				break;
			}
				 
			case 5:
			    {
			    cout << "_________________ WELCOME TO CANADIAN EMIRATES __________________" << endl;
				cout << endl << "FOLLOWING IS THE SCHEDULE OF FLIGHTS\n" << endl;
				cout << "\nFLIGHT 1:\t 12-6-2022\t 6-A.M\tRS.7000/=" << endl;
				cout << "FLIGHT 2:\t 12-6-2022\t 2-P.M\tRS.8000/=" << endl;
				cout << "FLIGHT 3:\t 13-6-2022\t 9-P.M\tRS.10000/=" << endl;
					
				cout << "SELECT THE FLIGHT YOU WANT TO BOOK" << endl;
				cin >> choice2;
       		    cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;
					
			    if(choice2==1)
			    {
			    	charges = 8000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 1" << endl;
				}
				else if(choice2==2)
				{
					charges = 10000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 2" << endl;
				}
				else if(choice2==3)
				{
					charges = 12000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE FLIGHT 3" << endl;
				}
				else
				{
					cout << "INVALID CHOICE: ";
				}
				break;
			}
			
			default :
			{
			    cout << "INVALID CHOICE: ";	
	        }		
		}
	}
	
	void Bill()
	{
		int choice;
		
		if(getTicketType()=="PREMIUM")
		{
			tax=0.10*charges;
			
			if(c.get_age()<12)
			{
				charges = charges*0.5;
				bill = charges + tax;
			}
			else
			{
				bill = charges + tax;
			}
		}
		else if(getTicketType()=="ECONOMY")
		{
			tax=0.04*charges;
			
			if(c.get_age()<12)
			{
				charges = charges*0.5;
				bill = charges + tax;
			}
			else
			{
				bill = charges + tax;
			}
		}
		
		else
		{
			cout << "INVALID CHOICE: " << endl;
		}
	}
	
	double cancelBooking()
    {
    	bill = bill/2;
    	return bill;
	}
	void getDetails()
	{
		if(choice1==1)
		{
			if(choice2==1)
			{
				cout << "\nDESTINATION: " << Flight[0] << endl;
				cout << "DATE: 08-6-2022" << endl;
				cout << "TIME: 9-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==2)
			{
				cout << "\nDESTINATION: " << Flight[0] << endl;
				cout << "DATE: 09-6-2022" << endl;
				cout << "TIME: 6-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "\nDESTINATION: " << Flight[0] << endl;
				cout << "DATE: 10-6-2022" << endl;
				cout << "TIME: 10-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}
		
		if(choice1==2)
		{
			if(choice2==1)
			{
				cout << "\nDESTINATION: " << Flight[1] << endl;
				cout << "DATE: 11-6-2022" << endl;
				cout << "TIME: 2-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==2)
			{
				cout << "\nDESTINATION: " << Flight[1] << endl;
				cout << "DATE: 12-6-2022" << endl;
				cout << "TIME: 4-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "\nDESTINATION: " << Flight[1] << endl;
				cout << "DATE: 13-6-2022" << endl;
				cout << "TIME: 9-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}
		
		if(choice1==3)
		{
			if(choice2==1)
			{
				cout << "\nDESTINATION: " << Flight[2] << endl;
				cout << "DATE: 11-6-2022" << endl;
				cout << "TIME: 12-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
			    if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==2)
			{
				cout << "\nDESTINATION: " << Flight[2] << endl;
				cout << "DATE: 12-6-2022" << endl;
				cout << "TIME: 3-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "\nDESTINATION: " << Flight[2] << endl;
				cout << "DATE: 13-6-2022" << endl;
				cout << "TIME: 7-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}
		
		if(choice1==4)
		{
			if(choice2==1)
			{
				cout << "\nDESTINATION: " << Flight[3] << endl;
				cout << "DATE: 14-6-2022" << endl;
				cout << "TIME: 6-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
			    cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==2)
			{
				cout << "\nDESTINATION: " << Flight[3] << endl;
				cout << "DATE: 15-6-2022" << endl;
				cout << "TIME: 6-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "\nDESTINATION: " << Flight[3] << endl;
				cout << "DATE: 15-6-2022" << endl;
				cout << "TIME: 10-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}
		
		if(choice1==5)
		{
			if(choice2==1)
			{
				cout << "\nDESTINATION: " << Flight[4] << endl;
				cout << "DATE: 12-6-2022" << endl;
				cout << "TIME: 6-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==2)
			{
				cout << "\nDESTINATION: " << Flight[4] << endl;
				cout << "DATE: 12-6-2022" << endl;
				cout << "TIME: 2-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "\nDESTINATION: " << Flight[4] << endl;
				cout << "DATE: 13-6-2022" << endl;
				cout << "TIME: 9-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}
	}
	~AirlineTravelAgency()
	{
		
	}
};

class RailwayTravelAgency : public TravelAgency
{	
    string TicketType;  
    string stations[4] = {"LAHORE","PESHAWAR","ISLAMABAD","QUETTA"};
    int choice1,choice2;
    int numOfTickets;
    double charges;
    double tax;
    double bill; 
    string refund;
    string pass;
    Customer c;

    public:
    	
    RailwayTravelAgency()
	{
		
	}
	
	RailwayTravelAgency(string TicketType)
	{
		this->TicketType=TicketType;
	}	
    	
    void setTicketType(string TicktTyp)
	{
		TicketType=TicktTyp;
	}
	string getTicketType()
	{
		return TicketType;
	}	
	
	void registration()
	{
		cout << "\n\n******************* WELCOME TO THE RAILWAY ***********************\n" << endl;
    	cout << "SELECT THE NUMBER OF THE CITY OF WHICH YOU WANT TO BOOK THE TRAIN" << endl;
    	
    	for(int i=0; i<4 ; i++)
    	{
    		cout << (i+1) << ". TRAIN TO " << stations[i] << endl;
		}
		
		cin >> choice1;
		
		switch(choice1)
		{
			case 1:
			{
				cout << "\n_________________ WELCOME TO LAHORE RAILWAY __________________\n\n" << endl;
				cout << endl << "FOLLOWING IS THE SCHEDULE OF TRAIN" << endl;
				cout << "\nTRAIN 1:\t 26-05-2022\t 7-A.M\tRS.4000/=" << endl;
				cout << "TRAIN 2:\t 27-6-2022\t 4-P.M\tRS.6000/=" << endl;
				cout << "TRAIN 3:\t 27-6-2022\t 12-P.M\tRS.8000/=" << endl;
		
				cout << "\nSELECT THE TRAIN YOU WANT TO BOOK" << endl;
				cin >> choice2;
				cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;
			
			    if(choice2==1)
		        {
			    	charges = 4000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 1" << endl;
				}
				else if(choice2==2)
				{
					charges = 6000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 2" << endl;
				}
				else if(choice2==3)
				{
					charges = 8000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 3" << endl;
			    }
				else
			    {
		     		cout << "INVALID CHOICE: ";
				}
				break;
			}
				
		    case 2: 
			{
				cout << "\n_________________ WELCOME TO PESHAWAR RAILWAY __________________\n" << endl;
				cout << endl << "FOLLOWING IS THE SCHEDULE OF TRAIN\n" << endl;
				cout << "\nTRAIN 1:\t 11-6-2022\t 2-A.M\tRS.3000/=" << endl;
				cout << "TRAIN 2:\t 12-6-2022\t 4-P.M\tRS.3700/=" << endl;
				cout << "TRAIN 3:\t 13-6-2022\t 9-P.M\tRS.4500/=" << endl;
				
				cout << "SELECT THE TRAIN YOU WANT TO BOOK" << endl;
				cin >> choice2;
				cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;
				
			    if(choice2==1)
			    {
			    	charges = 3000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 1" << endl;
				}
				else if(choice2==2)
				{
					charges = 3700*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 2" << endl;
				}
				else if(choice2==3)
				{
					charges = 4500*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 3" << endl;
				}
				else
				{
					cout << "INVALID CHOICE: ";
				}
				break;
			}
				
		    case 3:
			{
				cout << "_________________ WELCOME TO ISLAMABAD RAILWAY __________________" << endl;
				cout << endl << "FOLLOWIND IS THE SCHEDULE OF TRAIN\n" << endl;
				cout << "TRAIN 1:\t 16-6-2022\t 5-A.M\tRS.5000/=" << endl;
				cout << "TRAIN 2:\t 19-6-2022\t 3-P.M\tRS.9000/=" << endl;
		     	cout << "TRAIN 3:\t 21-6-2022\t 9-P.M\tRS.9600/=" << endl;
				
				cout << "SELECT THE TRAIN YOU WANT TO BOOK" << endl;
		     	cin >> choice2;
				cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;
				
			    if(choice2==1)
			    {
			    	charges = 5000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 1" << endl;
				}
		     	else if(choice2==2)
			    {
					charges = 9000*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 2" << endl;
				}
				else if(choice2==3)
			    {
					charges = 9600*numOfTickets;
		         	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 3" << endl;
				}
				else
				{
					cout << "INVALID CHOICE: ";
				}
				break;
			}
				
		    case 4:
		    {
			    cout << "_________________ WELCOME TO QUETTA RAILWAY __________________" << endl;
				cout << endl << "FOLLOWING IS THE SCHEDULE OF TRAIN\n" << endl;
				cout << "TRAIN 1:\t 23-5-2022\t 8-A.M\tRS.3000/=" << endl;
				cout << "TRAIN 2:\t 24-5-2022\t 4-P.M\tRS.3500/=" << endl;
				cout << "TRAIN 3:\t 24-5-2022\t 11-P.M\tRS.4200/=" << endl;
				
				cout << "SELECT THE TRAIN YOU WANT TO BOOK" << endl;
				cin >> choice2;
				cout << "ENTER THE NUMBER OF TICKETS YOU WANT" << endl;
				cin >> numOfTickets;

			    if(choice2==1)
			    {
		    	charges = 3000*numOfTickets;
			   	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 1" << endl;
				}
				else if(choice2==2)
				{
					charges = 3500*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 2" << endl;
				}
				else if(choice2==3)
				{
					charges = 4200*numOfTickets;
			    	cout << "YOU HAVE SUCCESSFULLY BOOKED THE TRAIN 3" << endl;
				}
				else
				{
					cout << "INVALID CHOICE: ";
				}
				break;
			}
			default :
			{
			    cout << "INVALID CHOICE: ";	
	        }		
		}	
	} 
    	
    void Bill()
	{
		int choice;
		
		if(getTicketType()=="PREMIUM")
		{
			tax=0.08*charges;
			
			if(c.get_age()<12)
			{
				charges = charges*0.5;
				bill = charges + tax;
			}
			else
			{
				bill = charges + tax;
			}
		}
		else if(getTicketType()=="ECONOMY")
		{
			tax=0.03*charges;
			
			if(c.get_age()<12)
			{
				charges = charges*0.5;
				bill = charges + tax;
			}
			else
			{
				bill = charges + tax;
			}
		}
		
		else
		{
			cout << "INVALID CHOICE: " << endl;
		}
	}
	double cancelBooking()
    {
    	bill = bill/2;
    	return bill;
	}	
	
	void getDetails()
	{
			if(choice1==1)
		{
			if(choice2==1)
			{
				cout << "DESTINATION: " << stations[0] << endl;
				cout << "DATE: 26-5-2022" << endl;
				cout << "TIME: 7-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
			}
			else if(choice2==2)
			{
				cout << "DESTINATION: " << stations[0] << endl;
				cout << "DATE: 27-5-2022" << endl;
				cout << "TIME: 4-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "DESTINATION: " << stations[0] << endl;
				cout << "DATE: 27-5-2022" << endl;
				cout << "TIME: 12-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}
		
		if(choice1==2)
		{
			if(choice2==1)
			{
				cout << "DESTINATION: " << stations[1] << endl;
				cout << "DATE: 11-6-2022" << endl;
				cout << "TIME: 2-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
			if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==2)
			{
				cout << "DESTINATION: " << stations[1] << endl;
				cout << "DATE: 12-6-2022" << endl;
				cout << "TIME: 4-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "DESTINATION: " << stations[1] << endl;
				cout << "DATE: 13-6-2022" << endl;
				cout << "TIME: 9-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}
		
		if(choice1==3)
		{
			if(choice2==1)
			{
				cout << "DESTINATION: " << stations[2] << endl;
				cout << "DATE: 16-5-2022" << endl;
				cout << "TIME: 5-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==2)
			{
				cout << "DESTINATION: " << stations[2] << endl;
				cout << "DATE: 19-5-2022" << endl;
				cout << "TIME: 3-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "DESTINATION: " << stations[2] << endl;
				cout << "DATE: 21-5-2022" << endl;
				cout << "TIME: 9-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}
		
		if(choice1==4)
		{
			if(choice2==1)
			{
				cout << "DESTINATION: " << stations[3] << endl;
				cout << "DATE: 23-5-2022" << endl;
				cout << "TIME: 8-A.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill <<endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==2)
			{
				cout << "DESTINATION: " << stations[3] << endl;
				cout << "DATE: 24-5-2022" << endl;
				cout << "TIME: 4-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
			if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
			else if(choice2==3)
			{
				cout << "DESTINATION: " << stations[3] << endl;
				cout << "DATE: 24-5-2022" << endl;
				cout << "TIME: 11-P.M" << endl;
				cout << "NUMBER OF TICKETS: " << numOfTickets << endl;
				cout << "CHARGES: " << charges << endl;
				cout << "TAX: " << tax << endl;
				cout << "TOTAL BILL: " << bill << endl;
				cout << "\n\nIF YOU WANT TO CANCEL ORDER THEN HALF PRICE WILL BE REFUNDED\nPRESS Y or y FOR YES\nPRESS ANY KEY FOR CONTINUE\n";
				cin >> refund;
				
				if(refund=="Y" || refund=="y")
				{
					cout << "\n**************** CONFIRMING CUSTOMER *****************\n";
					cout << "ENTER YOUR PASSWORD: ";
					cin >> pass;
					
					if(c.get_password()==pass)
					{
						cout << "\nCUSTOMER MATCHED";
						cout << "\nHALF BILL REFUNDED! ";
				        cout << "\nREFUND = " << cancelBooking();
					}
					else
					{
						cout << "CUSTOMER NOT MATCHED!";
					}
				}
				else
				{
					cout << "\n***************** THANK YOU ********************";
				}
			}
		}	
	}
	~RailwayTravelAgency()
	{
		
	}
};

int main()
{
	string ans,name,Ttype,id,pass;
	int age,choice1,choice2;
	
	cout << "ENTER YOUR NAME: ";
	cin >> name;
	cout << "ENTER YOUR AGE: ";
	cin >> age;
	cout << "ENTER THE CUSTOMER ID: ";
	cin >> id;
	cout << "ENTER YOUR PASSWORD: ";
	cin >> pass;
	
    Customer c;
    
    c.set_name(name);
    c.set_age(age);
    c.set_CusID(id);
    c.set_password(pass);
    
    TravelAgency *T;
    
	do
    {
    cout << "\n================= WELCOME TO TRAVLE AGECNY ===================\n";	
    cout << "\nWHAT KIND OF TOUR DO YOU WANT: " << endl;
    cout << "1.OUT OF COUNTRY\n2.OUT OF CITY: " << endl;
    cin >> choice1;
    
       if(choice1==1)
       {
	    AirlineTravelAgency a;
        T = &a;
    
	    cout << "WHICH TYPE OF TICKET DO YOU WANT: " << endl;
	    cout << "1.PREMIUM\n2.ECONOMY" << endl;
		cin >> choice2;
        
		if(choice2==1)
		{
			Ttype="PREMIUM";
		}
		else if(choice2==2)
		{
			Ttype="ECONOMY";
		}
			
        T->registration();
        a.setTicketType(Ttype);
        T->Bill();
        cout << "\nCUSTOMER NAME: " << c.get_name();
        cout << "\nCUSTOMER ID: " << c.get_CusID();
        cout << "\nCUSTOMER AGE: " << c.get_age() << endl;
        T->getDetails();
        }
		else if (choice1==2)
		{
		RailwayTravelAgency r;
        T = &r;
    
	    cout << "WHICH TYPE OF TICKET DO YOU WANT: " << endl;
	    cout << "1.PREMIUM\n2.ECONOMY" << endl;
		cin >> choice2;
        
		if(choice2==1)
		{
			Ttype="PREMIUM";
		}
		else if(choice2==2)
		{
			Ttype="ECONOMY";
		}
			
        T->registration();
        r.setTicketType(Ttype);
        T->Bill();
        cout << "\nCUSTOMER NAME: " << c.get_name();
        cout << "\nCUSTOMER ID: " << c.get_CusID();
        cout << "\nCUSTOMER AGE: " << c.get_age() << endl;
        T->getDetails();
		}
        
        cout << "\n\nDO YOU WANT TO BUY MORE TICKETS\nPRESS ANY KEY TO CONTINUE\nPRESS e TO EXIT\n";
        cin >> ans;
    }while(ans!="e");
}
