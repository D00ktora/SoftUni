#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <map>
#include <sstream>
#include <algorithm>

std::istringstream read_input(void);
typedef std::map<std::string, std::vector<std::string>> country_city;
typedef std::string continent;
typedef std::vector<std::string> countries;
typedef std::pair<continent, countries> continent_country;


int main(int argc, const char* argv[]) {
    int number_of_inputs{ 0 };
    country_city countries_and_cities;
    std::vector<continent_country> country_order;

    std::cin >> number_of_inputs;
    std::cin.ignore();
    std::string Continent{ "" }, Country{ "" }, City{ "" };

    while (number_of_inputs--) {
        auto istr = read_input();
        istr >> Continent >> Country >> City;
        bool is_found{ false };

        for (auto itr = country_order.begin(); itr != country_order.end(); ++itr) {
            if (itr->first == Continent) {
                auto country_exist = std::find(itr->second.begin(), itr->second.end(), Country);
                if (country_exist == itr->second.end()) {
                    itr->second.push_back(Country);
                }
                is_found = true;
                countries_and_cities[Country].push_back(City);
                break;
            }
        }

        if (!is_found) {
            countries_and_cities.insert(std::make_pair(Country, std::vector<std::string>{City}));
            country_order.push_back(std::make_pair(Continent, std::vector<std::string>{Country}));
        }
    }

    for (auto continent : country_order) {
        std::cout << continent.first << ":" << std::endl;
        for (auto country = continent.second.begin(); country != continent.second.end(); country++) {
            std::cout << "  " << *country << " -> ";
            bool first{ true };
            for (auto cities : countries_and_cities[*country]) {
                if (!first) {
                    std::cout << ", ";
                }
                std::cout << cities;
                first = false;

            }
            if (country != continent.second.end() - 1) {
                std::cout << std::endl;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}


std::istringstream read_input(void) {
    std::string input{ "" };
    std::getline(std::cin, input);
    std::istringstream istr{ input };
    return istr;
}

