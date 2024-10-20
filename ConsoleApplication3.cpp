#include <iostream>
#include <string>
#include "catch_amalgamated.h"
#include "catch_amalgamated.cpp"
using namespace std;

string fizzBuzz(int number) {
    if (number % 3 == 0 && number % 5 == 0) {
        return "FizzBuzz";
    }
    else if (number % 3 == 0) {
        return "Fizz";
    }
    else if (number % 5 == 0) {
        return "Buzz";
    }
    else {
        return to_string(number);
    }
} 

TEST_CASE("FizzBuzz Tests") {
    REQUIRE(fizzBuzz(3) == "Fizz");
    REQUIRE(fizzBuzz(5) == "Buzz");
    REQUIRE(fizzBuzz(15) == "FizzBuzz");
    REQUIRE(fizzBuzz(1) == "1");
    }

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    string result = fizzBuzz(number);
    cout << result << endl;

    return 0;
}