#include <iostream>
/*
void Print_Number(int value)
{
    std::cout << value << std::endl;
}

void Print_Number(float value)
{
    std::cout << value << std::endl;
}
*/
template<class T>
Print_Number(T value)
{
    int temp_number {1};
    auto rate {2.3};
    std::cout << value << std::endl;
}


int main()
{
    Print_Number(1);
    Print_Number(2.2f);
    Print_Number<std::string>("test");
    std::cin.get();
}