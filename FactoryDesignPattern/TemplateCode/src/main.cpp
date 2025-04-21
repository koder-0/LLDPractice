#include <iostream>
#include "Creator1.hpp"
#include "Creator2.hpp"
#include "Client.hpp"

using namespace std;

int main() 
{
    cout << endl << "******************** Factory Design Pattern Template Demo ********************" << endl;
    Creator *creator1 = new Creator1();
    Creator *creator2 = new Creator2();
    Client* client = new Client();
    client->SetCreator(creator1);
    client->Action();
    client->SetCreator(creator2);
    client->Action();
    cout << endl << "************************************* The End *********************************" << endl;
    return 0;
}