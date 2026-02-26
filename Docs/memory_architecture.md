# STM32 Memory Architecture

STM32 microcontrollers use Harvard architecture:

- Separate instruction and data buses
- FLASH for code
- SRAM for runtime variables

Example STM32F4:

FLASH: 0x08000000
SRAM:  0x20000000

Memory regions:

| Region | Address Start | Purpose |
|--------|---------------|---------|
| FLASH  | 0x08000000    | Code |
| SRAM   | 0x20000000    | Data |
| PERIPH | 0x40000000    | Registers |
