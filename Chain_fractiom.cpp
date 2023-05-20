// Chain_fractiom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cin;
using std::cout;

double get_the_fraction(int n);

int main()
{
	int num{ 0 };
	cout << "Please give me a number of elements, and I'll try abd calculate the fraction\n";
	cin >> num;
	while (num < 2) {
		cout << "Hmm... I dont get it. Please, try again";
		cin >> num;
	}
	cout << "I gues the answer is: " <<1 + get_the_fraction(num);
}

double get_the_fraction(int n)
{
	double res = 1;
	if (n == 1) return res;
	else
	res = 1/(1+ get_the_fraction(n - 1));
}