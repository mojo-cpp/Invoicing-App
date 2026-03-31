#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string name;
    string surname;
    string fullName;

    // vector<string> students(1);

    // cout << "Name: ";
    // getline(cin, name);
    // cout << endl;
    // cout << "Surname: ";
    // getline(cin, surname);

    // fullName = name + " " + surname;
    // cout << endl;
    // cout << "The client is " << fullName;

    // students[0] = fullName;

    // vector<int> num = {0, 1, 2, 3, 4};

    // for (int k = 0; k < num.size(); k++)
    // {
    //     cout << num[k] << endl;
    // }

    // Creating a storage vector for
    vector<vector<string>> userInfo(1, vector<string>(5));
    userInfo.at(0).at(0) = "Name";
    userInfo.at(0).at(1) = "Surname";
    userInfo.at(0).at(2) = "Phone";
    userInfo.at(0).at(3) = "Email";
    userInfo.at(0).at(4) = "Description";

    // cout << "Hello There " << endl;

    for (int i = 0; i < userInfo.size(); i++)
    {
        for (int j = 0; j < userInfo[i].size(); j++)
        {
            cout << userInfo[i][j] << " ";
        }
        cout << endl;
    }

    // vector<vector<vector<int>>> test(5, vector<vector<int>>(5, vector<int>(5)));
    // for (int i = 0; i < test.size(); i++)
    // {
    //     for (int j = 0; j < test[i].size(); j++)
    //     {
    //         for (int k = 0; k < test[i][j].size(); k++)
    //         {
    //             cout << test[i][j][k] << " ";
    //         }
    //         cout << endl;
    //     }
    //     cout << endl;
    // }

    return 0;
}