#include "Controller1.h"
#include <iostream>
#include <Application.h>
#include <Controller1.h>


Controller1::Controller1(Model1 *model) :
        model(model){
    gameController = SDL_GameControllerOpen(0);
}

Controller1::~Controller1() {

}

void Controller1::update(float delta) {

//    std::cout << "controller1 update" << std::endl;

    handleEvents();

    SDL_GameControllerUpdate();
    int x1 = SDL_GameControllerGetAxis(gameController, SDL_CONTROLLER_AXIS_LEFTX);
    std::cout << "x1: " << x1 << std::endl;

    //test vibration
//    dex::Vibration::VibrationData vibrationData;
//    vibrationData.ampLow = 0.2f;
//    vibrationData.ampHigh = 0.2f;
//    vibration.setVibration(vibrationData);
//    vibration.stopVibration();

    //test sixaxis
//    sixaxis.update();
//    dex::Sixaxis::InputVector accel = sixaxis.getAccelerometer();
//    std::cout << "accel x: " << accel.x << ", y: " << accel.y << ", z: " << accel.z << std::endl;


}

void Controller1::handleEvents() {

    SDL_Event e;
    while(SDL_PollEvent(&e)){
        if(e.type == SDL_KEYDOWN){
            std::cout << "keydown" << std::endl;
            if(e.key.keysym.sym == SDLK_ESCAPE){
                std::cout << "escape pressed" << std::endl;
                dex::Application::instance().end();
            }
        }else if(e.type == SDL_CONTROLLERBUTTONDOWN){
            std::cout << "buttondown" << std::endl;
            dex::Application::instance().end();
        }
    }

}


