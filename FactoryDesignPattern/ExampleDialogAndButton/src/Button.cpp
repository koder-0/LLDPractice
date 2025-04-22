#include <iostream>
#include "Button.hpp"

using namespace std;

void Button::OnClick() 
{
    cout << "Button clicked without an action" << endl;
}

void Button::render() 
{
    cout << "default button is rendered" << endl;
}