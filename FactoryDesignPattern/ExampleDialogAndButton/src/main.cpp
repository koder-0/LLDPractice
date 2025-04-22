#include "Client.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
    ofstream logFile("logs/output.log");

    if(!logFile) {
        cerr << "failed to open output log file." << endl;
        return 1;
    }

    streambuf* coutBuf = cout.rdbuf();
    cout.rdbuf(logFile.rdbuf());

    cout << endl << "************ Factory Design Pattern Example Dialog and Button Demo ***********" << endl;

    auto client1 = Client::Create(DIALOG_WINDOW);
    if(client1 != nullptr) {
        client1->Action();
    }

    auto client2 = Client::Create(DIALOG_HTML);
    if(client2 != nullptr) {
        client2->Action();
    }

    auto client3 = Client::Create(DIALOG_END);
    if(client3 != nullptr) {
        client3->Action();
    }

    cout << endl << "************************************* The End *********************************" << endl;

    cout.rdbuf(coutBuf);
    return 0;
}