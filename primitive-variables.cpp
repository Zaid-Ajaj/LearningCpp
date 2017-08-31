#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;
int add(int x, int y)
{
    return x + y;
}

int main() 
{
    cout << "Hello World" << endl;
    const double pi = 3.1415;
    char letter = 'A';
    bool isReactive = false;
    int age = 20;
    cout << "I am " << age << " years old" << endl;
    cout << "Sum of 20 and 40 is " << add(20, 40) << endl;
    return 0;
}