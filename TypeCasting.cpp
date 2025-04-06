
/* Typecasting in C++ involves converting a value from one data type to another. There are two main types of typecasting in C++: implicit type conversion (also known as automatic type conversion) and explicit type conversion (also known as type casting).

1. Implicit Type Conversion:
Implicit type conversion is done automatically by the compiler when a value of one data type is assigned to a variable of another data type. This conversion is allowed when there is no loss of data or precision. */

#include <iostream>

int main() {
    int integerVar = 10;
    double doubleVar = integerVar; // Implicit type conversion from int to double

    std::cout << "Integer Variable: " << integerVar << std::endl;
    std::cout << "Double Variable: " << doubleVar << std::endl;

    return 0;
}

/* In the example above, the integer value 10 is implicitly converted to a double when assigned to doubleVar.

2. Explicit Type Conversion:
Explicit type conversion, also known as type casting, is done by the programmer using casting operators. There are two types of explicit type casting in C++:

a. C-style casting: */
#include <iostream>

int main() {
    double doubleVar = 3.14;
    int integerVar = (int)doubleVar; // C-style casting from double to int

    std::cout << "Double Variable: " << doubleVar << std::endl;
    std::cout << "Integer Variable: " << integerVar << std::endl;

    return 0;
}

/* In the example above, C-style casting is used to convert doubleVar to an integer.

b. C++ casting operators:
C++ provides several casting operators for explicit type conversion:

static_cast
dynamic_cast
const_cast
reinterpret_cast */

#include <iostream>

int main() {
    double doubleVar = 3.14;
    int integerVar = static_cast<int>(doubleVar); // Static_cast from double to int

    std::cout << "Double Variable: " << doubleVar << std::endl;
    std::cout << "Integer Variable: " << integerVar << std::endl;

    return 0;
}

/* In the example above, static_cast is used for explicit type conversion from double to int.

Note: Be cautious when using explicit type conversion, as it may lead to loss of data or unexpected behavior if not done carefully. */