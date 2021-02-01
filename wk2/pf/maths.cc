#include <iostream>

using namespace std;

int number(int num) 
{
	int a;

	cout << "Enter value number: " << num << endl;
	cin >> a;
	return a;
}

float mean()
{
	int a, b, c, d, e, result;
	a = number(1);
	b = number(2);
	c = number(3);
	d = number(4);
	e = number(5);
	result = (a + b + c + d + e)/2;
	cout << "The mean is: ";
	return result;
}

void array(){
	int param[5];
	cout << "ahahahaha" << param[3] << endl;
}

int main() 
{
	cout << mean() << endl;
	array();
}
