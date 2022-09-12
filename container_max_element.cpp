#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
* Program to find the greatest element in a container
*/

int main(void) {
	vector<int> ivec{ 78, 34, 12, 90, 34, 2, 71 };
	// the iterator to the greatest element is always returned
	auto greatest = max_element(ivec.cbegin(), ivec.cend());
	cout << "The greatest element is: " << *greatest;
}
