#include <iostream>
#include <fstream>

using namespace std;

int main() {
    double myNumber = 42.5;
    fstream outfile("test.txt", fstream::out);
    outfile << "The answer is almost " << myNumber << endl;
    outfile.close();
}
