#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

namespace first{
    double PI = 3.14159;
    int radius = 100;
    double circumference = 2 * PI * radius;
    string laugh = "lmao";
}
int main(){
    const double PI = 3.14159;
    int radius = 10;
    double circumference = 2 * PI * radius;
    cout << circumference << '\n' <<first::circumference << endl;
    string laugh ="lol";
    cout << laugh << '\n' << first::laugh << endl;
    return 0;
}