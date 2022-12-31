#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;
int main()
{
    vector<string> conteiner;
    string input;
    int loops;
    set<string> names;
    cin >> loops;
    cin.ignore();

    for (int i = 0; i < loops; i++)
    {
        cin >> input;
        cin.ignore();
        if (conteiner.empty())
        {
            conteiner.push_back(input);
            names.insert(input);
        }
        else
        {
            for (int it = 0; it < conteiner.size(); it++)
            {
                if (conteiner[it] == input)
                {
                    break;
                }
                if (it == conteiner.size() - 1)
                {
                    conteiner.push_back(input);
                    names.insert(input);
                    break;
                }
            }
        }

    }

    for (int i = 0; i < conteiner.size();i++)
    {
        cout << conteiner[i] << endl;
    }
    return 0;
}
