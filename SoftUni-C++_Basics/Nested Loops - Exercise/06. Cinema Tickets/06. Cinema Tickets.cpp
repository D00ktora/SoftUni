#include <iostream>
#include <string>
using namespace std;


int main()
{
    string movie;
    getline(cin >> ws, movie);
    int placesInCinemaRoom, ticketCounter = 0, studentCounter = 0, standartCounter = 0, kidCounter = 0, tottalTickets = 0;
    string places;
    cin >> placesInCinemaRoom;
    while (movie != "Finish")
    {
        for (int i = 1; i <= placesInCinemaRoom; i++)
        {
            cin >> places;

            if (places == "End")
            {
                break;
            }
            else if (places == "student")
            {
                ticketCounter++;
                studentCounter++;
                tottalTickets++;
            }
            else if (places == "standard")
            {
                ticketCounter++;
                standartCounter++;
                tottalTickets++;
            }
            else if (places == "kid")
            {
                ticketCounter++;
                kidCounter++;
                tottalTickets++;
            }

        }
        double ticketCounterDouble = ticketCounter * 1.0;
        double placeInCinemaRommDouble = placesInCinemaRoom * 1.0;
        double procentOfRoom = ticketCounterDouble / placeInCinemaRommDouble * 100.0;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << movie << " - " << procentOfRoom << "% full." << endl;
        ticketCounter = 0;
        ticketCounterDouble = 0;


        getline(cin >> ws, movie);

        if (movie != "Finish")
        {
            cin >> placesInCinemaRoom;
        }


    }
    cout.setf(ios::fixed);
    cout.precision(2);
    double procentStudent = studentCounter * 1.0 / tottalTickets * 100.0;
    double procentStandard = standartCounter * 1.0 / tottalTickets * 100.0;
    double procentKid = kidCounter * 1.0 / tottalTickets * 100.0;

    cout << "Total tickets: " << tottalTickets << endl;
    cout << procentStudent << "% " << "student tickets." << endl;
    cout << procentStandard << "% standard tickets." << endl;
    cout << procentKid << "% kids tickets." << endl;


    return 0;
}
