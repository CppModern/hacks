#include <iostream>
#
#include <iterator>
#include <vector>

/*
* Printing the content of a container with elements 
* supporting the << operator
*/

using std::ostream_iterator;
using std::vector;
using std::cout;


int main(void) {
	vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	ostream_iterator<int> out_it(cout, ", ");
	// Print out the content of the vector from beginning to end
	// upon each aassinment to the out_it, the underlying stream is called
	std::copy(ivec.cbegin(), ivec.cend(), out_it);
}