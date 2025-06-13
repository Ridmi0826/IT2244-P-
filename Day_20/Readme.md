# Shared Memory Communication in C

This project demonstrates **inter-process communication (IPC)** using **shared memory** via `mmap()` in a C program. The example shows how a **parent and child process** can communicate using a memory region they both map into their address space.

## How It Works

- `mmap()` is used to allocate a memory region that is:
  - Shared between processes (`MAP_SHARED`)
  - Anonymous (not backed by a file) (`MAP_ANONYMOUS`)
- The program then creates a child process using `fork()`.
- The **child process** writes a message to the shared memory.
- The **parent process** waits for the child to finish using `wait()` and then reads the message from the same memory region.

## Code Output

```bash
Child wrote: Hello from child!
Parent read: Hello from child!
```
## How to Compile
```bash
gcc -o shared_memory shared_memory.c
```
## How to Run
```bash
./shared_memory
```
