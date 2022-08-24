// Input Output Stream
#include <iostream>

// STD => SHORT FOR STANDARD LIBRARY

// << is for input. || >> is for output! (at least in the std stuff

int main() {
	double x = 10;
	double y = 5;
	double z = (x + 10) / (3 * y);
	// (STREAM INSERTION OPERATOR) << inserting something to the output stream(cout) basically.
	// ENDL is the end of the line... \n basically.
	std::cout << "x = " << x << std::endl << "y = " << y;
	return 0;
}