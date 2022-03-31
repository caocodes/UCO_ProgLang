#include "pasm_label.h"

PasmLabel::PasmLabel(string lbl, int addr, bool res) : labelStr(lbl), address(addr), resolved(res) {}

void PasmLabel::print(ostream& output) {
    output << labelStr << endl;
}

string PasmLabel::getLabelStr() {
    return labelStr;
}
void PasmLabel::addRef(int i) {
  refList.push_back(i);
}