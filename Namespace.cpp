#include<iostream>

// Define a namespace called Math
namespace Math {
	int add(int x, int y) {
		return x + y;
	}
   }
int main() {
// Use the add function from the Math namespace
 	std::cout <<"Sum: "<<Math::add(5, 1) << std::endl;

// Alternatively, with 'using' directive
	using namespace Math;
	std::cout <<"Sum: "<<add(7, 6) << std::endl;

	return 0;
}
