//
//  main.cpp
//  HelloWorld
//
//  Created by Marcus Karavan on 1/22/17.
//  Copyright © 2017 Marcus Karavan. All rights reserved.
//

// Chapters covered so far:
// http://www.cplusplus.com/doc/tutorial/program_structure/

#include <iostream>
using namespace std;    					 // <- Need this to call cout with its unqualified name

int main(int argc, const char * argv[]) {    // <- void main() doesn't seem to work, only int main()
	// whitespace doesn't matter
    std::cout << "Hello, World!\n";          // <- STandard Character OUTput device
    std::cout << "Hello, World Again!\n";

    std::cout << "I can explicitly call cout with its qualified namespace from std...\n";
    cout << "...or I can call it with it's unqualified name as long as I have a 'using declaration'\n";
    //return 0; <- I've disabled return, but it compiles and returns 0.  Why?


    /** Primitive Data Types **/

    signed char signedChar = 255;			 //  8-bit
    cout << signedChar;  cout << "\n";       //  yields \322

    signed short int var_signedShortInt = 32767;	// highest possible value, 16-bit
	cout << var_signedShortInt;  cout << "\n"; 		// can also just be called short
	short var_short = -32767;
	cout << var_short;  cout << "\n";

	signed int var_signedInt = 2147483647; // 32-bit
	cout << var_signedInt;  cout << "\n"; 	
	int var_int = -2147483647;
	cout << var_int;  cout << "\n";

	// long and long long, up to 64 bits.  Enough of this.

	long double var_float = 4.23423423;  // not sure why it isn't capturing this level of precision
	cout << var_float;  cout << "\n";    // compiler barks at you for unused variables

	bool var_bool = true;				 // saved as 1 or 0 behind the scenes
	cout << var_bool;  cout << "\n";
	var_bool = false;
	cout << var_bool;  cout << "\n";

	int a, b, c;					// multiple variables can be declared at once
	a = 1;
	b = 2;
	c = 3;
	int result = a + b + c;
	cout << result; cout << "\n";

	// There are three kinds of variable declaration
	int foo = 10;		// c-like initialization
	int bar(5);			// constructor initialization (c++)
	int baz(11);		// uniform initialization  (c++)
	cout << foo + bar + baz; cout << "\n";

	auto sameAsFoo = foo;	// auto keyword copies the type
	sameAsFoo++;			// uses increment just the same
	cout << sameAsFoo; cout << "\n";
	cout << foo; cout << "\n";			//still original value, pass by value not reference.

	int thing_a = 1;
	decltype(thing_a) thing_b;			// you can also declare types dynamically without initializing them
	thing_b = 2;
	cout << thing_a + thing_b; cout << "\n";

	string myString = "This is my string";
	cout << myString << endl;
}
