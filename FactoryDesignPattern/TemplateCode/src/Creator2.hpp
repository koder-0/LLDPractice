#ifndef CREATOR2_HPP
#define CREATOR2_HPP

#include "Creator.hpp"

class Creator2 : public Creator
{
    public:
    Product* CreateProduct() override;
};

#endif //CREATOR2_HPP