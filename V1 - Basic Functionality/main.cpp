#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string name;
    string surname;
    string fullName;

    cout << "Name: ";
    getline(cin, name);
    cout << endl;
    cout << "Surname: ";
    getline(cin, surname);

    fullName = name + " " + surname;
    cout << endl;
    cout << "The client is " << name + surname;

    return 0;
}