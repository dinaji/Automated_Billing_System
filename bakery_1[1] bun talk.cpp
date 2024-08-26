#include<iostream>
#include<fstream>
#include<sstream>
#include<conio.h> 
#include<iomanip> 
#include <cstdlib>
#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void buy_food();
void mainmenu();
void pass();


int main(int argc, char** argv) {
  system("color  C1");
	mainmenu();
return 0;	
}
void mainmenu()
{

	cout << "\n\n\n\n" <<endl;

	cout << "                                                                                                                          " <<endl;
	cout << "     ||||||||   ||        ||  |||          ||        ||||||||||||||       ||           ||            ||      ||           " <<endl;
	cout << "     ||     ||  ||        ||  || ||        ||              ||           ||  ||         ||            ||    ||             " <<endl;
	cout << "     ||     ||  ||        ||  ||   ||      ||              ||          ||    ||        ||            ||  ||               " <<endl;
	cout << "     ||     ||  ||        ||  ||    ||     ||              ||         ||      ||       ||            ||||                 " <<endl;
	cout << "     ||||||||   ||        ||  ||     ||    ||              ||        ||        ||      ||            ||  ||               " <<endl;
	cout << "     ||     ||  ||        ||  ||      ||   ||              ||       ||||||||||||||     ||            ||    ||             " <<endl;
	cout << "     ||     ||  ||        ||  ||       ||  ||              ||      ||            ||    ||            ||     ||            " <<endl;
	cout << "     ||     ||  ||        ||  ||        || ||              ||     ||              ||   ||            ||       ||          " <<endl;
	cout << "     ||||||||    ||||||||||   ||          |||              ||    ||                ||  ||||||||||||| ||        ||         " <<endl;
	cout << "                                                 Loading....                                                           \n\n"<<endl;                                                      
		cout << "   version 1.1"<<endl;
	int a;
	for(a=0; a<1000000000; a++)
	{
		cout << "";
}    //user login
					system("cls");
			login:{
				
				
				//user name and password
				cout<<"please  enter your user name And Password to continue..."<<"\n"<<"\n";
				cout<<setw(25)<<"Username :";
				string user;
				cin>>user;
			
						cout<<"\n";
						string pass ="";
						char ch;
						cout<<setw(26)<< "password : ";
						ch = _getch();
						while(ch !=13)
						{
							pass.push_back(ch);
							cout << '*';
							ch = _getch();
						}
						
							if (pass=="dinaji"&&user=="dinaji")
							{ 
							goto main_menu;
							
							}else{
								cout<< "invalid User Name or Password";
								system("cls");
								cout<< "\n "<<"            **invalid User Name or Password**"<<endl;
								goto login;
							}
							
								
	}
	system("cls");
{
	   cout<< "Hi, Welcome to BUN TALK Restaurant"<<endl;
                         
	
}
            
main_menu:
	system("cls");	

                        
                         
                cout<< "Hi, Welcome to BUN TALK Restaurant"<<endl;
                
         
		cout << "\n\n"<<endl;
		cout << "       ____________________          "<<endl;
		cout << "      |                    |         "<<endl;
		cout << "      | Customer Service   |         "<<endl;
		cout << "      |____________________|         "<<endl;
		cout << "             Press 1                 "<<endl;
		cout << "       _____________________         "<<endl;
	    cout << "      *                     *        "<<endl;
        cout << "      *   Manager service   *        "<<endl;
        cout << "      *_____________________*        "<<endl;
        cout << "             Press 2                 "<<endl;
        cout << "       _____________________         "<<endl;
        cout << "       *                    *        "<<endl;
        cout << "       * company details    *        "<<endl;
        cout << "       *____________________*        "<<endl;
        cout << "             Press 3                 "<<endl;
		cout << "       ____________________     "     <<endl;
		cout << "      |                    |   "      <<endl;
		cout << "      |        Exit        |   "      <<endl;
		cout << "      |____________________|   "      <<endl;
		cout << "             Press 4  \n\n"           <<endl;
		char button1;
		cout << "Press Your Choice : ";
		cin >> button1;
		
		switch(button1)
		{
			//customer-----------------------------------------------------------------------------------------------------------------------------------
			case'1':

				customer_service:	
				system("cls");
					cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
			   	 	cout <<setw(70)<< "Customer Service"<< endl;
			 		cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
					cout << "            1 .Price List "<<endl;
					cout << "            2 .buy food "<<endl;
					cout << "            3 .Help  "<<endl;
					cout << "            4 .Goto back  "<<endl;
					cout << "            5 .Exit  \n\n"<<endl;
					
					char button2;
					cout << " ~~Select Option~~  ";
					cin>> button2;
					system("cls");
				
				switch(button2)//customer servis
				{
					case'1': //price list
					 goto price_list;
						break;
					
					case'2'://buy food
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  						cout <<setw(70)<< "Buy  food"<<endl;
 						cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
						cout<<"####  QUICK  HELPER ####\n"<<endl;
						cout<<" * Fist Enter Your Name"<<endl;									
						cout<<" * Secondly, Enter The Number of food You Want\n "<<endl;     
						cout<<" * thirdly, Enter The Amount you want\n "<<endl;   
						cout<<" * IF You Stop The Ur Transact, Press 0\n"<<endl;                
      
						system("pause");
						system("cls");
						buy_food();
						break;
						
					case'3':// customer help
					
						system("cls");
						cout<<"\n\n#### HELP Customer ####\n"<<endl;
						cout<<"  1 How to get the price list\n "<<endl;
						cout<<"\t* select price list and you can see price list\n\n"<<endl;
						cout<<"  2 How to buy food \n "<<endl;								
						cout<<"\t*Fist Enter Your Name"<<endl;									
						cout<<"\t* Secondly, Enter The Number of food You Want\n "<<endl;       
						cout<<"\t* thirdly, Enter The Amount you want\n "<<endl;
						cout<<"\t*Enter 0 after the end of the purchase\n"<<endl;
						system("pause");
						system("cls");
						goto customer_service;
						
						break;
					
					case'4'://goto back
						goto main_menu;
						
					case'5'://exit
						exit (0);
												
					default :
						system("cls");
						goto customer_service;
				}
				break;

			//manager login-------------------------------------------------------------------------------------------------------------------------------------	
			case'2':
				system("cls");
			managerlogin:{
				
				
				//user name and password
				cout<<"please  enter your user name And Password to continue..."<<"\n"<<"\n";
				cout<<setw(25)<<"Username :";
				string user;
				cin>>user;
			
						cout<<"\n";
						string pass ="";
						char ch;
						cout<<setw(26)<< "password : ";
						ch = _getch();
						while(ch !=13)
						{
							pass.push_back(ch);
							cout << '*';
							ch = _getch();
						}
						
							if (pass=="dinaji"&&user=="dinaji")
							{ 
							goto manager_service;
							
							}else{
								cout<< "invalid User Name or Password";
								system("cls");
								cout<< "\n "<<"            **invalid User Name or Password**"<<endl;
								goto login;
							}
							
							
							
		   			}
		   			break;
		   	//---------------------------------------------------------------------------------------------------------------------------------------
		   	
		   	
		   	
		   	
			   //company details		
			case'3':
				system("cls");
				cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  						cout <<setw(70)<< "Company Details"<<endl;
 						cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
						cout<<"\tCompany name    : bun talk\n"<<endl;
						cout<<"\tOwner           : Mrs.Dinaji imesha\n"<<endl;
						cout<<"\tEmail           : bun.talk123@gmail.com\n"<<endl;
						cout<<"\tContact Number  : 032-5683713\n"<<endl;
						cout<<"\tFax Number      : 032-5554698\n"<<endl;
						cout<<"\tAdress          : bun talk, \n\t\t\t  Puttalam Road, \n\t\t\t  kurunegala.\n\n"<<endl;


				
				system("pause");
				system("cls");
				goto main_menu;
				break;



			case'4':
				system("cls");
					exit(0);
			default :
				system("cls");
				goto main_menu;
				break;
		}
		
		
manager_service:
system("cls");
								//manager inter face
								cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
						   	 	cout <<setw(70)<< "Manager Service"<< endl;
						 		cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
								cout << "            1 .Update foods "<<endl;
								cout << "            2 .Employee Salary "<<endl;
								cout << "            3 .Add Employee "<<endl;
								cout << "            4 .Sales Details "<<endl;
								cout << "            5 .Help  "<<endl;
								cout << "            6 .Goto back  "<<endl;
								cout << "            7 .Exit  \n\n"<<endl;
								
								char button3;
								cout << " ~~Select Option~~  ";
								cin>> button3;
								
								switch(button3)
								{
								case'1': //update food
								system("cls");
								goto update_food;
								break;
						
								case'2'://employee salary
								goto salary;
								break;
								
								case'3'://employee 
								goto employee;
								break;
								
								case'4'://Sales Details
								 goto sales_details;
								break;
								
								case'5'://help
								
														system("cls");
														cout<<"\n\n#### HELP Manager ####\n"<<endl;
														cout<<"  1 How to Update food List\n "<<endl;
														cout<<"\t* Goto Update food"<<endl;
														cout<<"\t* Fist Enter Amount of food Update"<<endl;
														cout<<"\t* Enter New food "<<endl;
														cout<<"\t* Enter food Price\n\n"<<endl;
														
														cout<<"  2 How Check Employee Salary \n "<<endl;								
														cout<<"\t*Goto Employee Salary\n\n"<<endl;									
											
														
														cout<<"  1 How to Update food List\n "<<endl;
														cout<<"\t* Goto Update food"<<endl;
														cout<<"\t* Fist Enter Amount of Employee"<<endl;
														cout<<"\t* Secondly, Enter Your Name "<<endl;
														cout<<"\t* Thirdly, Other Details\n\n"<<endl;
														
														
														system("pause");
														system("cls");
														goto manager_service;
								
														break;
								
								case'6'://goto back
								goto main_menu;
								break;
						
								case'7'://exit
								system("cls");
								exit(0);
								
								default:
									goto manager_service;
								
								}



employee:
	system("cls");
{
	
		struct employee
	{
		string name;
		string emp_no;
		double basic_salary;
		int ot_hour;
		int leave_day;
		double ingriment;
		double  net_salary1 ;
		double net_salary2;
		double epfemp;
		double epfcom ;
		double epf;
		double gross_salary2;
		double bank;
		double ot_rate;
	};
	
		cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
   	 	cout <<setw(70)<< "Details of Employees"<< endl;
 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
 	
	int p,o;
	
	cout <<setw(40)<< "First Enter The Number OF Employee Needed    : "; 
	cin >> o ;
	
	
	employee emp[o];
	
	for  (p=0; p<o ;p++){

	cout << "\n   ~~~ Enter details of " << p+1 << " Employee ~~~"<<endl;
	
	
	cout <<setw(30)<< "Enter Your Name    : "; 
	cin >> emp[p].name ;
	
	cout <<setw(30) << "Input Employee No  : "; 
	cin >> emp[p].emp_no;                                
	
	cout <<setw(30) << "input Basic Salari : "; 
	cin >> emp[p].basic_salary ;
	
	
	cout <<setw(30) << "input OT Hours     : ";
	cin >> emp[p].ot_hour ;	
	
	cout <<setw(30)<< "input Leave days   : ";
	cin >> emp[p].leave_day ;	
	
	cout <<setw(30)<< "input Ingriment    : ";
	cin >> emp[p].ingriment ; 
	cout <<setw(60) << "*Data Entered to Data Base \n" << endl;


	
	emp[p].ot_rate = emp[p].basic_salary*0.01;
	emp[p].epf = emp[p].basic_salary * 3/100;
	emp[p].epfcom = emp[p].basic_salary * 12/100;
	emp[p].epfemp = emp[p].basic_salary * 8/100;
	emp[p].net_salary1= emp[p].basic_salary+ (emp[p].ot_rate *emp[p].ot_hour);
	
	

	emp[p].net_salary2 = emp[p].net_salary1 -( emp[p].basic_salary / 30 ) *emp[p].leave_day;
		
	emp[p].gross_salary2 = emp[p].net_salary2 + emp[p].ingriment - emp[p].epfemp;
	emp[p].bank = emp[p].epf + emp[p].epfcom + emp[p].epfemp;
	
	
	ifstream file("employee.txt");
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";
		
	}
	file.close();
	

		ofstream mf;
		mf.open("employee.txt");
		mf << content;

		
	
		mf<<setw(10)<< emp[p].name <<setw(13)<<emp[p].emp_no  <<setw(20)<<emp[p].basic_salary <<setw(10)<< emp[p].ot_rate<<setw(10)<<emp[p].ot_hour<<setw(17)<<emp[p].net_salary2 <<setw(12)<<emp[p].bank<<setw(15)<<emp[p].gross_salary2<<endl;
		mf.close();
 
	}
  system("pause");
	system("cls");
	goto manager_service;
}

