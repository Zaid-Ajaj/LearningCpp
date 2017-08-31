// Read input number from user and calculate the factorial
#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {
    int result = 1; 
    for(int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main()
{
    cout << "Enter a number: ";
    string input = "";
    // read a number from keyboard and store value in 'input'
    getline(cin, input);

    // check whether the input string is empty
    // then the used did not provide any input
    if (input.empty()) {
        cout << "You did not enter anything, closing...";
        return 0;
    }
    
    // stoi(input) in C++ = int.Parse(input) in C#
    int inputInteger = stoi(input);
    int inputFactorial = factorial(inputInteger);

    // print out the result
    cout << "The factorial of " << inputInteger << " is " << inputFactorial << endl;
    return 0;
}