//
// Created by elim on 03/12/22.
//

#ifndef COMPOSITE_PICTURE_H
#define COMPOSITE_PICTURE_H


#include <algorithm>
#include <list>
#include "Graphic.h"

class Picture : public Graphic {
    std::list<Graphic *> children;
public:
    void Draw() override {
        for(Graphic *g : children)
            g->Draw();

        /* możesz zamiast tego dać tu
         * std::for_each(children.begin(), children.end(), [](Graphic *g) { g->Draw(); });
         * albo
         * for(std::list<T>::iterator it = children.begin(); it != children.end(); ++it) {
         *      it->Draw();
         * }
         * żeby się nie pluł o plagiat
         */
    }
    void Add(Graphic *g) override {
        this->children.push_back(g);
    }
    void Remove(Graphic *g) override {
        this->children.remove(g);
        g->SetParent(nullptr);
    }
    void GetChild(int i) {
        if (children.size() < i)
            std::cout<<"jest tyle dzieci"<<std::endl;
        else
            std::cout<<"nie ma tyle dzieci"<<std::endl;
    };
};


#endif //COMPOSITE_PICTURE_H
