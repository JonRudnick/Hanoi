// Hanoi.cpp : Defines the entry point for the console application.
// author: Jonathan Rudnick
// date: 2/17/2014
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Tower of Hanoi: show how to move n 
// discs from pole s to pole t

void hanoi(int n, int s, int t) {
	if (n <= 0) {
		cout << "Nothing to do." << endl;
	}
	else if (n == 1) {
		cout << "Move from pole " << s
			<< " to pole " << t << "." << endl;
	}
	else {
		int u = 6 - s - t; // other pole 
		hanoi(n - 1, s, u);
		cout << "Move from pole " << s
			<< " to pole " << t << "." << endl;
		hanoi(n - 1, u, t);
	}
}


int main()
{
	hanoi(1, 1, 3);

	cout << "--------------------------------------------------" << endl;

	hanoi(2, 1, 3);

	cout << "--------------------------------------------------" << endl;

	hanoi(3, 1, 3);

	cout << "--------------------------------------------------" << endl;

	hanoi(4, 1, 3);
}

