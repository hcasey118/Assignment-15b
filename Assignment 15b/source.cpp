#include <iostream>
#include <cmath>  // For std::round

// Hunter Casey
// CIS 1202
// July 26 2024

// Templated function for floating-point types
template <typename T>
T half(T value) {
    return value / 2;
}

// Specialization for integer types to handle rounding
template <>
int half(int value) {
    return static_cast<int>(std::round(static_cast<float>(value) / 2));
}

int main() {
    // Test cases for floating-point and double types
    float fValue = 5.0f;
    double dValue = 7.0;

    std::cout << half(fValue) << std::endl;   // Expected: 2.5
    std::cout << half(dValue) << std::endl;   // Expected: 3.5

    // Test case for integer type
    int iValue = 3;
   
    std::cout << half(iValue) << std::endl;     // Expected: 2 (rounded up)
    return 0;
}