//
// Created by elim on 03/12/22.
//

#ifndef COMPOSITE_TEXT_H
#define COMPOSITE_TEXT_H


#include "Graphic.h"

class Text : public Graphic {
    void Draw() override {
        std::cout<<"Rysuje text"<<std::endl;
    }
};


#endif //COMPOSITE_TEXT_H
