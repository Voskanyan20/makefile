#include <iostream>
#include "../include/vector.h"
using namespace std;

int main() {
    vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.insert(2, 100);
	v.erase(5);

	for (int i = 0; i < v.get_size(); i++) {
		cout << "v[" << i << "] = " << v[i] << endl;

	}

    return 0;
}