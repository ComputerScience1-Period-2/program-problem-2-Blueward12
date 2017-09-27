/*Kevin Ward - Period 2 - 9/25/17
Program Problem 2
User questions to take in data and created variables to store data.*/

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std; 


void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
}
void main() {
	int games_played;
	char choice_answered;
	bool silverStatus = false;
	double cm_per_in;
	int calc_1, calc_2, calc_3, calc_4, calc_5, calc_6;

	cout << "How many games of CSGO have you played \"today\" : ";
	cin >> games_played;
	cout << "How many competitive games have you been banned from (1/2/3/4) : ";
	cin >> choice_answered;
	if (choice_answered == '3' || choice_answered == '4') {
		silverStatus = true;
	}

	cout << "How many centimeters are in an inch : ";
	cin >> cm_per_in;
	cout << "Give me 3 random whole numbers : " << "\n";
	cout << "Number 1 : "; 
	cin >> calc_1;
	cout << "Number 2 : ";
	cin >> calc_2;
	cout << "Number 3 : ";
	cin >> calc_3;





	cout << "Hey man, " << games_played << " games is not bad. \n";
	if (games_played == 1 || games_played == 2) {
		cout << "However, you can do better \n";
	}
	if (games_played == 5 || games_played == 6) {
		cout << "Pretty good, in fact! \n";
	}
	if (silverStatus) {
		cout << boolalpha << "Since that is " << silverStatus << ", you are a silver and therefore inferior. \n";
	}
	if (!silverStatus) {
		cout << boolalpha << "Since that is " << silverStatus << ", you are above the ranks of silver and deserve immense praise! \n";
	}
	cout << "So, you think that there are " << cm_per_in << " centimeters in an inch, huh? \n";

	cout << calc_1 << "+" << calc_2 << "=" << calc_1 + calc_2 << "\n";
	calc_4 = calc_2 * calc_3;
	cout << calc_2 << "*" << calc_3 << "=" << calc_4 << "\n";
	calc_5 = calc_1 / calc_2;
	cout << calc_1 << "/" << calc_2 << "=" << calc_5 << "\n";
	calc_6 = calc_1 - calc_3;
	cout << calc_1 << "-" << calc_3 << "=" << calc_6 << "\n";







	pause();
}