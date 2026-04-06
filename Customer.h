#include <string>
#include <iostream> 

using namespace std;

class Customer
{
    public: 
    // Creates a new customer with all the following fields. 
    Customer(string custName = "-mt", string custSName = "-mt", string custPhone = "-mt", string custEmail = "-mt", string custDesc = "-mt")
    {
        name = custName;
        sName = custSName;
        phone = custPhone;
        email = custEmail;
        desc = custDesc;

        (custName == "") ? name = "-mt" : name = custName;
        (custSName == "") ? sName = "-mt" : sName = custName;
        (custPhone == "") ? phone = "-mt" : phone = custPhone;
        (custEmail == "") ? email = "-mt" : email = custEmail;
        (custDesc == "") ? desc = "-mt" : desc = custDesc;

        cout << "Your customer has been created and recorded!" << '\n';
        cout << "Name: " << name << '\n' << "Surname: " << sName << '\n' << "Email: " << email << '\n' << "Phone: " << phone << '\n' << "Description: " << desc << '\n';
    }

    // We now need a function that users can use for
    // 1. Storing 2. Accessing 3. Editing 4. List of all 5. Check if exists 6. Find info of specific
    // May have to use enums to ensure that the user doesn't input incorrect information. 

    private: 
        string name;
        string sName;
        string email;
        string phone;
        string desc;

};