salary:
{
 system("cls");
	

  	cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"<<endl;
    cout <<setw(70)<< "Employees Salary" << endl;
 cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<<endl;
 
 
 cout <<setw(8)<< "Name" <<setw(20)<<"Employee Id"  <<setw(18)<<"Basic Salari"<<setw(10)<<"OT Rate"<<setw(11)<<"OT hours"<<setw(15)<<"Net salary"<<setw(9)<<"Bank"<<setw(17)<<"Gross Salry"<<"\n"<<endl;
 
	ifstream file("employee.txt");
	string content;
	string line;

	while(getline(file,line))

		 cout<<line<<"\n";
		file.close();
	 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";



		
  system("pause");
	system("cls");
	goto manager_service;
}











//update food	
	update_food:
	{
						struct food_f
									{
										string food_flavor;
										double food_price;
				
										};
				
					cout<<"\n------------------------------------------------------------------------------------------------------------------------"<< endl;
			   	 	cout <<setw(70)<< "Add Details of bakery food"<< endl;
			 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
			 	
				int j, m;

                bool v1;
                do
                {
                	
                	v1=true;
				cout <<setw(40)<< "First Enter The Number OF food Needed   : "; 
				cin >> m ;
				if (cin.fail()){
					cout<<setw(40)<<"\nWrong input, please enter again! ";
					v1=false;
					cin.clear();
					cin.ignore(80,'\n');
					
				}
	}
					while(!v1);
			food_f food[m];
				
				for  (j=0; j<m ;j++){
			
				cout << "\n   ~~~ Enter details of " << j+1 << " Flavor ~~~"<<endl;
				
				
				cout <<setw(30)<< "Emter Flavor    : "; 
				cin >> food[j].food_flavor ;
				
				cout <<setw(30) << "Input Price  : Rs"; 
				cin >> food[j].food_price;                                
			
				
				ifstream file("foodflavor.txt");
				string content;
				string line;
			
				while(getline(file,line)){
					content+=line +"\n";
					
				}
				file.close();
				
			
					ofstream mf;
					mf.open("foodflavor.txt");
					mf << content;
			
					
				
					mf<<setw(15)<< food[j].food_flavor <<setw(13)<<"Rs"<<food[j].food_price <<".00"<<endl;
					mf.close();
			}
					goto manager_service;
					
				//update flavor End
			}
