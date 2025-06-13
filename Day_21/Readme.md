# 🐧 Pipe Communication in C 🧵

This fun little project demonstrates how to use **pipes** in C for **inter-process communication** — although everything here happens within a single process! 🛠️

## 🧠 What’s Happening?

We’re using a **pipe** as a simple data channel:
- Messages are written to the **write-end** of the pipe.
- Then, we read from the **read-end** and print them out! 📬

## 📁 Files

- `pipe_example.c`: Contains the code that:
  1. Creates a pipe 🧵
  2. Writes 3 messages to it ✉️✉️✉️
  3. Reads them back and prints them on screen 🖨️

## 🧪 Sample Output

```bash
hello, world #1
hello, world #2
hello, world #3
```
## 🧵 How to Run It
#### ✅ Compile the code:

```bash
gcc -o pipe_example pipe_example.c
```
#### 🚀 Run the program:

```bash
./pipe_example
```
## ✨ Key Concepts
```bash
Concept	      Description
pipe(p)	      Creates a unidirectional data channel.
p[0]	        Read end of the pipe.
p[1]	        Write end of the pipe.
write()	      Sends data into the pipe.
read()	       Receives data from the pipe.
```

## ⚠️ Notes
The pipe uses a buffer to store data temporarily.

Each message is 16 bytes long (MSGSIZE).

Messages are read and printed in the order they were written. 📥➡️📤

