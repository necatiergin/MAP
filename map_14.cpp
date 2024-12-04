#include <iostream>
#include <map>
#include <string>

int main()
{
	const auto print_pair = [](const auto& p) {
		std::cout << "[" << p.first << ", " << p.second << "]\n";
		};

	auto print_result = [&](const auto& ip) {
		std::cout << (ip.second ? "inserted: " : "assigned: ");
		print_pair(*ip.first);
		};

	std::map<int, std::string> m;
	auto p = m.insert_or_assign(12, "necati");
	print_result(p);
	p = m.insert_or_assign(34, "salih");
	print_result(p);
	p = m.insert_or_assign(12, "ayse");
	print_result(p);
}