//see flover list

price_list:
	{
		cout<<"\n\n"<<endl; 
 		 cout<<"------------------------------------------------------------------------------------------------------------------------\n"<< endl;
  		  cout <<setw(70)<< "Details of bakery food"<<endl;
 		cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;

 		cout <<setw(8)<< "food" <<setw(25)<<"Price (Rs)"  <<"\n"<<endl;
 	    cout <<setw(20)<< "Details of food\n"<<endl;
  		cout <<"   NO:"<<setw(15)<<"food"<<setw(14)<<"Price"<<endl;
 		cout <<setw(2)<<"   1   "<<setw(30)<<"fish bun            Rs  50.00"<<endl;
 		cout <<setw(2)<<"   2   "<<setw(30)<<"soursage  bun       Rs 150.00"<<endl;
 		cout <<setw(2)<<"   3   "<<setw(30)<<"Rolls bun           Rs 100.00"<<endl;
 		cout <<setw(2)<<"   4   "<<setw(30)<<"rice and curry      Rs 300.00"<<endl;
 		cout <<setw(2)<<"   5   "<<setw(30)<<" tea bun            Rs  80.00"<<endl;
 		
 
	
			ifstream file("bun.txt");
			string content;
			string line;
		
			while(getline(file,line))
			
		
				 cout<<line<<"\n";
				file.close();
			 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";
			

     			system("pause");
     			
				system("cls");
				goto customer_service;
	}


