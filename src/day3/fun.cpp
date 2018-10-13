#include <iostream>

int sum(int x, int y)
{
    return x + y;
}

int mul(int x, int y)
{
    return x * y;
}

int main()
{
    std::cout << sum(3, 4) << ", " << mul(3, 4) << "\n";
}
