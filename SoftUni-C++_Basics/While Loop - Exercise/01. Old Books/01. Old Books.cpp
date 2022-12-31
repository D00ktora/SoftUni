#include <iostream>
#include <string>
using namespace std;


int main()
{
    string book, search;
    getline(cin >> ws, book);
    int counter = 0;
    while (true)
    {

        if (book == search)
        {
            cout << "You checked " << --counter << " books and found it.";
            break;
        }
        else if (search == "No More Books")
        {
            cout << "The book you search is not here!" << endl;
            cout << "You checked " << --counter << " books.";
            break;
        }

        getline(cin >> ws, search);
        counter++;
    }


    return 0;
}
