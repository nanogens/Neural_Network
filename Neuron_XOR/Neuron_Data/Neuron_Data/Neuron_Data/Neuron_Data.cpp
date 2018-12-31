#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	// Random training set for XOR - two inputs, one output
	cout << "topology: 2 4 1" << endl;

	for (int i = 2000; i >= 0; --i)
	{
		int n1 = (int)(2.0 * rand() / (double)(RAND_MAX));
		int n2 = (int)(2.0 * rand() / (double)(RAND_MAX));
		int t = n2 ^ n1; // should be 1 or 0
		cout << "in: " << n1 << ".0 " << n2 << ".0 " << endl;
		cout << "out: " << t << ".0 " << endl;
	}
}