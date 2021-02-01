#include <iostream>
#include <cmath>

using namespace std;

unsigned int rotate(unsigned int s, unsigned int r){
	cout << "Your original number " << s << " is been rotated " << r << " times" << "\n";
	s = s << r;
	cout << "The rotated value is " << hex << s << "\n";
}

int main () {
	cout << "Q1. Relational & Logical Expressions " << "\n";
	cout << "======================================" << "\n";

	/*(!(!(i<limit-1 && (c=getchar())) != "\n") && (c != 'A'));
		!(((!(i<limit-1)) || (!(c=getchar())) != "\n") && (c != 'A'));
			(!((!i<lmit-1) || (!c=getchar()) != "\n") || (!c != 'A'));*/
	cout << "\n";
	cout << "\n";

	cout << "Q2. Bitwise and Logic Operator" << "\n";
	cout << "===============================" << "\n";

	cout << "x'&'y is zero because the bitwise deals with bytes and will return 0" << "\n";
	cout << "x'&&'y is 1 because after comparing their values, they are both integers and thus";
	cout << "returning true (1)" << "\n";
	cout << "\n";

	cout << "Q3. Rotate function" << "\n";
	cout << "====================" << "\n";

	int s, r;
	cout << "Enter a number to rotate" << "\n";
        cin >> s;
        cout << "Enter the time to rotate the number" << "\n";
        cin >> r;
	rotate(s, r);
	cout << "\n";

	cout << "Q4. Powers of 2" << "\n";
	cout << "================" << "\n";
	
	int powers = 10;
	while (powers > 0, cout << "2 ^ " << powers << " = " << pow(2,powers) << "\n", --powers);
}
