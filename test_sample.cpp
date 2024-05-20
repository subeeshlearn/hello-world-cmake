#include <iostream>
#include <sstream>
#include <cassert>

void test_sum_calculation() {
    // Arrange
    std::stringstream input_stream;
    std::stringstream output_stream;
    int num1 = 5;
    int num2 = 10;
    int expected_sum = num1 + num2;

    // Set the input stream
    input_stream << num1 << "\n" << num2 << "\n";
    std::cin.rdbuf(input_stream.rdbuf());

    // Set the output stream
    std::streambuf* old_cout_rdbuf = std::cout.rdbuf();
    std::cout.rdbuf(output_stream.rdbuf());

    // Act
    main(); // Call the main function

    // Restore the original cout stream buffer
    std::cout.rdbuf(old_cout_rdbuf);

    // Assert
    std::string expected_output = "The sum of " + std::to_string(num1) + " and " + std::to_string(num2) + " is " + std::to_string(expected_sum) + "\n";
    assert(output_stream.str() == expected_output);
}

int main() {
    // Run the test case
    test_sum_calculation();

    return 0;
}