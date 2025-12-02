#include <iostream>
using namespace std;

int fibonaci(int n){
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonaci(n - 1) + fibonaci(n - 2);
}

int main(){
    int n = 5;
    int result = fibonaci(n);
    cout << "The " << n << "th Fibonacci number is: " << result << endl;
    return 0;

}