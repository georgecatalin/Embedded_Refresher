# Embedded_Refresher

A comprehensive collection of embedded C programming examples and projects for STM32 microcontrollers. This repository serves as a learning resource and practical reference for embedded systems development.

## 🎯 Purpose

This repository provides hands-on code examples and practice projects for embedded C programming, specifically targeting STM32 microcontrollers. It's designed for developers looking to refresh their embedded programming skills or learn embedded systems from scratch.

## 🛠️ Hardware & Tools

- **Microcontroller**: STM32F429ZI (ARM Cortex-M4)
- **Development Board**: STM32 Nucleo-144 or similar
- **IDE**: STM32CubeIDE
- **Debugger**: SWD/JTAG with ITM (Instrumentation Trace Macrocell) support for printf debugging

## 📚 Course Material

This repository follows the course:
- **Course Name**: Microcontroller Embedded C Programming: Absolute Beginners
- **URL**: [Udemy Course Link](https://www.udemy.com/course/microcontroller-embedded-c-programming/)

## 📂 Repository Structure

```
Embedded_Refresher/
├── Microcontroller Embedded C Programming Absolute Beginners/
│   ├── 000_HelloWorld/          # Basic "Hello World" via ITM
│   ├── 000_First_Program/       # First LED control program
│   ├── 001_SizeOf/              # Data type sizes on target hardware
│   ├── 001_LED_Toggle/          # LED toggling with GPIO
│   └── 003_Abstratizations_through_Structs/  # Register abstraction using structs
└── README.md
```

## 🚀 Projects Overview

### 000_HelloWorld
Basic program demonstrating printf functionality using ARM Cortex-M ITM (Instrumentation Trace Macrocell) for debugging output.

**Key Concepts**:
- ITM-based printf implementation
- Semi-hosting alternative
- Basic project structure

### 000_First_Program
Introduction to GPIO control by lighting up LEDs on the STM32 board.

**Hardware Used**:
- Blue LED: PB7 (Pin 137)
- Red LED: PB14 (Pin 75)

### 001_SizeOf
Demonstrates the sizes of various data types on the STM32 platform.

**Topics Covered**:
- Platform-specific data type sizes
- Memory footprint analysis
- Integer types: char, short, int, long, long long
- Floating point types: float, double

### 001_LED_Toggle
GPIO manipulation to toggle LEDs using direct register access.

**Key Concepts**:
- GPIO configuration
- Port manipulation
- Clock enabling (AHB1ENR)
- Basic embedded delay loops

### 003_Abstratizations_through_Structs
Advanced topic showing how to abstract hardware registers using C structures.

**Key Concepts**:
- Register abstraction using structs
- Memory-mapped peripherals
- Type-safe hardware access
- Improved code readability and maintainability

## 🔧 Building and Running

### Prerequisites
1. Install [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html)
2. Connect your STM32 board via USB
3. Ensure ST-Link drivers are installed

### Build Steps
1. Open STM32CubeIDE
2. Import the desired project from the repository
3. Build the project (Ctrl+B or Project → Build All)
4. Flash to the board (Run → Debug or F11)

### Debugging with ITM
To see printf output via ITM:
1. Enable SWV ITM Data Console in STM32CubeIDE
2. Configure ITM Stimulus Port 0
3. Set core clock frequency to match your MCU
4. Start trace

## 📖 Key Learning Topics

- ✅ Bare-metal embedded C programming
- ✅ Direct register manipulation
- ✅ GPIO configuration and control
- ✅ Clock system configuration (RCC)
- ✅ Memory-mapped I/O
- ✅ Structure-based hardware abstraction
- ✅ Linker scripts and memory layout
- ✅ ITM debugging and printf redirection
- ✅ ARM Cortex-M architecture basics

## 🔍 Code Style & Practices

- **Low-level programming**: Direct register access for educational purposes
- **Hardware abstraction**: Progressive introduction of abstractions
- **Documentation**: Inline comments explaining hardware concepts
- **Standard compliance**: C99/C11 compatible code

## 📝 Notes

- Projects use RAM-based linker scripts (STM32F429ZITX_RAM.ld) for faster development cycles
- ITM printf implementation provided in `syscalls.c` for debugging
- FPU initialization warnings are expected and can be ignored for basic examples

## 🤝 Contributing

Feel free to:
- Report issues or bugs
- Suggest improvements
- Add new examples
- Improve documentation

## 📜 License

This code follows the STM32 licensing model. Individual files contain license headers where applicable.

## 🎓 Learning Path

**Recommended order**:
1. Start with `000_HelloWorld` - Get familiar with the toolchain
2. Move to `000_First_Program` - Understand basic GPIO
3. Try `001_SizeOf` - Learn about data types
4. Practice with `001_LED_Toggle` - Master GPIO control
5. Advanced: `003_Abstratizations_through_Structs` - Learn proper abstractions

## 📚 Additional Resources

- [STM32F429 Reference Manual](https://www.st.com/resource/en/reference_manual/dm00031020.pdf)
- [STM32F429 Datasheet](https://www.st.com/resource/en/datasheet/stm32f429zi.pdf)
- [ARM Cortex-M4 Technical Reference Manual](https://developer.arm.com/documentation/100166/0001)

## 🔖 Tags

`embedded-systems` `stm32` `arm-cortex-m4` `bare-metal` `c-programming` `microcontroller` `gpio` `embedded-c` `stm32cubeide`

---

**Happy Coding! 🚀**
