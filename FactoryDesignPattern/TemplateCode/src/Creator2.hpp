#ifndef CREATOR2_HPP
#define CREATOR2_HPP

#include "Creator.hpp"
#include "Product2.hpp"

class Creator2 : public Creator
{
    public:
    Product* CreateProduct() override;
};

#endif //CREATOR2_HPP