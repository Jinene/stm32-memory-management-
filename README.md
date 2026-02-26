# 🧠 STM32 Memory Management – Complete Guide & Practical Examples

A complete educational repository explaining **memory organization, linker scripts, stack/heap management, and optimization techniques** in STM32 microcontrollers.

This project is designed for embedded systems students and engineers who want to deeply understand how memory works inside STM32.

---

## 📌 Topics Covered

- STM32 Memory Architecture
- Flash vs SRAM
- Stack vs Heap
- Linker Script (.ld) Explanation
- Static vs Dynamic Allocation
- Memory Map Analysis
- Custom malloc implementation
- Memory Optimization Techniques
- Debugging HardFault caused by memory overflow

---

## 🏗 STM32 Memory Architecture Overview

Typical STM32 memory layout:

| Memory Type | Purpose |
|-------------|----------|
| Flash       | Stores program code (.text) |
| SRAM        | Stores variables (.data, .bss) |
| Stack       | Local variables & function calls |
| Heap        | Dynamic memory allocation |

Example (STM32F4):

- Flash: 512KB
- SRAM: 128KB

---

## 📂 Memory Sections Explained

### 🔹 .text
Stores executable code and constants.

### 🔹 .data
Initialized global/static variables.

### 🔹 .bss
Uninitialized global/static variables.

### 🔹 Stack
Used for:
- Local variables
- Function parameters
- Return addresses

### 🔹 Heap
Used for:
- malloc()
- calloc()
- realloc()

---

## 📜 Linker Script Explanation

The linker script defines how memory is organized.

Example:

```ld
MEMORY
{
  FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 512K
  RAM (rwx)  : ORIGIN = 0x20000000, LENGTH = 128K
}
```

It maps sections like:

```ld
.text : { *(.text*) } > FLASH
.data : { *(.data*) } > RAM
.bss  : { *(.bss*)  } > RAM
```

---

## 🧪 Example: Stack vs Heap

```c
int global_var = 10;      // .data
int uninitialized_var;    // .bss

void func() {
    int local_var = 5;    // Stack
    int *ptr = malloc(10 * sizeof(int)); // Heap
}
```

---

## 🚨 Common Memory Problems

- Stack overflow
- Heap fragmentation
- HardFault due to invalid access
- Using too much RAM
- Memory leaks

---

## 🔍 Debugging Tips

- Use `.map` file after compilation
- Monitor stack pointer in debugger
- Enable HardFault handler
- Check linker memory usage report

---

## 📊 Memory Optimization Techniques

- Use `const` for read-only data
- Avoid large local arrays
- Prefer static allocation in embedded systems
- Minimize dynamic memory usage
- Use `-Os` compiler optimization

---

## 🛠 Tools Used

- STM32CubeIDE
- ARM GCC
- OpenOCD
- STM32 ST-Link

---

## 🎯 Learning Objectives

After this repository, you will:

✔ Understand how STM32 memory is structured  
✔ Be able to modify linker scripts  
✔ Debug memory-related crashes  
✔ Optimize RAM usage in embedded systems  

---

## 📚 Recommended Study

- ARM Cortex-M Programming Manual
- STM32 Reference Manual
- Linker Script Documentation

---

## 👩‍💻 Author

Created for embedded systems learning and research.

---

## 📜 License

MIT License
