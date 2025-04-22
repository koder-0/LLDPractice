#include "Client.hpp"
#include "WindowDialog.hpp"
#include "HTMLDialog.hpp"

unique_ptr<Client> Client::Create(DialogTypeE type) {
    switch(type) {
        case DIALOG_WINDOW : {
            return unique_ptr<Client>(new Client(new WindowDialog(0, 0)));
        }
        case DIALOG_HTML : {
            return unique_ptr<Client>(new Client(new HTMLDialog(0, 0)));
        }
        default : {
            cout << endl << "beep beep wrong dialog choice" << endl;
            return nullptr;
        }
    }
}

void Client::Action() 
{
    cout << endl << "Client Action" << endl;
    dialog->render();
}
