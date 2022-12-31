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

std::istringstream read_input(void);
int main(int argc, const char* argv[]) {

    int count{ 1 };
    std::string last_resource{ "" };
    std::map<std::string, int> resource_dict;
    std::list<std::string> tracker;

    while (true) {

        auto istr = read_input();

        if (count % 2 == 0) {
            int value{ 0 };
            istr >> value;
            resource_dict[last_resource] += value;

        }
        else {
            std::string resource{ "" };
            istr >> resource;

            if (resource == "stop") {
                break;
            }
            last_resource = resource;
            resource_dict[last_resource] += 0;
            if (std::find(tracker.begin(), tracker.end(), last_resource) == tracker.end()) {
                tracker.push_back(last_resource);
            }

        }
        count++;
    }

    for (auto x = tracker.begin(); x != tracker.end(); x++) {
        std::cout << *x << " -> " << resource_dict[*x] << "\n";
    }

    return 0;
}

std::istringstream read_input(void) {
    std::string input{ "" };
    std::getline(std::cin, input);
    std::istringstream istr{ input };
    return istr;
}
