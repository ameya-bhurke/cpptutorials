#include <iostream>

int main()
{
    const char* a1 = "string";
    const char* a2 = "string";

    if (a1 == a2)
    {
        std::cout << "Same string" << std::endl;
    }
}