sales_details: //Sales Details
{
	system("cls");
	cout<<"\n"<<endl; 
  cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;
    cout <<setw(70)<< "Details of Sales"<<endl;
 cout<<"------------------------------------------------------------------------------------------------------------------------\n\n"<< endl;
 

 
 

 cout <<setw(13)<< "Name" <<setw(25)<<"food"  <<setw(15)<<"Price"<<setw(12)<<"Amoun"<<setw(15)<<"Net Total"<<setw(10)<<"Total"<<"\n"<<endl;
 
	
 
	
	ifstream file("customerdata.txt");
	string content;
	string line;

	while(getline(file,line))
	

		 cout<<line<<"\n";
		file.close();
	 cout<<"\n------------------------------------------------------------------------------------------------------------------------\n\n";
	 
	 system("pause");
	 system("cls");
	 goto manager_service;
}

	//see flavor list end
	exit(0);                                                                                      
}          

void buy_food() //buy food
{


		cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
  		cout <<setw(70)<< "Buy bakery food"<<endl;
 		cout<<"------------------------------------------------------------------------------------------------------------------------"<< endl;

		
  		cout <<setw(20)<< "Details of food\n"<<endl;
  		cout <<"   NO:"<<setw(15)<<"food"<<setw(14)<<"Price"<<endl;
 		cout <<setw(2)<<"   1   "<<setw(30)<<"fish bun     Rs  50.00"<<endl;
 		cout <<setw(2)<<"   2   "<<setw(30)<<"soursage  bun      Rs  150.00"<<endl;
 		cout <<setw(2)<<"   3   "<<setw(30)<<"Rolls bun      Rs  100.00"<<endl;
 		cout <<setw(2)<<"   4   "<<setw(30)<<"rice and curry      Rs 300.00"<<endl;
 		cout <<setw(2)<<"   5  "<<setw(30)<<"tea bun                Rs 80.00"<<endl;
 		
double total=0;

struct buy_food
	{
		string name;
		string flavor;
		int amount;
		double price;
		double ntotal;
	};

int i,n=100;
buy_food food[n];

string name1;
	cout <<"\n"<<setw(30)<< "Enter Your Name    : "; 
	cin >> name1 ;
	cout<<"\t\t\t\t ~~~Enter 0 after the end of the purchase~~~~"<<endl;
for  (i=0; i<n ;i++){

	
	cout <<setw(30) << "Input Type of food : "; 
	cin >>food[i].flavor; 
	
	if(food[i].flavor=="0") {goto total_salary;	}                               


	
	cout <<setw(30) << "input Amount : "; 
	cin >>food[i].amount ;
	cout<<"\n"<<endl;
	
	{
		if(food[i].flavor=="1"){
			food[i].price =50;
		}else if(food[i].flavor=="2"){
			food[i].price=150;
		}else if(food[i].flavor=="3"){
			food[i].price=100;
		}else if(food[i].flavor=="4"){
			food[i].price=300;
		}else if(food[i].flavor=="5"){
		   food[i].price=80;
		}
	}
	{
		if(food[i].flavor=="1"){
			food[i].flavor="fish bun";
		}else if(food[i].flavor=="2"){
			food[i].flavor="soursage bun";
		}else if(food[i].flavor=="3"){
			food[i].flavor="Rolls bun";
		}else if(food[i].flavor=="4"){
			food[i].flavor="rice and curry";
		}else if(food[i].flavor=="5"){
			food[i].flavor="tea bun";
		}
	}
	food[i].ntotal=food[i].price*food[i].amount;
	total=total+food[i].ntotal;
	
	


	//start file and save sale detailsa
	ifstream file("customerdata.txt"); 
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";
		
	}
	file.close();
	

		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;

		
		mf<<setw(15)<<name1;

		mf<<setw(25)<<food[i].flavor<<setw(9)<<"Rs"<<setw(3)<<food[i].price<<".00"<<setw(8)<<"x"<<food[i].amount<<setw(10)<<"Rs"<<setw(4)<<food[i].ntotal<<".00"<<endl;
		mf.close();
		//end file and save sale detailsa
		
		//start create bill
		ifstream file2("bill.txt");
	string content2;
	string line2;

	while(getline(file2,line2)){
		content2+=line2 +"\n";
		
	}
	file.close();
		ofstream mf1;
		mf1.open("bill.txt");
		mf1 << content2;	
		mf1<<setw(19)<<food[i].flavor<<setw(5)<<food[i].price<<".00"<<setw(5)<<"x"<<food[i].amount<<setw(10)<<"Rs"<<setw(4)<<food[i].ntotal<<".00"<<endl;
		mf1.close();
		
		
		
		
}

