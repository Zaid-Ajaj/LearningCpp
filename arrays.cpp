#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

// helper function
void printLine(string msg) { 
    cout << msg << endl;
}

// helper functions
void print(string msg) { cout << msg; }

// returns the length of the array
int arrayLength(int numbers[]) {
    return sizeof(numbers) + 1;
}
// array as input
int sumOf(int numbers[]) {
    int sum = 0;
    // for-loop
    for(int i = 0; i < arrayLength(numbers); i++) {
        sum = sum + numbers[i];
    }
    return sum;
}

int product(int numbers[]) {
    int result = 1;
    for(int i = 0; i < arrayLength(numbers); i++) {
        result = result * numbers[i];
    }
    return result;
}


int main() 
{
    // inialize empty arrays with capacity of 2 elements
    int numbers[2];
    // assign values
    numbers[0] = 10;
    numbers[1] = 20;
    // get values and sum them
    int numberSum = numbers[0] + numbers[1];
    string output = "the numberSum is " + numberSum;
    printLine(output);

    // initilizing array with data
    int otherNumbers[5] = { 1, 2, 3, 4, 5 };
    int totalSum = sumOf(otherNumbers);

    cout << "Total sum is " << totalSum << endl;
    return 0;
}