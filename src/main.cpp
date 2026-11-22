#include "core/vm.h"

int main() {
    std::vector<Instruction> ins;

    Program prg;

    ins.push_back({LI, 1, 20});
    ins.push_back({LI, 2, 6});

    ins.push_back({ADD, 3, 1, 2});
    ins.push_back({SUB, 4, 1, 2});
    ins.push_back({MUL, 5, 1, 2});
    ins.push_back({DIV, 6, 1, 2});
    ins.push_back({MOD, 7, 1, 2});
    ins.push_back({NEG, 8, 1});

    ins.push_back({PR, 3});
    ins.push_back({PR, 4});
    ins.push_back({PR, 5});
    ins.push_back({PR, 6});
    ins.push_back({PR, 7});
    ins.push_back({PR, 8});

    ins.push_back({STP});

    prg.code = ins;

    VM vm(prg);

    vm.run();

    return 0;
}
