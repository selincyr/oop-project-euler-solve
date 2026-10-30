#include <iostream>

class Problem3Solver {
private:
    long long number_;

    void removeFactor(long long& remaining, long long factor) const {
        while (remaining % factor == 0) {
            remaining /= factor;
        }
    }

public:
    explicit Problem3Solver(long long number) : number_(number) {}

    long long solve() const {
        if (number_ < 2) {
            return 0; // 2'den küçük girdilerin asal çarpanı yoktur.
        }

        long long remaining = number_;
        long long largestFactor = 0;

        // Bölme kullanımı, factor * factor işlemindeki olası taşmayı önler.
        for (long long factor = 2; factor <= remaining / factor; ++factor) {
            if (remaining % factor == 0) {
                largestFactor = factor;
                removeFactor(remaining, factor);
            }
        }

        // 1'den büyük kalan değer asaldır.
        if (remaining > 1) {
            largestFactor = remaining;
        }
        return largestFactor;
    }
};

int main() {
    Problem3Solver solver(600851475143LL);
    std::cout << "Sonuç: " << solver.solve() << '\n';
    return 0;
}
