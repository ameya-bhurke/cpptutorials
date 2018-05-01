#include <iostream>

int main()
{
    int x[] = {1, 2, 3, 4};
    int* p = &x[0];
    for (int i = 0; i < 10; i++)
    {
        std::cout << *p << std::endl;
        *p++;
    }
    return 0;
}