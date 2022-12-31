#include <iostream>
using namespace std;


int main() {

	string name, lastName, town;
	int age;

	cin >> name >> lastName;
	cin >> age;
	cin >> town;

	cout << "You are " << name << " " << lastName << ", a " << age << "-years old person from " << town << ".";

	return 0;
}