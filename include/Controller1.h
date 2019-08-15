#ifndef CONTROLLER1_H_
#define CONTROLLER1_H_

#include "Controller.h"
#include "Model1.h"
#include "Application.h"
#include "Vibration.h"
#include "Sixaxis.h"

class Controller1 : public dex::Controller {

private:
    Model1 *model;
    dex::Vibration vibration;
    dex::Sixaxis sixaxis;
    SDL_GameController *gameController;

    void handleEvents();

public:
    explicit Controller1(Model1 *model);

    ~Controller1() override;

    void update(float delta) override;

};


#endif