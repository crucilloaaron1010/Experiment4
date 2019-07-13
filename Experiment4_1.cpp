#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
	
float addition (int x, int y)		
{
						float result; 
							result = x + y;
									return result;
}

float subtraction (int x, int y)			
{
						float result; 
							result = x - y;
									return result;
}

float multiplication (int x, int y)			
{
						float result; 
							result = x * y;
									return result;
}

float division (int x, int y)			
{
							float result; 
								result = x / y;
									return result;
}

float modulus (int x, int y)			
{
	float sum; 
	sum = x % y;
		return sum;
}

int main()
{
	int choice;
	float num1;			
	float num2;
	float z;
	char response;

	do 
	{

	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
	cout << "MENU: \n";
	cout << "	1. Add\n";
	cout << "	2. Subtract\n";
	cout << "	3. Multiply\n";
	cout << "	4. Divide\n";
	cout << "	5. Modulus\n";
	cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
	cout << "Input choice: "; cin >> choice;

	switch (choice)




	{
				case 1:		
				cout << "Input first number : "; cin >> num1;
				cout << "Input second number : "; cin >> num2;
				z = addition (num1, num2);
				cout << "Answer: " << z << endl;
				break;

				case 2:		
				cout << "Input first number  : "; cin >> num1;
				cout << "Input second number  : "; cin >> num2;
				z = subtraction (num1, num2);
				cout << "Answer: " << z << endl;
				break;

				case 3:		
				cout << "Input first number : "; cin >> num1;
				cout << "Input second number : "; cin >> num2;
				z = multiplication (num1, num2);
				cout << "Answer: " << z << endl;
				break;

				case 4:		
				cout << "Input first number : "; cin >> num1;
				cout << "Input second number : "; cin >> num2;
				z = division (num1, num2);
				cout << "Answer: " << z << endl;
				break;

				case 5:	
				cout << "Input first number : "; cin >> num1;
				cout << "Input second number : "; cin >> num2;
				z = modulus (num1, num2);
				cout << "Answer: " << z << endl;
				break;

	 default : 
				cout << "ERROR \n"; 

		getch();
		return 0;
	}

	cout << "---------------------------------\n";
	cout << "Continue? "; cin >> response;

	} 
	while (response = 'y' || response == 'Y');
	cout << "Thank you!";

	getch();
	return 0;
}

