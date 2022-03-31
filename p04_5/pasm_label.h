#ifndef pasm_label_h
#define pasm_label_h

#include <iostream>
#include <fstream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include "pasmtkn.h"

using namespace std;

class PasmLabel {
    char* label;
    int address;
    bool resolved;
    vector<int> refList;

    public:
        PasmLabel(char* lbl = NULL, int addr = 0, bool res = false);
        void print(ostream& output); 
};

#endif