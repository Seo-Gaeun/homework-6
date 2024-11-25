#ifndef UI_H
#define UI_H

#include "Shape.h"

class UI {
public:
    static int seleteMenu();
    static int seleteShape();
    static int seleteDelIndex();
    static void showAll(vector<Shape*>& v, vector<Shape*>::iterator& it);
};

#endif