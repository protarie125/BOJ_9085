#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto t = int{};
	cin >> t;
	while (0 < (t--)) {
		auto n = int{};
		cin >> n;

		auto sum = int{ 0 };
		while (0 < (n--)) {
			auto x = int{};
			cin >> x;

			sum += x;
		}

		cout << sum << '\n';
	}

	return 0;
}