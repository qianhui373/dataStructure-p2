#include "catch.hpp"
#include "signal.hpp"

// TODO
////
// Note this test will fail to compile if you do not have the
// correct member function declarations.
TEST_CASE("Test Signal for const correctness", "[signal]") {
    

        Signal<double, 10> s(4);

        for (std::size_t i = 0; i < s.length(); ++i) {
            CHECK(s[i] == 4.0);
            CHECK(s.at(i) == 4.0);
        }
}

   


