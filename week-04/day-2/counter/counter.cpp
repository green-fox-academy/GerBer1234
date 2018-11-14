#include "counter.h"

Counter::Counter() {
    _num = 0;
    _inum = 0;
}

Counter::Counter(int num) {
    _num = num;
    _inum = num;
}

void Counter::add() {
    _num++;
}

void Counter::add(int x) {
    _num += x;
}

void Counter::reset() {
    _num = _inum;
}

int Counter::get() {
    return _num;
}