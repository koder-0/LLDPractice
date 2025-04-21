#include <iostream>
#include "Creator2.hpp"
#include "Product2.hpp"

using namespace std; 

Product *Creator2::CreateProduct()
{
    cout << "CreateProduct of Creator2 is called. Creator2 creating Product2" << endl;
    return new Product2();
}