#include <iostream>
#include <vector>
using namespace std;

#include "UI.h"

int UI::seleteMenu() {
    int n;
    cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
    cin >> n;
    return n;
}

int UI::seleteShape() {
    int n;
    cout << "��:1, ��:2, �簢��:3 >> ";
    cin >> n;
    return n;
}

int UI::seleteDelIndex(){
    int n;
    cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
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
