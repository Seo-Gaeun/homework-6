#include <iostream>
#include <vector>
using namespace std;

#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "UI.h"

GraphicEditor::GraphicEditor() {
    cout << "그래픽 에디터입니다.\n";
    start();
}

void GraphicEditor::start(){
    while (true) {
        int n = UI::seleteMenu();
        switch (n) {
        case 1:
            n = UI::seleteShape();
            switch (n) {
            case 1:
                v.push_back(new Line());
                break;
            case 2:
                v.push_back(new Circle());
                break;
            case 3:
                v.push_back(new Rect());
                break;
            }
            break;
        case 2: {
            n = UI::seleteDelIndex();
            it = v.begin();
            Shape* tmp = *(it + n);
            v.erase(it + n);
            delete tmp;
            break;
        }
        case 3:
            UI::showAll(v, it);
            break;
        case 4:
            return;
        }
    }
};