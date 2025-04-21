#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <memory>
#include "Creator.hpp"

using namespace std;

class Client 
{
    private:

    Creator* creatorObj;
    Client(Creator* obj) : creatorObj(obj) {}

    public:
    
    static unique_ptr<Client> Create(int type);
    void Action();

};

#endif //CLIENT_HPP