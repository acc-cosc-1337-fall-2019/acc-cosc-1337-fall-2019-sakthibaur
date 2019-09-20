//write include statements
#include"dna.h"
#include<iostream>
using std::cout; using std::cin;
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto user_choice = 'y';
	string dna = "";
	int prog_choice = 0;
	do
	{
		cout << "Enter 1 to Get GC Content or 2 for DNA Complement: ";
		cin >> prog_choice;
		if (prog_choice == 1)
		{
			cout << "Please enter your DNA string: ";
			cin >> dna;
			cout << get_gc_content(dna) << "\n";
		}
		if (prog_choice == 2)
		{
			cout << "Please enter your DNA string: ";
			cin >> dna;
			cout << get_dna_complement(dna) << "\n";
		}
		cout << "Continue y or n: ";
		cin >> user_choice;

	} while (user_choice == 'y' || user_choice == 'Y');
	return 0;
}