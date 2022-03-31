#include "pasm_label.h"

PasmLabel::PasmLabel(string lbl, int addr, bool res) : labelStr(lbl), address(addr), resolved(res) {}

void PasmLabel::print(ostream& output) {
    output << setw(8) << left << setfill(' ') << labelStr;
    output << setw(10) << left << setfill(' ') << address;
    output << setw(10) << boolalpha << left << setfill(' ') <<  resolved;
    output << dec;
    for(int ref: refList) {
        output << ref << ", ";
    }
    output << endl;
}

string PasmLabel::getLabelStr() {
    return labelStr;
}
void PasmLabel::addRef(int i) {
  refList.push_back(i);
}