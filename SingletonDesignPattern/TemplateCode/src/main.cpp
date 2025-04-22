#include "Client.hpp"
#include <iostream>
#include <fstream>

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

    cout << endl << "****************** Singleton Design Pattern Template Demo ********************" << endl;

    auto client1 = new Client();

    if(client1 != nullptr) {
        client1->Action("client1");
    }

    auto client2 = new Client();

    if(client2 != nullptr) {
        client2->Action("client2");
    }

    auto client3 = new Client();

    if(client3 != nullptr) {
        client3->Action("client3");
    }

    cout << endl << "************************************* The End *********************************" << endl;

    cout.rdbuf(coutBuf);
    return 0;
}