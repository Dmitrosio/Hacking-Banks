//Dmitrii Orlov
//04/03/22

#include <iostream>

using namespace std;

//declaring methods for swapping both accounts
void normalBalance(int x, int y);
void hackedBalance(int& x, int& y);


int main()
{
	//balance of the local coffee shop
	int coffeeBalance = 500;

	//balance of the terrorist organization
	int terrBalance = 5000;

	cout << "Original Balances: " << "\n\n";
	cout << "Coffee Shop's Account Balance: " << coffeeBalance << "\n";
	cout << "Terrorists' Account Balance: " << terrBalance << "\n\n\n";


	cout << "Checking Normal Balance: " << "\n\n";
	normalBalance(coffeeBalance, terrBalance);

	cout << "Coffee Shop's Account Balance: " << coffeeBalance << "\n";
	cout << "Terrorists' Account Balance: " << terrBalance << "\n\n\n";

	cout << "Checking Hacked Balance: " << "\n\n"; 

	hackedBalance(coffeeBalance, terrBalance);

	cout << "Coffee Shop's Account Balance: " << coffeeBalance << "\n";
	cout << "Terrorists' Account Balance: " << terrBalance << "\n";

	return 0;
}

//regular check, nothing happens since passing by value
void normalBalance(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

//swaping values, since passing by reference
void hackedBalance(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}