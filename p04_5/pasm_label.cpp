#include "pasm_label.h"

PasmLabel::PasmLabel(char *lbl, int addr, bool res) : label(lbl), address(addr), resolved(res) {}

void PasmLabel::print(ostream& output) {
    output << label << endl;
}