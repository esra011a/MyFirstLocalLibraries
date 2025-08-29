// MyLocalLibsCourse6Aug162025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "Arrays.h"
#include "Numbers.h"
#include"Generators.h"
#include"Procedures.h"
#include "Readers.h"

int main()
{
	srand((unsigned)time(NULL));

	//1. Read Number form user
	int num = Readers::ReadNumber();
	cout << "You enterd: " << num << endl;
    
	//2. Check Odd/Even
	if (Numbers::CheckOddOrEven(num) == Numbers::enOddOrEven::even)
		cout << num << " is Even\n";
	else
		cout << num << " is Odd\n";
	
	//3. Check Prime
	if (Numbers::CheckPrime(num) == Numbers::enPrimeNotPrime::Prime)
		cout << num << " is Prime\n";
	else
		cout << num << " is Not Prime\n";

	//4. Generate Random Number
	int randNum = Generators::RandomNumber(1, 100);
	cout << "Random Number: " << randNum << endl;

	//5. Array Operations
	int arr[100], length;
	Arrays::FillArrayWithRandomNumbers(arr, length);
	cout << "\n Array elements: ";
	Arrays::PrintArray(arr, length);

	cout << "Max = " << Arrays::MaxNumberInArray(arr, length)<<endl;
	cout << "Min = " << Arrays::MinNumberInArray(arr, length) << endl;
	cout << "Sum = " << Arrays::SumArrayNumbers(arr, length);
	cout << "Avg = " << Arrays::AverageArrayNumbers(arr, length);

	//6. Procedures
	int a = 5, b = 10;
	cout << "\nBefore Swap: a=" << a << " b=" << b << endl;
	Procedures::Swap(a, b);
	cout << "After Swap: a=" << a << " b=" << b << endl;

	Procedures::GameOverScreen();

	return 0;
}