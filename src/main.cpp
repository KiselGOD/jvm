#include "core/vm.h"

int main() {
    std::vector<Instruction> ins;

    Program prg;

    ins.push_back({LI, 1, 2});
    ins.push_back({LI, 2, 3});
    ins.push_back({ADD, 3, 1, 2});
    ins.push_back({PR, 3});

    prg.code = ins;

    VM vm(prg);

    vm.run();

    return 0;
}
