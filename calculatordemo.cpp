//code for mimicking calculator , written by justin.m on 12/10/2021
#include<iostream>
//header file containing functions for arithmetic operations
#include"Header.h"
using namespace std;
int main()
{
	float value1, value2 , result ;
	char operatorcharacter;
	cout << "Enter the values\n";
	cin >> value1 >> value2;
	cout << "Enter the operator for the respective oeration\n";
	cout << "For addition '+'\n";
	cout << "For substraction '-'\n";
	cout << "For multiplication '*'\n";
	cout << "For division '/'\n";
	cin >> operatorcharacter;
	//identifying which operation to perform and calling respective function
	switch (operatorcharacter)
	{
	case '+':
		result = addition(value1, value2);
		break;
	case '-':
		result = substraction(value1, value2);
		break;
	case '*':
		result = multiplication(value1, value2);
		break;
	case '/':
		result = division(value1, value2);
		break;
	default:
		cout << "Invalid opeartor";
		return ;
		break;
	}

	cout << value1 << " " << operatorcharacter << " " << value2 << " " << "=" << " " << " " << result;

}