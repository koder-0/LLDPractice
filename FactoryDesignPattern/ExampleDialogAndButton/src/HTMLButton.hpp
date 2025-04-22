#ifndef HTMLBUTTON_HPP
#define HTMLBUTTON_HPP

#include "Button.hpp"

class HTMLButton : public Button
{

    public:

    HTMLButton(int x, int y) : Button(x, y) {}
    void OnClick() override;
    void render() override;
};

#endif //HTMLBUTTON_HPP