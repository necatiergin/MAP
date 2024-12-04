// insert or assign 

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

	auto [iter, inserted] = persons.insert_or_assign(name, 55);

	if (inserted) {
		std::cout << "inserted\n";
	}
	else {
		std::cout << "assigned\n";
	}
	
	std::cout << iter->first << " " << iter->second << "\n\n";
}

