// Su nombre aqui

#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include <vector>

using namespace std;

// Comentarios iniciales de la función
int factorial(int x) {
	if (x == 1) return 1;
	return x * factorial(x-1);
}

TEST_CASE( "Name of the test", "[tags]" ) {
	CHECK( factorial(4)  == 24);
}
