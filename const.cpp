#include <iostream>
using std::cout;
using std::endl;
using std::string;
namespace first{
    int x = 1;
}
namespace second{
    int x = 5;
}
int main(){
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    double radius = 10;
    double circumference = 2 * PI * radius;
    cout <<"circumference of circle is " <<circumference<<endl;
    //what are namespaces?
    //they allow you to give the same name to different entities as long as they belong to a separate namespace
    int x = 0; //note that x has already been used as a name outside main
    cout << "value of x in main " << x << '\n' << "value of x in first namespace " << first::x<<'\n'
    << "value of x in second namespace "<<second::x <<endl;
    return 0;

}