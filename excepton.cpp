// CPP Program to demonstrate all types (including primitive
// and pointer) can be thrown as exception.
#include <iostream>
using namespace std;
int main()
{
	int x = -1;

	// some other stuff
	try {
		// some other stuff
		if (x < 0) {
			throw x;
		}
	}
	catch (int x) {
		cout << "Exception occurred: thrown value is " << x
			<< endl;
	}
	getchar();
	return 0;
}
