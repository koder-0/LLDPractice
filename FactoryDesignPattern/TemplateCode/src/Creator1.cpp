#include <iostream>
#include "Creator1.hpp"

using namespace std;

Product *Creator1::CreateProduct()
{
    cout << "CreateProduct of Creator1 is called. Creator1 creating Product1" << endl;
    return new Product1();
}