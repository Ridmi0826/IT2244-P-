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


