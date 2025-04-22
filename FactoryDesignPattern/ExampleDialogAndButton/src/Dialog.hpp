#ifndef DIALOG_HPP
#define DIALOG_HPP

#include "Button.hpp"

class Dialog
{
    protected:

    Button* okButton;
    int origx, origy;

    public:

    Dialog(int x, int y) : origx(x), origy(y) {}
    virtual ~Dialog() = default;
    virtual Button* CreateButton();
    void render();

};

#endif //DIALOG_HPP