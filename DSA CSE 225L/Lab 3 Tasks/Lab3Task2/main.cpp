#include <iostream>
#include "complex.h"
using namespace std;

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    Complex sum = c1 + c2;
    Complex product = c1 * c2;
    bool notEqual = c1 != c2;

    cout << "Sum:" << endl;
    sum.Print();

    cout << "Product:" << endl;
    product.Print();

    cout << "Are c1 and c2 not equal? " << (notEqual ? "Yes" : "No") << endl;

    return 0;
}
