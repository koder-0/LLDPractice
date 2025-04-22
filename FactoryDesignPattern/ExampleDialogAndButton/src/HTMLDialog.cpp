#include "HTMLDialog.hpp"
#include "HTMLButton.hpp"
#include <iostream>

using namespace std;

Button* HTMLDialog::CreateButton() 
{
    cout << "html button is created" << endl;
    return new HTMLButton(origx+10, origy+10);
}