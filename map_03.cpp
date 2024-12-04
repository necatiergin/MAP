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
		{"remzi", 17},
		{"hakan", 56},
		{"ahmet", 19},
		{"canan", 26},
	};

	for (const auto& [name, age] : persons) {
		std::cout << name << "  " << age << '\n';
	}
}

