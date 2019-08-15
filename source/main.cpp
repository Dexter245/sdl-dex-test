#include <iostream>
#include "Application.h"
#include "Model1.h"
#include "Controller1.h"
#include "View1.h"

int main(int argc, char **argv) {
    std::cout << std::endl << "main" << std::endl;

    dex::Application *app = &dex::Application::instance();

    Model1 *model1 = new Model1();
    Controller1 *controller1 = new Controller1(model1);
    View1 *view1 = new View1(*model1);

    app->setController(controller1);
    app->setView(view1);
    std::cout << "before start" << std::endl;
    app->start();
    std::cout << "after start" << std::endl;
    delete view1;
    delete controller1;
    delete model1;
}
