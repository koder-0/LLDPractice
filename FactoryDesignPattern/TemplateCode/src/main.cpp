#include <iostream>
#include "Creator1.hpp"
#include "Creator2.hpp"
#include "Client.hpp"

using namespace std;

int main() 
{
    Creator *creator1 = new Creator1();
    Creator *creator2 = new Creator2();
    Client* client = new Client();
    client->SetCreator(creator1);
    client->GetProduct()->commonMethod();
    client->SetCreator(creator2);
    client->GetProduct()->commonMethod();
    return 0;
}