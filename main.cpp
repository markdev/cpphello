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
    cout << "...or I can call it with it's unqualified name as long as I have a 'using declaration'";
    //return 0; <- I've disabled return, but it compiles and returns 0.  Why?
}
