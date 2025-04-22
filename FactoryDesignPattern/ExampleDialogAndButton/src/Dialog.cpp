#include <iostream>
#include "Dialog.hpp"

using namespace std;

void Dialog::render()
{
    okButton = CreateButton();
    okButton->OnClick();
    okButton->render();
    cout << "dialog got rendered" << endl;
}

Button* Dialog::CreateButton() 
{
    cout << "default button is created." << endl;
    return nullptr;
}