#include <iostream>
#include <random>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> generator(unsigned amount) {
	static default_random_engine eng;
	static uniform_int_distribution<int> dist(1, 1000);
	vector<int> rivec;
	for (unsigned i = 0; i <= amount; ++i) {
		rivec.push_back(dist(eng));
	}
	return rivec;
}

int main(void) {
	auto ivec = generator(9);
	for (auto& x : ivec) {
		cout << x << ". ";
	}
}
