
# Easy C++ Development and Setup for Dummies

## 1. Install Core Toolchain

Open your terminal and run the following commands to update your package list and install the core toolchain:

```bash
sudo apt update
sudo apt install build-essential
```

**What is included in `build-essential`?**
- `g++`: The GNU C++ compiler
- `gcc`: The GNU C compiler
- `make`: A tool to control the generation of executables
- `libc6-dev`: The standard C library development files

---

## 2. Recommended Build & Debugging Tools

While `build-essential` gets you started, most professional projects require a more modern build system and a debugger:

- **CMake**: The industry-standard tool for managing the build process in a compiler-independent manner.
	```bash
	sudo apt install cmake
	```
- **GDB**: The GNU Debugger, essential for stepping through your code and finding bugs.
	```bash
	sudo apt install gdb
	```
- **Clang/LLVM**: A popular alternative to GCC that often provides more user-friendly error messages.
	```bash
	sudo apt install clang
	```

---

## 3. Productivity & Analysis Tools

To make your life easier as a developer, you might want to install these utilities:

- **Git**: For version control.
	```bash
	sudo apt install git
	```
- **Valgrind**: Excellent for detecting memory leaks and memory management bugs.
	```bash
	sudo apt install valgrind
	```
- **Ninja**: A small build system focused on speed, often used as a faster backend for CMake.
	```bash
	sudo apt install ninja-build
	```