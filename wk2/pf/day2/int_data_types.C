#include <iostream>
#include <cstring>
//#include <iterator>

using namespace std;

void efunction (){
	enum {RED, YELLOW, AMBER=YELLOW, GREEN};

        cout << "Q1. Working with Enum" << "\n";
        cout << "======================" << "\n";
        cout << RED << endl;
        cout << YELLOW << endl;
        cout << AMBER << endl;
        cout << GREEN << endl;
        cout << "\n";
}

void ptr (){
	cout << "Q2. Variables, Pointers, References and Decimal values" << "\n";
        cout << "=======================================================" << "\n";
        int ran;
        int* ranptr = &ran;
        int& ranref = ran;
        const int ranconst {ran};
        ran = 5;
        cout << "Outputing the value of the integer " << ran << endl;
        cout << "Displaying the pointer using ++*ptr " << ++*ranptr << endl;
        cout << "Displaying the ref " << ++ranref << endl;
        cout << "Outputing the new value ot the integer " << ran << endl;
        cout << "Show const value " << ranconst << endl;
        cout << "\n";
        int hex {0xf3f2}, dec {0437}, v {'a'};
        cout << "0xf3f2 decimal value is " << hex << "\n" << "0437 decimal value is " << dec << "\n" << "'a' ";
        cout << "decimal value is " << v << endl;
        cout << "\n";
}

void words(){
	cout << "Q3. Single line of words" << "\n";
        cout << "=========================" << "\n";
        string sentence;
        cout << "Please write a sentence. Something like this 'hello-this-is-a-line-of-input'" << "\n";
        cin >> sentence;
        // Get the length of the sentence.
        char sentence_length = sentence.length();
        cout << "The sentence provided has length of " << sentence_length << "\n";
        //Puting the length of the sentence in the character array.
        char character_array[sentence_length];
        //Divide the individual words into characters.
        strcpy(character_array, sentence.c_str());
        // So now, character_array holds the characters in full length.

        // Defining the words and its length.
        string words = " ";
        int length {0};

        // Getting the character pointers.
        char *character_ptr = character_array;

        //The loop for the getting the each character now.
        for (int ptr = 0; ptr < sentence_length; ptr++){// this points the location of the character
                if (*(character_ptr+ptr) == '-'){//points to each character location.
                        cout << "[ " << length << " ]" << " " << words << "\n";//prints out the results
                        words = ' ', length = 0;//refreshes the counters.
                        continue;
                }
                words += *(character_ptr+ptr), length++;
        }
        cout << "[ " << length << " ]" << " " << words << "\n" << "\n";
        cout << "\n";
}

int main() {
	efunction();
	ptr();
	words();
	
	cout << "Q4. Using type 'typedef'" << "\n";
	cout << "========================" << "\n";
	typedef char type_string[10];// using type library to create your own datatype like int
	type_string strings;
	cout << "Enter series of 10 strings" << "\n";
	cin >> strings;
	//cout << strings;
	int slen = strlen(strings);
	cout << slen;
	for (int i = 0; i < slen; ++i){
		cout << strings[i] << "\n";
	}	
}
