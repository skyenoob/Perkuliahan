#include <iostream>
using namespace std;


int main(){

    string nama = "Edward";
    string* ptr = &nama;

    cout << nama << endl;
    cout << &nama << endl;

    cout << *ptr << endl;
    *ptr = "Edward Pieters";

    cout << *ptr << endl;
    cout << nama << endl;
    return 0;
}