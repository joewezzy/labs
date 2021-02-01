#include <iostream>


using namespace std;

int factorial();

int main(){
	factorial();
}

int factorial(){
	cout << "Q6. Factorial Function" << "\n";
	cout << "======================" << "\n";

	int f, fact{1};
	cout << "Enter the integer to factorize" << "\n";
	cin >> f;
	for (int i = 1; i <= f; i++){
		fact *= i;
		cout << "The " << i << " for the number " << f << " = " << fact << "\n";
	}
}
