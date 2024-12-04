#include <map>
#include <iostream>

struct Data {
	Data(int x, int y, int z) 
	{
		std::cout << "Data(int, int, int)\n";
	};
};

int main()
{
	std::map<int, Data> x;

	x.emplace(std::make_pair(1, Data{ 2, 3, 4 }));
	x.try_emplace(1, 2, 3, 4);
}
