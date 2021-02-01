#include <iostream>

using namespace std;
int setnum(){
	int arr[5], sum;
	for (int k = 1; k < 6; k++){
		cout << "Please enter your " << (k) << " numbers." << endl;
		cin >> arr[k];
		sum += arr[k];
		int median = k / 2;
		median = arr[median];
		cout << "The median is " << median << endl;
	}
	return sum;
}

void multiply(){
	int num;	
	cout << "Q3. Number table" << endl; 
	cout << "Enter a number: " << endl;
	cin >> num;

	if(num % 2 == 0){
		for (int i = 1; i <= 20; i++){
			cout << i << " x " << num << " = " << (i*num) << endl;
		}
	} else {
		int s = 1; int e = 30;
		while (e > 0) {
			if (s % num != 0){
				cout << s << endl;
				e--;
			}
			s++;
		}
	}
}

int main() {
	string name;
	cout << "Q1 A program to print name" << endl;
	cout << "Enter your full name, please" << endl;
	cin >> name;
	cout << "Your full name is " << name << endl << "========================================" << endl << endl;


	cout << "Q2. Mean, Median and Mode" << endl << endl;
	cout << setnum()/2 << " is the mean value." << endl;
	cout << "=================================================" << endl << endl;
	
	multiply();
}

