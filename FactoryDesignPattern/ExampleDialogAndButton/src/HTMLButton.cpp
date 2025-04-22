#include "HTMLButton.hpp"
#include <iostream>

using namespace std;

void HTMLButton::OnClick() 
{
    cout << "html button click action is defined" << endl;
}

void HTMLButton::render() 
{
    cout << "html button got rendered" << endl;
}