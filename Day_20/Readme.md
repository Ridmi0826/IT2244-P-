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


# Shared Memory IPC using System V in C

This project demonstrates **inter-process communication (IPC)** using **System V shared memory** in C. It consists of two programs:

- `writer.c`: Writes user input to shared memory.
- `reader.c`: Reads the data from the shared memory.

## How It Works

1. A **shared memory segment** is created using `shmget()`.
2. Both programs use `ftok()` to generate a common key (`shmfile`, `115`).
3. The `writer` attaches to the segment using `shmat()` and writes user input.
4. The `reader` attaches to the same segment, reads the data, and then deletes the segment using `shmctl()`.

## Files

- `writer.c`: Writes to shared memory.
- `reader.c`: Reads from shared memory and removes it.

## Compilation

```bash
gcc -o writer writer.c
gcc -o reader reader.c
```
## Usage
Run the writer:

```bash
./writer
```
Enter a message when prompted.

Run the reader (in a separate terminal or after the writer):

```bash
./reader
```
### Sample Output
Writer:

```bash
Write Data: Hello, shared memory!
Data written in memory: Hello, shared memory!
```
Reader:

```bash
Data read from memory: Hello, shared memory!
```
