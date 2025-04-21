#ifndef CREATOR_HPP
#define CREATOR_HPP

#include "Product.hpp"

class Creator
{
    public:
    virtual ~Creator() = default;
    virtual Product* CreateProduct();
    void doSomething();
};

#endif //CREATOR_HPP
