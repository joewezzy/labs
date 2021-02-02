#include <iostream>

int main () {
	std::cout << "The bss when int main empty is 8bits" << "\n";
	static int number;
	std::cout << "This time when static int is introduce the bss is 288bits" << "\n";
	number = 123;
	std::cout << "Even after initializing the variable the bss is still the same" << "\n";
}
