//
// Created by elim on 03/12/22.
//

#ifndef COMPOSITE_RECTANGLE_H
#define COMPOSITE_RECTANGLE_H


#include "Graphic.h"

class Rectangle : public Graphic {
    void Draw() override {
        std::cout<<"Rysuje prostokąt"<<std::endl;
    }
};


#endif //COMPOSITE_RECTANGLE_H
