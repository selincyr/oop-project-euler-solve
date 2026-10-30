# OOP Project Euler Solve

C++17 object-oriented solutions to Project Euler Problems 1–3 for the weeks 1–3 make-up assignment.

## Assignment

[Instructor's requirements](https://github.com/zyavuz610/learn-cpp/blob/main/900_projects/2026_inClass_Projects/week_01-03/readme.md)

| File | Class | Input | Expected output |
| --- | --- | --- | --- |
| `hafta1-3/Problem1.cpp` | `Problem1Solver` | Exclusive limit: 1000 | `Result: 233168` |
| `hafta1-3/Problem2.cpp` | `Problem2Solver` | Inclusive limit: 4000000 | `Result: 4613732` |
| `hafta1-3/Problem3.cpp` | `Problem3Solver` | 600851475143 | `Result: 6857` |

Each source file is a standalone program containing exactly one solver class and its own main function. Compile the programs separately.

## Class design

- Inputs are private members initialized through explicit constructors.
- Public `solve() const` methods return results without printing.
- Helper operations are private methods.
- Each `main()` only creates a solver, calls `solve()`, and prints the result.
- No separate headers or free helper functions are used.
- Calculations use local working variables, so repeated calls do not modify the stored input.

## Build and run

Requirements: a C++17-compatible g++ compiler.

Run from the repository root:

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra hafta1-3/Problem1.cpp -o build/problem1
g++ -std=c++17 -Wall -Wextra hafta1-3/Problem2.cpp -o build/problem2
g++ -std=c++17 -Wall -Wextra hafta1-3/Problem3.cpp -o build/problem3
./build/problem1
./build/problem2
./build/problem3
```

## Algorithms

### Problem 1 — Multiples of 3 or 5

Visit positive integers below the limit and add a number once if it is divisible by 3 or 5. The logical OR prevents double counting multiples of 15.

Time: O(limit). Extra space: O(1).

[Original problem](https://projecteuler.net/problem=1)

### Problem 2 — Even Fibonacci Numbers

Start with 1 and 2, keep only two consecutive terms, and sum even terms not exceeding the limit. A private helper advances the sequence. The limit is an int; intermediate Fibonacci values and the sum use long long.

Time: O(log limit) for positive limits. Extra space: O(1).

[Original problem](https://projecteuler.net/problem=2)

### Problem 3 — Largest Prime Factor

Try factors in ascending order and remove every occurrence of each divisor. After smaller factors have been removed, the next divisor found must be prime. Stop when the trial factor exceeds the square root of the remaining value; any remaining value greater than 1 is the largest prime factor. The condition uses division to avoid multiplication overflow.

Time: O(sqrt(number)) worst case. Extra space: O(1).

[Original problem](https://projecteuler.net/problem=3)

## Input behavior and validation

- Problem 1: limits at or below 1 return 0.
- Problem 2: limits below 2 return 0.
- Problem 3: inputs below 2 return 0 as a sentinel for no prime factor.
- Example checks: Problem 1 with 10 returns 23; Problem 2 with 100 returns 44; Problem 3 with 13195 returns 29.
- Each solution is added in its own commit: `Problem 1 solved`, `Problem 2 solved`, and `Problem 3 solved`.
