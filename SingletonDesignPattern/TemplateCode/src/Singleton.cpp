#include "Singleton.hpp"
#include <iostream>

using namespace std;

Singleton* Singleton::singleton{nullptr};
mutex Singleton::mutexKey;

Singleton* Singleton::GetInstance(const string& s)
{
    lock_guard<mutex> lock(mutexKey);
    if(singleton == nullptr) {
        singleton = new Singleton(s);
        cout << "new singleton object created: " << singleton->value << endl;
    }
    else {
        cout << "old singleton object used: " << singleton->value << endl;
    }
    return singleton;
}

void Singleton::DoSomeTask() 
{
    cout << "task is done" << endl;
}