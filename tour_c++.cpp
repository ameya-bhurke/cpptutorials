#include <iostream>

void
test_print_loop() 
{
    int v[] = {1, 2, 3, 4};
    for(auto i : v) 
    {
        std::cout << i;
    }
}

int
main()
{
    test_print_loop();
}