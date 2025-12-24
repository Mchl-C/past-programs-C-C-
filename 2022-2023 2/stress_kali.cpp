#include <iostream>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

const int MOD = 998244353;
const int MAXN = 100000;

vector<int> primes;
map<int, int> prime_factors;

// Function to calculate prime factors of a number
void primeFactorize(int n) {
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            prime_factors[i]++;
            n /= i;
        }
    }
    if (n > 1) {
        prime_factors[n]++;
    }
}

// Function to calculate modular inverse
long long modInverse(long long a, long long m) {
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;

    if (m == 1) return 0;

    while (a > 1) {
        q = a / m;
        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0) x1 += m0;

    return x1;
}

// Function to calculate nCr modulo MOD
long long nCr(int n, int r) {
    if (r == 0) return 1;
    long long num = 1, den = 1;

    for (int i = 0; i < r; i++) {
        num = (num * (n - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }

    return (num * modInverse(den, MOD)) % MOD;
}

int main() {
    int N, M;
    cin >> N;
    long long X = 1, Y = 1;

    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        X *= pow(A, B);
    }

    cin >> M;

    for (int i = 0; i < M; i++) {
        int C, D;
        cin >> C >> D;
        Y *= pow(C, D);
    }

    // Calculate prime factors of X and Y
    primeFactorize(X);
    primeFactorize(Y);

    long long result = 1;

    // For each prime factor, calculate the number of ways to choose its power
    for (auto factor : prime_factors) {
        int prime = factor.first;
        int power = factor.second;

        result = (result * nCr(N + power - 1, power)) % MOD;
    }

    cout << result << endl;

    return 0;
}
