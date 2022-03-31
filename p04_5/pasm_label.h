#ifndef pasm_label_h
#define pasm_label_h

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <iomanip>
#include <vector>
#include "pasmtkn.h"

using namespace std;

class PasmLabel {
    public:
    string labelStr;

    private:
    int address;
    bool resolved;
    vector<int> refList;

    public:
        PasmLabel(string lbl = NULL, int addr = 0, bool res = false);
        void print(ostream& output);
        string getLabelStr();
        void addRef(int i);
};

#endif