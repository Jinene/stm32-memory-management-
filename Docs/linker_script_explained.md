# Linker Script Explained

The linker script defines where sections go in memory.

Example:

MEMORY
{
  FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 512K
  RAM (rwx)  : ORIGIN = 0x20000000, LENGTH = 128K
}

.text  → FLASH
.data  → RAM
.bss   → RAM

Without this file, the compiler does not know
where to place variables or code.
