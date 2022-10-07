#include <iostream>

template <typename T>
T max(T a, T b)
{
    return b < a ? a : b;
}

int main()
{
    double f1 = 3.4;
    double f2 = -6.7;

    std::cout << "max(f1, f2):" << max(f1, f2) << '\n';
    std::string s1 = "mathematics";
    std::string s2 = "math";

    std::cout << "max(s1, s2): " << ::max(s1, s2) << '\n';

    /* return 0; */
}
