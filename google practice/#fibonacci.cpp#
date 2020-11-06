#include <iostream>

using namespace std;

int fibonacci(int n) {

    if(n <= 0) {
    return 0;
}
    else if (n == 1) {
        return 1;
    }   
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}


// another way
if(n > 2) {
    return fibonacci(n - 1) + fibonacci(n - 2);
}
else {
    // This is the equivalent of fibonacci(0) + fibonacci(1) = 0 + 1 = 1
    return 1;
}


Ternary Operators
// ? : Ternary Operator
return (n > 2) ? fibonacci(n - 1) + fibonacci(n - 2) : 1;



int main() {
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
