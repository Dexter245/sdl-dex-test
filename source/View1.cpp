#include "View1.h"
#include <iostream>


View1::View1(Model1 &model) :
    model(model),
    background("background.png"),
    font("DroidSansMono.ttf", 18)
{
    std::cout << "View1 constructor" << std::endl;
    std::cout << "background: " << &background << std::endl;
}

void View1::render() {
//    std::cout << "view1 render" << std::endl;
    background.draw(0, 0);
    font.renderText("fontTest", 50, 50);
    font.renderText("fontTest", 50, 150, {255, 0, 0, 255});
}
