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