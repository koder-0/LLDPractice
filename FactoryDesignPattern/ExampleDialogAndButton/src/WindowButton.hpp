#ifndef WINDOWBUTTON_HPP
#define WINDOWBUTTON_HPP

#include "Button.hpp"

class WindowButton : public Button
{
    public:

    WindowButton(int x, int y) : Button(x, y) {}
    void OnClick();
    void render();
};

#endif //WINDOWBUTTON_HPP