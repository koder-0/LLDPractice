#include <iostream>
#include "Client.hpp"

using namespace std;

void Client::SetCreator(Creator *obj)
{
    creatorObj = obj;
}

Product *Client::GetProduct()
{
    cout << "Client is just calling CreateProduct of Creator" << endl;
    return creatorObj->CreateProduct();
}

void Client::Action()
{
    cout << endl << "Client is blindly doing its action" << endl;
    GetProduct()->commonMethod();
}
