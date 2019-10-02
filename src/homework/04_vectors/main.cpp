#include<vector>
#include "vectors.h"
#include<iostream>

using std::cout;
using std::cin;

/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	vector<int> sample_vec = { 8, 4, 20, 88, 66, 99 };
	auto user_choice = 'y';
	int choice;
	int number;
	vector<int> vec_result;


	do
	{

		cout << "Enter 1 to get max from vector, 2 to get primes, anything to quit: ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "The max from vector is " << get_max_from_vector(sample_vec);
		}
		else if (choice==2)
		{
			cout << "Enter a positive integer: ";
			cin >> number;
			vec_result = vector_of_primes(number);
			cout << "The prime numbers less than or equal to the number you entered are ";
			for (auto num : vec_result)
			{
				cout << num << " ";
			}
		}
		cout << "\nContinue y or n: ";
		cin >> user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
	
	cout << "Goodbye"; 
	return 0;
}