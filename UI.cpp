#include <iostream>
#include <vector>
using namespace std;

#include "UI.h"

int UI::seleteMenu() {
    int n;
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    cin >> n;
    return n;
}

int UI::seleteShape() {
    int n;
    cout << "선:1, 원:2, 사각형:3 >> ";
    cin >> n;
    return n;
}

int UI::seleteDelIndex(){
    int n;
    cout << "삭제하고자 하는 도형의 인덱스 >> ";
    cin >> n;
    return n;
}

void UI::showAll(vector<Shape*>& v, vector<Shape*>::iterator& it) {
    int i = 0;
    for (it = v.begin(); it != v.end(); it++, i++) {
        cout << i << ": ";
        v.at(i)->paint();
    }
}
