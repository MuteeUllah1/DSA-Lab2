#include <iostream>   // header file for input/output

using namespace std;   // allows use of standard library names without std::

void analyze_pointer(int* ptr);   // function prototype (declaration)

int main() {   // main function (named main3 here instead of main)
	
	int x = 10;   // declare and initialize an integer variable

	cout << "For a static pointer:\n";   // display label for static pointer

	analyze_pointer(&x);   // pass address of x to function

	int* y = new int(5);   // dynamically allocate memory for an int with value 5

	cout << "For a dynamic pointer:\n";   // display label for dynamic pointer

	analyze_pointer(y);   // pass dynamically allocated pointer to function

	delete y;   // free the dynamically allocated memory

	return 0;   // return 0 to indicate successful execution
}

void analyze_pointer(int* ptr) {   // function definition, takes pointer to int

	cout << "Memonry address pointed by the pointer is " << ptr << "\n";   // prints memory address stored in pointer
	cout << "Value pointed at by the pointer is " << *ptr << "\n\n";      // prints the value stored at that address
}
