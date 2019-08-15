#include "View1.h"
#include <iostream>


View1::View1(Model1 *model) :
    model(model),
    background("background.png")
{
    std::cout << "View1 constructor" << std::endl;
//    this->model = model;
//    this->background = new dex::Image("background.png");
}

void View1::render() {
//    std::cout << "View1::render" << std::endl;
    background.draw(0, 0);
}
