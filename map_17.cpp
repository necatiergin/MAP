#include <vector>
#include <random>
#include <algorithm>
#include <map>
#include <iostream>
#include <format>

int main()
{
	using namespace std;

	vector<int> ivec(1000);
	mt19937 eng{ random_device{}() };
	uniform_int_distribution dist{ 0, 20 };
	generate(ivec.begin(), ivec.end(), [&eng, &dist] {return dist(eng); });

	map<int, int> cnt_map;

	for (auto i : ivec)
		++cnt_map[i];

	for (const auto [value, count] : cnt_map) {
		cout << format("{:<8} {}\n", value, count);
	}
}
