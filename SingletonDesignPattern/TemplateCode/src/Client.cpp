#include "Client.hpp"
#include <iostream>

using namespace std;

void Client::Action(const string& s)
{
    cout << endl << "Client Action" << endl;
    Singleton* inst = Singleton::GetInstance(s);
    inst->DoSomeTask();
}