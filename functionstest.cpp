#include <iostream>

using namespace std;

int add(int x, int y);

int main()
{
    cout << "The sum of 1 and 2 is: " << add(1, 2) << endl;
}

int add(int x, int y)
{
    return x + y;
}