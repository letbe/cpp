#include <iostream>
#include <array>
using namespace std;

int main() {
	array<int,10> A;
	int max;
	cout << "Please type n(n <= 10) numbers: " << endl;
	for (int i(0);cin >> max;++i) A.at(i) = max;

	for (int& r : A) if (r > max) max = r;

	for (;max != 0;--max,cout << endl) {
		for (auto& e : A) {
			if (e == max) {
				cout << "# "; 
				--e;
			}
			else {
				cout << "  ";
			}
		}
	}
}
