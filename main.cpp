#include <iostream>

template<typename T>
T sum(T n1, T n2)
{
    return n1 + n2;
}

template<typename T>
T sub(T n1, T n2)
{
    return n1 - n2;
}

template<typename T>
T mul(T n1, T n2)
{
    return n1 * n2;
}

template<typename T>
T div(T n1, T n2)
{
    return (n1 == 0 || n2 == 0) ? 0 : n1 / n2;
}

int main() {
    double n1, n2;
    std::cout << "Enter two numbers: ";
    std::cin >> n1 >> n2;
    double (*action[4])(double, double) = { sum, sub, mul, div };
    std::cout << "Enter op (0: sum, 1: sub, 2: mul, 3: div): ";
    int op;
    std::cin >> op;

    if (op >= 0 && op < 4) {
        double result = action[op](n1, n2);
        std::cout << "Result: " << result << std::endl;
    }
    else {
        std::cout << "Invalid choice" << std::endl;
        return 1;
    }

    return 0;
}
