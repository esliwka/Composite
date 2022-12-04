//
// Created by elim on 03/12/22.
//

#ifndef COMPOSITE_LINE_H
#define COMPOSITE_LINE_H


#include "Graphic.h"

class Line : public Graphic {
    void Draw() override {
        std::cout<<"Rysuje linię"<<std::endl;
    }
};


#endif //COMPOSITE_LINE_H
