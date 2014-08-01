#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
	/***********************

	PROBLEM ONE - sum of all multiples of 3 or 5 under 1000

	************************
	//answer = 233168
	int sumOfAllThrees = 0;
	int sumOfAllFives = 0;
	int threeSum = 0;
	int fiveSum = 0;
	int totalSum = 0;

	for (int ct = 0; ct < 334; ct ++)
	{
		threeSum = ct * 3;
		sumOfAllThrees += threeSum;
		//cout << sumOfAllThrees << endl;
	}

	for (int ct = 0; ct < 200; ct ++)
	{
		fiveSum = ct * 5;

		if (fiveSum % 3 == 0)
		{
			fiveSum = 0;
		}

		else
			sumOfAllFives += fiveSum;
	}

	cout << endl << endl << "Problem #1 = " << (totalSum = sumOfAllFives + sumOfAllThrees) << endl << endl;*/

	/***********************

	PROBLEM TWO - sum of even fibonacci numbers under 4 million

	************************
	int num1 = 1;
	int num2 = 2;
	int num3 = 0;
	int totalSum = 2;
	
	//num3 = num1 + num2;

	for (int ct = 0; num3 < 4000000; ct ++)
	{
		num3 = num1 + num2;
	
		if (num3 % 2 == 0)
			totalSum += num3;
		
		cout << totalSum << endl;
		
		num1 = num2;
		num2 = num3;
	}

	cout << endl << "Problem #2 = " << totalSum << endl << endl;
	*/

	/***********************

	PROBLEM THREE - largest prime factor of 600851475143

	************************/
	/*answer 6857
	long double primeFactor = 59569;

	cout << "The factors of " << primeFactor << " are: " << endl;
	for (int ct = 1; ct < 59569	; ct ++)
	{
		if (fmod(primeFactor, ct) == 0)
		{
			cout << ct << endl;		
		}
	}*/

	/***********************

	PROBLEM FOUR - Largest palindrome from product of 2 3-digit numbers

	************************/


	/***********************

	Unit 1 exercises - arrays

	************************/
	/*
	double array1[5];
	double arraySum = 0;
	double arrayElement = 0;

	//test
	for (int ct = 0; ct < 5; ct ++)
	{
		array1[ct] = arrayElement;
		cout << "Element " << ct << "= " << arrayElement << endl;
		arrayElement ++;
	}
	
	for (int ct = 0; ct < 5; ct ++)
		arraySum += array1[ct];
	
	cout << arraySum << endl;

	double enterNum;

	cout << "Pick a number to see if it is in the array: ";
	cin >> enterNum;

	int count = 0;
	while (count < 5)
	{
		if (enterNum != array1[count])
			count ++;

		else
		{
			cout << "That number is in the array" << endl;
			break;
		}
	
		if (count == 4 && enterNum != array1[count])
			cout << "This number is not in the array" << endl;
	}*/

	/***********************

	PROBLEM FIVE - Smallest number evenly divisible by every number in 1 - 20

	************************/
	/*
	int firstNum = 2520;
	int divideBy = 1;
	int control = 0;

	while (divideBy < 21)
	{
		if ((firstNum % divideBy) == 0)
		{
			divideBy ++;
		
		if (divideBy == 20 && (firstNum % divideBy) == 0)
			{
				cout << firstNum <<endl;
				break;
			}
		}

		if ((firstNum % divideBy) != 0)
		{
			firstNum ++;
			control = 1;
			divideBy = 1;
		}
	}*/

	/***********************

	PROBLEM SIX - Sum Square Difference of the first 100 natural numbers

	************************/

	double sumOfSquares = 0;
	double squareOfSums = 0;
	double difference = 0;
	int square = 0;

	for (int ct = 0; ct < 101; ct ++)
		sumOfSquares += pow(ct, (double)2);

	cout << sumOfSquares << endl;

	for (int ct = 0; ct < 101; ct ++)
	{
		square += ct;
	}

	cout << square << endl;
	squareOfSums = pow (square, (double)2);
	cout << fixed;
	cout << squareOfSums << endl;

	difference = squareOfSums - sumOfSquares;
	cout << difference << endl;

	/***********************

	PROBLEM SEVEN - Sum Square Difference of the first 100 natural numbers

	************************/

	system ("pause");
	return 0;

}