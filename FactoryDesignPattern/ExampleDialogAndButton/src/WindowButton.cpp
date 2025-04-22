#include "WindowButton.hpp"
#include <iostream>

using namespace std;

void WindowButton::OnClick() 
{
    cout << "window button click action is defined" << endl;
}

void WindowButton::render() 
{
    cout << "window button got rendered" << endl;
}