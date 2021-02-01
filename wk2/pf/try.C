#include <iostream>
#include <cstring>

int main() {
    char name[] = "Alex"; // only use 5 characters (4 letters + null terminator)
    std::cout << "My name is: " << name << '\n';
    std::cout << name << " has " << std::strlen(name) << " letters.\n";

	int x (5);
 	std::cout << x;
}
