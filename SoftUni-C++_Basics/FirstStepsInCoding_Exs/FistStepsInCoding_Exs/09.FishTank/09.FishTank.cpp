#include<iostream>
using namespace std;

int main() {

	int lenght, wight, hight;
	cin >> lenght >> wight >> hight;
	double procent;
	cin >> procent;

	int obem = lenght * wight * hight;
	double obemInDcm = obem * 0.001;

	double procentConvert = procent * 0.01;

	double procentOfObem = procentConvert * obemInDcm;

	double litersWather = obemInDcm - procentOfObem;




	cout << litersWather;


	return 0;
}