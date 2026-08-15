// tests.cpp: no main(), no #define. catch_amalgamated.cpp supplies the runner
#include "catch_amalgamated.hpp"
#include "Inventory.hpp"

// Writing this first tells you Inventory needs add() and count(), and nothing more yet.
TEST_CASE("adding an item raises the count") {
    Inventory inv;
    inv.add("potion");
    CHECK(inv.count() == 1);
}

/*TEST_CASE("a new inventory starts empty") {
    Inventory inv;
    REQUIRE(inv.count() == 0);       // REQUIRE aborts the case; the line below is meaningless if this fails
    CHECK_FALSE(inv.has("potion"));  // CHECK reports and continues
}*/