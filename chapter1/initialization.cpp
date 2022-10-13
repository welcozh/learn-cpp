#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

	// copy initialization
	int a = 0;
	// direct initialzation
	int b(2);
	// brace initialization: prefered
	int c{3};
	// brace initialization: error, not warning, type needs match
	// int d{3.5};

	return 1;

}


