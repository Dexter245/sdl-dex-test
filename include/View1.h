#ifndef VIEW1_H_
#define VIEW1_H_

#include "View.h"
#include "Model1.h"
#include "Image.h"

class View1 : public dex::View {
private:
    Model1 *model;
    dex::Image background;

public:
    explicit View1(Model1 *model);
    ~View1(){}

    void render() override;
};

#endif