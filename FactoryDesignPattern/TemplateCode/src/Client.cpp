#include "Client.hpp"

void Client::SetCreator(Creator *obj)
{
    creatorObj = obj;
}

Product *Client::GetProduct()
{
    return creatorObj->CreateProduct();
}