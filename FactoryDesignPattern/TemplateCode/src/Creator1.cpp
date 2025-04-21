#include "Creator1.hpp"

Product *Creator1::CreateProduct()
{
    return new Product1();
}