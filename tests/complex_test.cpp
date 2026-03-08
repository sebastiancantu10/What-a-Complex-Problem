#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/complex.hpp"

TEST_CASE("addition works") {

    ComplexNumber a(5.0, 7.0);
    ComplexNumber b(2.0, 3.0);

    ComplexNumber result = a.add(b);

    REQUIRE(result.real() == 7.0);
    REQUIRE(result.imaginary() == 10.0);
}

TEST_CASE("subtraction works") {

    ComplexNumber a(5.0, 7.0);
    ComplexNumber b(2.0, 3.0);

    ComplexNumber result = a.subtract(b);

    REQUIRE(result.real() == 3.0);
    REQUIRE(result.imaginary() == 4.0);
}

TEST_CASE("negate works") {

    ComplexNumber a(5.0, 7.0);

    ComplexNumber result = a.negate();

    REQUIRE(result.real() == -5.0);
    REQUIRE(result.imaginary() == -7.0);
}

TEST_CASE("conjugate works") {

    ComplexNumber a(5.0, 7.0);

    ComplexNumber result = a.conjugate();

    REQUIRE(result.real() == 5.0);
    REQUIRE(result.imaginary() == -7.0);
}

TEST_CASE("magnitude works") {

    ComplexNumber a(5.0, 7.0);

    float mag = a.magnitude();

    REQUIRE(mag > 8.60);
    REQUIRE(mag < 8.61);
}
