#include <iostream>

class Problem1Solver {
private:
    int limit_;

    bool isMultipleOfThreeOrFive(int number) const {
        return number % 3 == 0 || number % 5 == 0;
    }

public:
    explicit Problem1Solver(int limit) : limit_(limit) {}

    long long solve() const {
        long long sum = 0;
        for (int number = 1; number < limit_; ++number) {
            if (isMultipleOfThreeOrFive(number)) {
                sum += number;
            }
        }
        return sum;
    }
};

int main() {
    Problem1Solver solver(1000);
    std::cout << "Sonuç: " << solver.solve() << '\n';
    return 0;
}
