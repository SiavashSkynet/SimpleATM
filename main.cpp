
#include "pch.h"
#include <iostream>
#include<conio.h>
#include <chrono>
#include <ctime>    

using namespace std;

const int width {35};
const int height {35};
void setup() {
	for (int i = 0; i < width; i++) {
		cout << "#";
	}
	cout << endl;
	cout << "1.Press 1 to see your balance : \n"
		<< "2.Press 2 to withdraw from your account : \n"
		<< "3.Press 3 to deposite to the account : \n"
		<< "4.press 4 to end the proccess ! \n";
	for (int i = 0; i < width; i++) {
		cout << "#";
	}
	cout << endl;
}

enum eDeposite{towithdraw=1,toshowbalance=1,todeposite=3};
eDeposite accountAction;

int main()
{
	system("color 1e");
	// Some computation here

	double withdraw, deposite, balance;
	balance = 0;
	int input;
	bool GiveBack = false;
	while (!GiveBack) {
		for (int i = 0; i < width; i++) {
			cout << "#";
		}
		cout << endl;
		cout << "1.Press 1 to see your balance : \n"
			<< "2.Press 2 to withdraw from your account : \n"
			<< "3.Press 3 to deposite to the account : \n"
			<< "4.press 4 to end the proccess ! \n";
		for (int i = 0; i < width; i++) {
			cout << "#";
		}
		cout << endl;

		
			cin >> input; 
			//accountAction = input;
	
			system("cls");
			switch (input) {
			case 1:
				cout << "Your balance is :" << balance << endl;
				break;
			case 2:
				cout << "Please insert the amount of money you want to withdraw :" << endl;
				cin >> withdraw;
				if (withdraw <= balance) {
					balance = balance - withdraw;

				}
				else if(withdraw>balance)
				{
					cout << "---------------------->>The balance amount " << balance << "<<-----------------------;" << endl;
					cout << "Sorry The balance is not enought " << endl;
				}


				break;
			case 3:
				cout << "Please claim amount of money you want to deposite :" << endl;
				cin >> deposite;

				balance = balance + deposite;
				break;
			case 4:
				GiveBack = true;
				break;
				//default:
					//cout << "Something went wrong . Please try again ." << endl;

			}
			cout << "Please pres any keys to continue ..." << endl;

			if (_getch()) {
				system("cls");

			}
		
	}

}
