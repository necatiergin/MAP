#include <map>
#include <string>
#include <iostream>

int main()
{
	std::map<std::string, int> persons{
		{"burak", 41},
		{"yasar", 18},
		{"selma", 12},
		{"erman", 24},
	};

	for (const auto& [name, age] : persons) {
		std::cout << name << "  " << age << '\n';
	}

	std::string name;
	std::cout << "enter the name: ";
	std::cin >> name;

	persons[name] = 55;

	for (const auto& [name, age] : persons) {
		std::cout << name << "  " << age << '\n';
	}

}

