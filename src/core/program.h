#pragma once

#include <cstdint>
#include <vector>

#include "core/opcodes.h"
#include "core/value.h"

struct Instruction {
  Opcode op;
  int64_t a = 0;
  int64_t b = 0;
  int64_t c = 0;
};

struct Program {
  std::vector<Instruction> code;
  std::vector<Value> constants;
};
