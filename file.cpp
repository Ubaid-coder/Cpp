#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string st = "This is the dynamic content";
    string st2;
    // Opening file using constructor and writing it
    // ofstream Write("sample.txt"); // Write operation
    // Write << st;

    //Opening file using constructor and reading it.
    ifstream readFile("sample.txt");
    getline(readFile, st2);
    cout << st2;

    return 0;
}