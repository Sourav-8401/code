// #include <iostream>
// #include <cmath>

// int main() {
//     double x = 2.0;
//     double result = exp(x);

//     std::cout << "e^" << x << " = " << result << std::endl;

//     return 0;
// }
 //Forming of upper term e; 1 + (x/1!) + (x*x/i_fact) + (x*x*x/3!)
        // upNum = upNum * x;
        // e = e + (upNum/i_fact);
        //____for exact value uncomment below line and comment above e line:_____
        // e = (2.718281828459045)*x;
#include <iostream>

double calculateExponential(double x, int n) {
    double result = 1.0;
    double term = 1.0;
    int i_fact = 1;

    for (int i = 1; i < n; ++i) {
        // term *= x / i;
        // result += term;
         term = term * x;
        i_fact = i_fact * i; 
        result = result + term/i_fact; 
    }

    return result;
}

int main() {
    double x = 4.0; // You can change the value of x as needed
    int n = 10;     // You can adjust the number of terms in the series

    double result = calculateExponential(x, n);

    std::cout << "e^" << x << " (approximated with " << n << " terms) = " << result << std::endl;

    return 0;
}
