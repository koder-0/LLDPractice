#include "WindowDialog.hpp"
#include "WindowButton.hpp"
#include <iostream>

using namespace std;

Button* WindowDialog::CreateButton() 
{
    cout << "window button is created." << endl;
    return new WindowButton(origx+10, origy+10);
}