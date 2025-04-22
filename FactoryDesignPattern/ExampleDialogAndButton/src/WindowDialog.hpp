#ifndef WINDOWDIALOG_HPP
#define WINDOWDIALOG_HPP

#include "Dialog.hpp"

class WindowDialog : public Dialog
{
    public:

    WindowDialog(int x, int y) : Dialog(x, y) {}
    Button* CreateButton() override;
};

#endif //WINDOWDIALOG_HPP