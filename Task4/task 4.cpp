#include <iostream>
using namespace std;

class ATM{
private:
	double balance;
	
public:
	ATM(){
		balance = 10000; // Initial balance
	}
	
	void checkBalance(){
		cout<<"Your current balance is: "<< balance << endl;
	}
	
	void deposit(){
		double amount;
		cout<<"Enter amount to deposit: ";
		cin>> amount;
		balance += amount;
		cout<<"Amount deposited sucessfully!"<<endl;
	}
	
	void withdraw(){
		double amount;
		cout<<"Enter amount to withdraw: ";
		cin>> amount;
		
		if(amount > balance){
			cout<<"Insufficient balance!"<<endl;
		}
		else{
			balance -= amount;
		    cout<<"Withdrwal sucessfull!"<<endl;
		}
		
	}
		
};

int main(){
	ATM atm;
	int choice;
	
	
	do{
		cout<<"\n ==== ATM MENU ==== "<<endl;
		cout<<"1. Check Balance"<<endl;
		cout<<"2. Deposit Money"<<endl;
		cout<<"3. Withdrwal Money"<<endl;
		cout<<"4. Exit"<<endl;
		
		cout<<"\nEnter your choice: ";
		cin>>choice;
		
		cout<<endl;
		
		
		switch(choice){
			case 1:
				atm.checkBalance();
				break;
			case 2:
				atm.deposit();
				break;
			case 3:
				atm.withdraw();
				break;
			case 4:
				cout<<"Thank you for using ATM! "<<endl;
				break;
			default:
				cout<<"Invalid choice!"<<endl;
		    }
		    cout<<endl;
				
		} while(choice != 4);
		
		return 0;	
}






