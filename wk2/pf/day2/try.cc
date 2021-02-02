#include <iostream>

using namespace std;

int main () {
	char str[100];
	cout << "Enter 10 strings: ";
	cin.get(str, 100);

	cout << "The string entered is: " << str << "\n";
	return 0;
}
