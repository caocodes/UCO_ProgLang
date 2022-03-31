#include "pasm_label.h"

PasmLabel::PasmLabel(string lbl, int addr, bool res) : labelStr(lbl), address(addr), resolved(res) {}

void PasmLabel::print(ostream& output) {
    output << labelStr << endl;
}