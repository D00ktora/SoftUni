#include <iostream>
using namespace std;

void smollNumber()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if (n1 <= n2 && n1 <= n3)
    {
        cout << n1;
    }
    else if (n1 <= n3 && n1 <= n2)
    {
        cout << n1;
    }
    else if (n2 <= n1 && n2 <= n3)
    {
        cout << n2;
    }
    else if (n2 <= n3 && n2 <= n1)
    {
        cout << n2;
    }
    else if (n3 <= n1 && n3 <= n2)
    {
        cout << n3;
    }
    else if (n3 <= n2 && n3 <= n1)
    {
        cout << n3;
    }
}

int main()
{
    smollNumber();

    return 0;
}
