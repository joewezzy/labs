#include <iostream>
#include <cstring>
#include "fp_header.h"

using namespace std;

void input () {
	cout << "Q1. Input function " << "\n";
	cout << "===================" << "\n";
	
	int o, t, s;
	cout << "Enter two integer" << "\n";
	cin >> o >> t;
	s = o + t;
	cout << "The sum of " << o << " and " << t << " = " << s << "\n";
}

int factorial();

int main(){
	input();
	cout << "\n";
	
	factorial();
	cout << "\n";

	cout << "Q2. Function call overload" << "\n";
	cout << "==========================" << "\n";

	string s {"hi there"};
	char myname[]{"hi"};
	output(3.14f);
	cout << "\n";
	output(s);
	cout << "\n";
	output(myname);
	cout << "\n";
}

void output(int i){
	cout << "The type of the function " << typeid(int).name() << " and value is " << i << "\n";
}

void output(char c){
        cout << typeid(char).name() << c << "\n";
}
void output(float f){
        cout << typeid(float).name() << f << "\n";
}

void output(long l){
        cout << typeid(long).name() << l << "\n";
}

string output(string s){
	cout << s << "\n";
}

void output(char s[], int i){
	cout << s << i << "\n";	
}

void output(char s[], int o, int l){
        cout << s << o << l << "\n";
}

int factorial(){
        cout << "Q6. Factorial Function" << "\n";
        cout << "======================" << "\n";

        int f, fact{1};
        cout << "Enter the integer to factorize" << "\n";
        cin >> f;
        for (int i = 1; i <= f; i++){
                fact *= i;
                cout << "The " << i << " factorial for the number " << f << " is " << fact << "\n";
        }
}