//total salary print text file
total_salary:
{	
ifstream file("customerdata.txt");
	string content;
	string line;

	while(getline(file,line)){
		content+=line +"\n";	
	}
	file.close();

		ofstream mf;
		mf.open("customerdata.txt");
		mf << content;

		mf<<setw(85)<<"___________Rs"<<setw(4)<<total<<".00\n"<<endl;
		mf.close();
		//end total salary print text file
		
}



//print bill
{
	system("cls");
cout<<"\n__________________________________________________________________________\n "<<endl;
cout<<"                                                                               "<<endl;	
cout<<"   |||||  |    | ||   |   |||||||     |      |       |  |                      "<<endl;
cout<<"   |    | |    | | |  |      |       | |     |       | |                       "<<endl;
cout<<"   |||||  |    | |  | |      |      |   |    |       ||                        "<<endl;
cout<<"   |    | |    | |   ||      |     | ||| |   |       | |                       "<<endl;
cout<<"   |||||  |||||| |    |      |    |       |  ||||||| |  |                       "<<endl;
cout<<"_______________________________________________________________________________ "<<endl;

cout<<"No:30,puttalam Road, kurunegala\n"<<endl;
cout<<"-----------------------------------------------"<<endl;
cout<<" Customer Name: "<<name1<<"\n"<<endl;

	ifstream file3("bill.txt");
	string content3;
	string line3;

	while(getline(file3,line3))
	

		 cout<<line3<<"\n";
		file3.close();

cout<<"-----------------------------------------------"<<endl;
cout<<"\t\t     Total "<<setw(17)<<"Rs "<<total<<".00"<< endl;
cout<<"-----------------------------------------------"<<endl;

cout<<"___________________________________________\n"<<endl;

		///open bill end
		

		//clear bill text file data
		std::ofstream ofs;
		ofs.open("bill.txt", std::ofstream::out | std::ofstream::trunc);
		ofs.close();
		
		system("pause");
		system("cls");

	}
	
	
	cout<<"\n\n\n\n\n\n\t\t\t\tThanks for getting our service"<<endl;
	
	
		int a;
	for(a=0; a<100000000; a++)
	{
		
		cout << "";
		
	}
	system("cls");
	mainmenu();
	exit(0);


} ;





