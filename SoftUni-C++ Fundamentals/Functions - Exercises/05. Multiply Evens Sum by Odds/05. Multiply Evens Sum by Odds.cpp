#include <iostream>
using namespace std;

//2147483647

int evenOddNumbers(int n)
{
    int edinici, desetici, stotici, hilyadni, desetohilyadni, stohilqdni, milioni, milyardi, desetkiMilyardi, stoticiMilyardi;
    double sumEven = 0, sumOdd = 0;
    edinici = n % 10;
    desetici = n / 10 % 10;
    stotici = n / 100 % 10;
    hilyadni = n / 1000 % 10;
    desetohilyadni = n / 10000 % 10;
    stohilqdni = n / 100000 % 10;
    milioni = n / 1000000 % 10;
    milyardi = n / 10000000 % 10;
    desetkiMilyardi = n / 100000000 % 10;
    stoticiMilyardi = n / 1000000000;

    if (edinici % 2 == 0)
    {
        sumEven += edinici;
    }
    else
    {
        sumOdd += edinici;
    }
    if (desetici % 2 == 0)
    {
        sumEven += desetici;
    }
    else
    {
        sumOdd += desetici;
    }
    if (stotici % 2 == 0)
    {
        sumEven += stotici;
    }
    else
    {
        sumOdd += stotici;
    }
    if (hilyadni % 2 == 0)
    {
        sumEven += hilyadni;
    }
    else
    {
        sumOdd += hilyadni;
    }
    if (desetohilyadni % 2 == 0)
    {
        sumEven += desetohilyadni;
    }
    else
    {
        sumOdd += desetohilyadni;
    }
    if (stohilqdni % 2 == 0)
    {
        sumEven += stohilqdni;
    }
    else
    {
        sumOdd += stohilqdni;
    }
    if (milioni % 2 == 0)
    {
        sumEven += milioni;
    }
    else
    {
        sumOdd += milioni;
    }
    if (milyardi % 2 == 0)
    {
        sumEven += milyardi;
    }
    else
    {
        sumOdd += milyardi;
    }
    if (desetkiMilyardi % 2 == 0)
    {
        sumEven += desetkiMilyardi;
    }
    else
    {
        sumOdd += desetkiMilyardi;
    }
    if (stoticiMilyardi % 2 == 0)
    {
        sumEven += stoticiMilyardi;
    }
    else
    {
        sumOdd += stoticiMilyardi;
    }



    return (sumEven * 1.0) * (sumOdd * 1.0);
}




int main()
{
    int n;
    cin >> n;
    cout << evenOddNumbers(abs(n));


    return 0;
}
