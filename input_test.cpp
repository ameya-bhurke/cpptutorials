#include <iostream>

using namespace std;

bool accept()
{
    cout << "Would you like to proceed? (y or n) \n";

    char ans = 0;
    cin >> ans;

    if (ans == 'y')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool choice = accept();
    cout << "The user chose: " << boolalpha << choice << endl;
    exit(0);
}