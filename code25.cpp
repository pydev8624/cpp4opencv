#include <iostream>

using namespace std;

int main()
{
    char color;
    cin >> color;

    switch (color)
    {
        case 'g':
            cout << "up" << endl;
            break;
        case 'y':
            cout << "middle" << endl;
            break;
        case 'r':
            cout << "below" << endl;
            break;
        default:
            cout << "not found" << endl;
    }

    return 0;
}
