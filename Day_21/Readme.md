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

# 👨‍👩‍👧 Interprocess Communication Using Pipe 🧵✨

This project demonstrates how to share user input data (name, registration number, and age) between a **parent** and a **child** process using a **pipe** in C. 🧑‍💻👶

## 📜 Description

- 👨‍👧 The **parent process** collects:
  - Name 📛
  - Registration Number 🆔
  - Age 🎂

- 🧒 The **child process** receives this data through a **pipe** and displays it beautifully.

## 🧪 Sample Interaction

```bash
Enter name: Alice
Enter reg no: 2022/ICT/01
Enter age: 22

From child process:
name: Alice
reg no: 2022/ICT/01
age: 22
```
## ⚙️ How It Works
#### 🔄 A pipe is created using pipe().

👨 Parent collects data using fgets() and writes it to the pipe.

👶 Child reads the data and displays it.

💫 Proper read()/write() and close() operations ensure smooth communication.

#### 🧵 Data Flow
```scss
Parent (👨) --> [ pipe 🧵 ] --> Child (👶)
```

#### 🛠️ Compile & Run
##### 🧰 Compilation
```bash
gcc -o pipe_user_input pipe_user_input.c
```
##### 🚀 Execution
```bash
./pipe_user_input
```
#### 📚 Concepts Used
```bash
🔧 Function	    💡 Purpose
pipe()	         Create a communication channel
fork()	         Create child process 👶
write()	         Send data from parent to child ✉️
read()	         Receive data in child 📬
wait()	         Ensure parent waits for child 🕒
fgets()	         Safely read strings from user 💬
```
