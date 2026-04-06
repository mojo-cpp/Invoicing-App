#include <iostream>
#include <string>
#include <vector>

#include "Customer.h"

using namespace std;

int main()
{
    string name;
    string surname;
    string phone;
    string email;
    string description;

    // Prompt the user to fill out customer details.
    cout << "Please fill out customer details. Press the 'Enter' key to move on to the next item. For blank items just press the 'Enter' key. " << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << endl;
    cout << "Surname: ";
    getline(cin, surname);
    cout << endl;
    cout << "Phone Number: ";
    getline(cin, phone);
    cout << endl;
    cout << "Email: ";
    getline(cin, email);
    cout << endl;
    cout << "Description: ";
    getline(cin, description);
    cout << endl;

    Customer newCust(name, surname, phone, email, description);


    // // Vector to temporarily store user input of customer information.
    // vector<vector<string>> newInfo(1, vector<string>(5));

    // // Pack all the new customer information into the temporary info vector. This needs work
    // // because we're trying to pack a vector into what's supposed to be a vector of vectors I
    // // think. A class will work much better here but I want to get basic functionality and then
    // // try implementing a class.
    // newInfo[0] = {name, surname, phone, email, description};

    // cout << newInfo[0][0] << endl;

    // // Creating a storage vector for customer information.
    // vector<vector<string>> custInfo(1, vector<string>(5));
    // custInfo.at(0).at(0) = "Name";
    // custInfo.at(0).at(1) = "Surname";
    // custInfo.at(0).at(2) = "Phone";
    // custInfo.at(0).at(3) = "Email";
    // custInfo.at(0).at(4) = "Description";

    // // Trying to push (append) the temporary vector of information into the custInfo vector.
    // // Because the properties of newInfo will be written over everytime a new customer is created
    // // it doesnt matter that we choose the appropriate index (newInfo[x]). This may be a problem if
    // // someone wants to add multiple new customers in the same session (don't have to create a new
    // // customer, then exit the program and create a new customer again - maybe can make the index
    // // newInfo[newInfo.size() - 1] or something with .begin() or .end() or whatever. We'll experiment
    // // on the next commit. Perhaps should create a new branch for such endeavors. Next time now. Toodles.
    // custInfo.push_back(newInfo[0]);

    // // Print out the custInfo array.
    // // Should probably use a for each loop and iterators. Need to start implementing.
    // for (int i = 0; i < custInfo.size(); i++)
    // {
    //     for (int j = 0; j < custInfo[i].size(); j++)
    //     {
    //         cout << custInfo[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // for (int row : custInfo)
    // {
    //     for (int element : custInfo[row])
    //     {
    //         cout << endl;
    //     }
    // }

    // Saw on stack overflow that it needs to look like this. Need to understand it.
    // for (auto &row : custInfo)
    // {
    //     for (auto &lmnt : row)
    //     {
    //         cout << lmnt << " ";
    //     }
    //     cout << '\n';
    // }

    // Saw on geeksforgeeks that it can also look like this. Less clean.
    // for (auto i = custInfo.begin(); i != custInfo.end(); i++) // Makes sense as i is a pointer pointing to the first element and as long as it's not pointing to the last element it continues to iterate.
    // {
    //     for (auto j = i->begin(); j != i->end(); j++) // Makes less sense because I forgot the -> operator. Will come back to learn it and understand.
    //     {
    //         cout << *j << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}