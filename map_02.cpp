#include <map>
#include <string>
#include <iostream>
#include <functional>

int main()
{
	std::map<int, std::string, std::greater<int>> persons{
		{41, "burak"},
		{18, "yasar"},
		{12, "nuri"},
		{24, "belma"},
		{17, "naciye"},
		{56, "hakan"},
		{19,  "ahmet"},
		{26,  "canan"},
	};

	for (const auto& [age, name] : persons) {
		std::cout << age << "  " << name << '\n';
	}
}

