//
// Created by elim on 03/12/22.
//

#ifndef COMPOSITE_GRAPHIC_H
#define COMPOSITE_GRAPHIC_H


#include <iostream>

class Graphic {
protected:
    Graphic *parent;
public:
    virtual void Draw() {};
    virtual void Add(Graphic *g) {};
    virtual void Remove(Graphic *g) {};
    void SetParent(Graphic *p) {
        this->parent = p;
    };
};


#endif //COMPOSITE_GRAPHIC_H
