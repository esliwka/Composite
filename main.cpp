#include <iostream>
#include "Picture.h"
#include "Line.h"
#include "Rectangle.h"
#include "Text.h"

int main() {
    Line *l1 = new Line();
    Line *l2 = new Line();
    Line *l3 = new Line();
    Rectangle *r1 = new Rectangle();
    Rectangle *r2 = new Rectangle();
    Text *t1 = new Text();
    Picture *p1 = new Picture();
    Picture *p2 = new Picture();


    p1->Add(l1);
    p1->Add(r1);
    p1->Add(p2);
    p1->Add(l2);

    p2->Add(t1);
    p2->Add(l3);
    p2->Add(r2);

    p1->Draw();

    return 0;
}
