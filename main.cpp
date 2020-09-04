// Su nombre aqui

#define CATCH_CONFIG_MAIN  
#include "catch.hpp"
#include <vector>

using namespace std;

// Comentarios iniciales de la función
int factorial(int x) {
	return 1;
}

TEST_CASE( "Name of the test", "[tags]" ) {
	CHECK( factorial(2)  == 1);
    CHECK( factorial(4)  == 24);
}
