#include "Controller1.h"
#include <iostream>
#include <Application.h>
#include <Controller1.h>
#include "Event.h"
#include "EventListener.h"


Controller1::Controller1(Model1 *model) :
        model(model),
        inputEventHandler(){
    dex::Application::instance().getEventHandler().addEventListener(*this);
    gameController = SDL_GameControllerOpen(0);
}

Controller1::~Controller1() {

}

void Controller1::update(float delta) {

    inputEventHandler.update();

    handleEvents();

    SDL_GameControllerUpdate();
    int x1 = SDL_GameControllerGetAxis(gameController, SDL_CONTROLLER_AXIS_LEFTX);
    std::cout << "x1: " << x1 << std::endl;

}

void Controller1::handleEvents() {
    while (hasEvent()) {
        dex::Event e = getEvent();
        std::cout << "event type: " << e.getType() << ", name: " << e.getName() << std::endl;
        dex::Application::instance().end();
    }

}


