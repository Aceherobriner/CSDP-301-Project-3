//Name: Israel Showell
//Date Created: 10/28/2022
//Project Name: Assembly Adder Function
//Project Desc: This program asks the user to input 3 integer values, and then it 
//will add them together using an assembly function, and a C++ function.
//This file contains the C++ code.



#include <iostream>
#include <stdlib.h>
using namespace std;
extern "C" int AdderAsm(int a, int b, int c);


int AdderCPP(int a, int b, int c) {
	return a + b + c;
}

int main()	{
	int a = 1, b = 2, c = 3;
	int sum = 0;
	int sum2 = 0;
	cout << "Please input 3 values so I can find the sum: " << endl;
	cout << "1st Value: ";
	cin >> a;
	cout << "2nd Value: ";
	cin >> b;
	cout << "3rd Value: ";
	cin >> c;

	sum = AdderAsm(a, b, c);
	printf("I'll call the assembly function to find the sum.\n");
	printf("The sum is equal to: %d \n", sum);

	sum2 = AdderCPP(a, b, c);
	printf("\nI'll call the C++ function to find the sum.\n");
	printf("The sum is equal to: %d \n", sum2);
	system("PAUSE");
}