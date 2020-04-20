#include "stdafx.h"
#include <iostream>
#include<ctime>

int todaysdate() // this function returns an integer value
{
	int q;
	std::cout << "Enter the current month: ";
	int m{};
	std::cin >> m;

	std::cout << "Enter the current date: ";
	int d{};
	std::cin >> d;

	if (m == 1) {
		m = 0;
		q = m + d; 
	}
	else if (m == 2) {
		m = 31; 
		q = m + d;
	}
	else if (m == 3) {
		m = 59;
		q = m + d;
	}
	else if (m == 04) {
		m = 90;
		q = m + d;
	}
	else if (m == 05) {
		m = 120;
		q = m + d;
	}
	else if (m == 06) {
		m = 151;
		q = m + d;
	}
	else if (m == 07) {
		m = 181;
		q = m + d;
	}
	else if (m == 8) {
		m = 212;
		q = m + d;
	}
	else if (m == 9) {
		m = 243;
		q = m + d;
	}
	else if (m == 10) {
		m = 273;
		q = m + d;
	}
	else if (m == 11) {
		m = 304;
		q = m + d;
	}
	else if (m == 12) {
		m = 334;
		q = m + d;
	}

	return q; // return the value the user entered back to the caller
}


int getuserbirthday() // this function returns an integer value
{
	int n;
	std::cout << "Enter the month of your birthday: ";
	int k{};
	std::cin >> k;

	std::cout << "Enter the date of your birthday: ";
	int g{};
	std::cin >> g;

	if (k == 1) {
		k = 0;
		n = k + g;
	}
	else if (k == 2) {
		k = 31;
		n = k + g;
	}
	else if (k == 3) {
		k = 59;
		n = k + g;
	}
	else if (k == 4) {
		k = 90;
		n = k + g;
	}
	else if (k == 5) {
		k = 120;
		n = k + g;
	}
	else if (k == 6) {
		k = 151;
		n = k + g;
	}
	else if (k == 7) {
		k = 181;
		n = k + g;
	}
	else if (k == 8) {
		k = 212;
		n = k + g;
	}
	else if (k == 9) {
		k = 243;
		n = k + g;
	}
	else if (k == 10) {
		k = 273;
		n = k + g;
	}
	else if (k == 11) {
		k = 304;
		n = k + g;
	}
	else if (k == 12) {
		k = 334;
		n = k + g;
	}

	return n; // return the value the user entered back to the caller
}

int calculatedays() {

	int h;
	int numone { todaysdate() };
	int numtwo { getuserbirthday() };

	if (numone == numtwo) {
		h = 0;
	}
	else if (numone > numtwo) {
		h = (numtwo + 365) - numone;
	}
	else if (numone < numtwo) {
		h = numtwo - numone;
	}

	return h; 
}

int main()
{
	int y;
	int num{ calculatedays() }; // initialize num with the return value of calculatedays()
	
	if (num == 0) {
		std::cout << "There are  " << num << "  days until your birthday. Happy Birthday!";
	}
	else
	std::cout << "There are  " << num << "  days until your birthday"; 
	std::cin >> y; 
	return 0;
}











































