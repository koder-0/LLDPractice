#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Creator.hpp"

class Client 
{
    private:
    Creator* creatorObj;
    public:
    void SetCreator(Creator* obj); 
    Product* GetProduct();

};

#endif //CLIENT_HPP