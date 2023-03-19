#include <iostream>

using namespace std;

template <class CustomClass>

class Local
{
public:
    explicit Local(CustomClass* myClass) : custom(myClass) {}

    CustomClass* custom;
};

class Merchant
{
public:
    string name;
    string code;
    Merchant(string theName, string theCode)
    {
        name = theName;
        code = theCode;
    }
};

int main()
{

    Merchant merchant = Merchant("culqi", "9999999");
    Local<Merchant> local = Local<Merchant>(&merchant);

    cout << merchant.name << " " << merchant.code << endl;
    cout << "inherits " << local.custom->name << " " << merchant.code << endl;
    
    return 0;
}