#include <iostream>

class Problem2Solver {
private:
    int limit_;

    bool isEven(long long number) const {
        return number % 2 == 0;
    }

    void advanceFibonacci(long long& current, long long& next) const {
        const long long following = current + next;
        current = next;
        next = following;
    }

public:
    explicit Problem2Solver(int limit) : limit_(limit) {}

    long long solve() const {
        long long current = 1;
        long long next = 2;
        long long sum = 0;

        while (current <= limit_) {
            if (isEven(current)) {
                sum += current;
            }
            advanceFibonacci(current, next);
        }
        return sum;
    }
};

int main() {
    Problem2Solver solver(4000000);
    std::cout << "Sonuç: " << solver.solve() << '\n';
    return 0;
}
