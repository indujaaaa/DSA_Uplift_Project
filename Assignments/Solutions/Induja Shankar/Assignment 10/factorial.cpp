#include <iostream>
using namespace std;

long long int factorial(int N){
       if (N <= 1) {
           return 1;
       } 
       return N * factorial(N - 1);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
    
    return 0;
}
