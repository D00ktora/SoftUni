#include <iostream>
#include <map>
#include <string>
#include <vector>
void printTowns(std::map<std::string, std::vector<std::pair<double, double>>>& mapWithTowns) {
	for (const auto& current : mapWithTowns) {
		std::cout << current.first << " ";
		for (const auto& currentTemps : current.second) {
			std::cout << currentTemps.first << " " << currentTemps.second << std::endl;
		}
	}
}
int main() {
	int numberOfTowns = 0;
	std::cin >> numberOfTowns;
	std::map<std::string, std::vector<std::pair<double, double>>> townTemperatures{};
	std::string town;
	double lowTemp = 0;
	double maxTemp = 0;
	int index = 0;
	while (index != numberOfTowns) {
		std::cin >> town >> lowTemp >> maxTemp;
		std::vector<std::pair<double, double>> tempVector{};
		tempVector.emplace_back(lowTemp, maxTemp);
		if (townTemperatures.find(town) != townTemperatures.end()) {
			std::vector<std::pair<double, double>> currentTemp{};
			currentTemp.emplace_back(lowTemp, maxTemp);
			townTemperatures[town] = currentTemp;
		}
		else {
			townTemperatures[town] = tempVector;
			index++;
		}
	}
	printTowns(townTemperatures);
	return 0;
}