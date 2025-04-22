#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "Dialog.hpp"
#include <memory>
#include <iostream>

using namespace std;

enum DialogTypeE
{
    DIALOG_WINDOW,
    DIALOG_HTML,
    DIALOG_END
};

class Client
{
    private:

    Dialog* dialog;
    Client(Dialog* d) : dialog(d) {} 

    public:
    static unique_ptr<Client> Create(DialogTypeE type);
    void Action();
};

#endif //CLIENT_HPP