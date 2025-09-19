#include <iostream>   // header file for input/output
#include <string>     // header file for using std::string
using namespace std;  // allows use of standard library names without std::

void string_reverse(string* org, string* rev);   // function prototype for reversing a string

int main() {
    string* original_str = new string;   // dynamically allocate memory for the original string
    string* reversed = new string;       // dynamically allocate memory for the reversed string

    cout << "Enter a string: ";          // prompt user for input
    getline(cin, *original_str);         // read entire line (including spaces) into *original_str

    string_reverse(original_str, reversed);   // call function to reverse the string

    cout << "Reversed string: " << *reversed << endl;   // print the reversed string

    delete original_str;   // free memory allocated for original string
    delete reversed;       // free memory allocated for reversed string

    return 0;   // successful program termination
}

void string_reverse(string* org, string* rev) {   // function definition
    // loop through original string backwards
    for (int i = org->length() - 1; i >= 0; i--) {
        *rev += (*org)[i];   // append each character in reverse order to *rev
    }
}
