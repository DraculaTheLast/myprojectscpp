#include<iostream>
#include<string.h>
using namespace std;
class Acc{
	private:
	string username;
	int accno;
	float balance;
	bool acccreated;
	public:
	// These three are our setters
	Acc(){
		acccreated=false;
	}
	void setname(string name){
		username=name;
	}
	void setaccno(int accnum){
		accno=accnum;
	}
	void setbal(float bal){
		balance=bal;
	}
	// This is our getter.
	void createaccount(){
		string name;
		float bal;
		int accno;
		cout<<"Enter your name: "<<endl;
		cin.ignore();
		getline(cin, name);
		setname(name);
		cout<<"Enter the account number: "<<endl;
		cin>>accno;
		setaccno(accno);
		cout<<"Enter the amount to deposit: "<<endl;
		cin>>bal;
		setbal(bal);
		acccreated=true;
	}
	void checkbalance(){
			if(acccreated==true){
			cout<<"The total balance of "<<username<<" account number "<<accno<<" is: "<<balance<<endl;
			}
			else{
				cout<<"No account exists"<<endl;
			}
	}
	void deposit(float amount){
		if(acccreated==true){
		balance=balance+amount;
		cout<<"Deposited amount: "<<amount<<" Total balance: "<<balance<<endl;
		}
		else{
		cout<<"No account exists"<<endl;
		}
		}
	void withdraw(float amount){
	if(acccreated==true){
		if (amount>balance) {
			cout<<"Insufficient balance"<<endl;
		}
		else {
		balance=balance-amount;
		cout<<"This amount has been withdrawn sucessfully "<<amount<<" new balance is: "<<balance<<endl;
		}
		}
		else{
		cout<<"No account exists"<<endl;
		}
	}
	void showdetails(){
		if(acccreated==true){
		cout<<" Name "<<username<<" Account Number: "<<"Balance: "<<balance<<endl;
		}
		else{
			cout<<"No account exists"<<endl;
		}
	}
	void closeaccount(){
		if(acccreated==true){
	username=" ";
	accno=0;
	balance=0.0;
	cout<<"Account closed sucessfully"<<endl;
	}
	else{
	cout<<"No account exists"<<endl;
	}
	}
	};
	int main(){
		Acc A;
		int ch;
		float amount;
		do{
		cout<<"WELCOME TO THE BANKING SYSTEM"<<endl;
		cout<<"---------------------------------------------------------"<<endl;
		cout<<"Please enter the operation you want to perform"<<endl;
		cout<<"1. Create an account at our bank"<<endl;
		cout<<"2. Total balance"<<endl;
		cout<<"3. Total amount to withdraw"<<endl;
		cout<<"4. Total amount to deposit"<<endl;
		cout<<"5. show total details"<<endl;
		cout<<"6.Close the account"<<endl;
		cout<<"0. to exit"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				A.createaccount();
				break;
			case 2:
				A.checkbalance();
				break;
			case 3:
				cout<<"Enter the amount to withdraw: "<<endl;
				cin>>amount;
				A.withdraw(amount);
				break;
			case 4:
				cout<<"Enter the amount to deposit: "<<endl;
				cin>>amount;
				A.deposit(amount);
				break;
			case 5:
				A.showdetails();
				break;
			case 6:
				A.closeaccount();
				break;
			case 0:
				cout<<"Thank you for using the banking system, made by DraculaTheLast"<<endl;
				break;
			default:
				cout<<"Invalid input"<<endl;
				break; }
	} while(ch!=0);
	return 0;
	}
