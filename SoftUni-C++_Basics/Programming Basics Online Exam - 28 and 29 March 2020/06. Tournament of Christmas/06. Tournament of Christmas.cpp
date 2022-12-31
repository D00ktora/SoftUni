#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numberOfDays, winGames = 0, loseGames = 0, winDays = 0, loseDays = 0;
    cin >> numberOfDays;
    string sport, result;
    double totalMoney = 0;

    for (int i = 1; i <= numberOfDays; i++)
    {
        double money = 0;
        //cin >> sport;
        getline(cin >> ws, sport);

        while (true)
        {
            if (sport == "Finish")
            {
                if (winGames > loseGames)
                {
                    money = money * 0.1 + money;
                    winDays++;
                    totalMoney += money;
                    winGames = 0;
                    loseGames = 0;
                    break;
                }
                else
                {
                    totalMoney += money;
                    loseDays++;
                    winGames = 0;
                    loseGames = 0;
                    break;
                }

            }

            cin >> result;

            if (result == "win")
            {
                money += 20;
                winGames++;
            }
            else
            {
                loseGames++;
            }

            getline(cin >> ws, sport);


        }

        cout.setf(ios::fixed);
        cout.precision(2);

        if (i == numberOfDays)
        {
            if (winDays > loseDays)
            {
                totalMoney = totalMoney * 0.2 + totalMoney;

                cout << "You won the tournament! Total raised money: " << totalMoney;
            }
            else
            {
                cout << "You lost the tournament! Total raised money: " << totalMoney;
            }
        }


    }



    return 0;
}
