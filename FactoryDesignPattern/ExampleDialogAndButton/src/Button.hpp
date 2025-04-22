#ifndef BUTTON_HPP
#define BUTTON_HPP

class Button
{
    protected:

    int origx, origy;

    public:
    
    Button(int x, int y) : origx(x), origy(y) {}
    virtual ~Button() = default;
    virtual void OnClick();
    virtual void render();
};

#endif //BUTTON_HPP