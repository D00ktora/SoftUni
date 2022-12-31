#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <unordered_set>

using namespace std;

int main()
{

    vector<vector<int>> matrix;

    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        vector<int>temp;
        for (int i = 0; i < n; i++)
        {
            int tempVal;
            cin >> tempVal;
            temp.push_back(tempVal);
        }
        matrix.push_back(temp);
    }

    int counter = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {


            if (i + j < n - 1)
            {


                if (i < j && i != j && i + j)
                {
                    if (matrix[i][j] % 2 != 0)
                        counter += matrix[i][j];
                }


                else if (i != j)
                {
                    if (matrix[i][j] % 2 != 0)
                        counter += matrix[i][j];
                }
            }
            else
            {


                if (i > j && i + j != n - 1)
                {
                    if (matrix[i][j] % 2 != 0)
                        counter += matrix[i][j];
                }


                else
                {
                    if (i + j != n - 1 && i != j)
                    {
                        if (matrix[i][j] % 2 != 0)
                            counter += matrix[i][j];
                    }
                }
            }
        }
    }

    cout << "The sum is: " << counter;
    return 0;
}
