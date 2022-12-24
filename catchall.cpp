// CPP Program to demonstrate catch all
#include <iostream>
using namespace std;
int main()
{
	int x = -1;
	char* ptr;

	ptr = new char[256];

	try {

		if (x < 0) {
			throw x;
		}
		if (ptr == NULL) {
			throw " ptr is NULL ";
		}
	}
	catch (...) // catch all
	{
		cout << "Exception occurred: exiting " << endl;
		exit(0);
	}

	getchar();
	return 0;
}
