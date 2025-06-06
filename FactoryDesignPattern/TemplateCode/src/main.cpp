#include <iostream>
#include <fstream>
#include "Client.hpp"

using namespace std;

int main() 
{
    std::ofstream logFile("logs/output.log");

    if(!logFile) {
        std::cerr << "failed to open output log file." << endl;
        return 1;
    }

    streambuf* coutBuf = cout.rdbuf();
    cout.rdbuf(logFile.rdbuf());

    cout << endl << "******************** Factory Design Pattern Template Demo ********************" << endl;

    auto client1 = Client::Create(1);

    if(client1 != nullptr) {
        client1->Action();
    }

    auto client2 = Client::Create(2);

    if(client2 != nullptr) {
        client2->Action();
    }

    auto client3 = Client::Create(3);

    if(client3 != nullptr) {
        client3->Action();
    }

    cout << endl << "************************************* The End *********************************" << endl;

    cout.rdbuf(coutBuf);
    return 0;
}