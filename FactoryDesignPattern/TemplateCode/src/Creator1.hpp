#ifndef CREATOR1_HPP
#define CREATOR1_HPP

#include "Creator.hpp"
#include "Product1.hpp"

class Creator1 : public Creator
{
    public:
    Product* CreateProduct() override;
};

#endif //CREATOR1_HPP