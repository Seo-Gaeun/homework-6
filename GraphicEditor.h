#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include "Shape.h"

class GraphicEditor {
    vector<Shape*> v;
    vector<Shape*>::iterator it;

public:
    GraphicEditor();
    void start();
};

#endif