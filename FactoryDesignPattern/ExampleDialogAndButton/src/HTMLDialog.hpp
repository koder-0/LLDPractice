#ifndef HTMLDIALOG_HPP
#define HTMLDIALOG_HPP

#include "Dialog.hpp"

class HTMLDialog : public Dialog
{
    public:

    HTMLDialog(int x, int y) : Dialog(x, y) {}
    Button* CreateButton() override;
};

#endif //HTMLDIALOG_HPP