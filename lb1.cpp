// === Begin3 ===

#include <iostream>

using namespace std;

int main() {
    double a, b, S, P;

    cout << "Введіть сторону a: ";
    cin >> a;

    cout << "Введіть сторону b: ";
    cin >> b;

    S = a * b;
    P = 2 * (a + b);

    cout << "Площа (S) = " << S << endl;
    cout << "Периметр (P) = " << P << endl;

    return 0;
}

// === Begin4 ===

#include <iostream>

int main() {
    double d, L;

    const double PI = 3.14;

    std::cout << "d: ";
    std::cin >> d;

    L = PI * d;

    std::cout << "(L) = " << L << std::endl;

    return 0;
}

// === Begin45 ===

#include <iostream>

int main() {
    double S, t, V;

    std::cout << "S: ";
    std::cin >> S;
    
    std::cout << "t: ";
    std::cin >> t;

    if (t == 0) {
        std::cout << "Error: t = 0!" << std::endl;
    } else {
        
        V = S / t;
        std::cout << "(V) = " << V << std::endl;
    }

    return 0;
}
