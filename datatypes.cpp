#include<iostream>
using namespace std;
int main(){
    int x;
    x = 5;
    int y = 6;
    int sum = x+y;

    cout<< x <<endl;
    cout<< y <<'\n';
    cout<< sum <<'\n';

    string name = "Manav";
    cout << "your name is "<< name << '\n';
    cout << "you are " << sum << " years old" << endl;
    bool student;
    cout << "are you a student? " << endl << "enter 1 if true and 0 if false" << endl;
    cin >> student;
    if (student == true){
    cout << "you are a student " << endl;
    }
    else{
        cout<< "you are not a student" << '\n';
    }
    return 0;
}
