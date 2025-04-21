#include <iostream>
#include "Client.hpp"
#include "Creator1.hpp"
#include "Creator2.hpp"

using namespace std;

unique_ptr<Client> Client::Create(int type)
{
    switch(type) {
        case 1 : {
            return unique_ptr<Client>(new Client(new Creator1()));
        }
        case 2 : {
            return unique_ptr<Client>(new Client(new Creator2()));
        }
        default : {
            cout << endl << "beep beep wrong Creator choice beep beep. There is no Creator" << type << endl;
            return nullptr;
        }
    }
}

void Client::Action()
{
    cout << endl << "Client Action" << endl;
    creatorObj->CreateProduct()->commonMethod();
}
