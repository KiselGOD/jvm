# ISA

| # | Op | Operands | Effect |
|---|----|----------|--------|
| 0 | `STP` | | stop |
| 1 | `MV` | a b | `ra = rb` |
| 2 | `LI` | a imm | `ra = int(imm)` |
| 3 | `LF` | a bits | `ra = float` from raw bits |
| 4 | `LK` | a k | `ra = const[k]` |
| 5 | `JMP` | addr | `pc = addr` |
| 6 | `JZ` | a addr | if `ra == 0`: `pc = addr` |
| 7 | `JNZ` | a addr | if `ra != 0`: `pc = addr` |
| 8-13 | `ADD SUB MUL DIV MOD NEG` | a b c | `ra = rb op rc` on `int` (`NEG`: `ra = -rb`) |
| 14-19 | `FADD FSUB FMUL FDIV FMOD FNEG` | a b c | same on `float` |
| 20 | `I2F` | a b | `ra = float(rb)` |
| 21 | `F2I` | a b | `ra = int(rb)`, truncated |
| 22-24 | `EQ LT LE` | a b c | `ra = rb op rc` on `int` |
| 25-27 | `FEQ FLT FLE` | a b c | same on `float` |
| 28 | `IN` | a | read `int` into `ra` |
| 29 | `FIN` | a | read `float` into `ra` |
| 30 | `PR` | a | print `ra` |
