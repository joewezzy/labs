#include <iostream>
 
using namespace std;

void multiply(){
	cout << "Q3. Print multiplication row or table" << endl;
	cout << "=============================================" << endl;
	
	int num;
	cout << "Provide a number: " << endl;
	cin >> num;


	if (num % 2 == 0){
		for (int i = 1; i <= 20; i++){
			cout << i << " x " << num << (i*num) << endl;
		}
	} else {
		int c = 30; int s = 1;
		while (c > 0){
			if (s % num != 0){
				cout << "This is an odd number: " << s << " of " << num << endl;
				c--;
			}
			s++;
		}
	}
}

int main(){
	multiply();
}
