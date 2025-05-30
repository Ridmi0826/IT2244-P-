# Inter-Process Communication using Message Queues in C

This project demonstrates the use of message queues for inter-process communication (IPC) in C programming. We have two programs: one for sending data to the message queue and the other for receiving that data from the queue.

### Features:
- **Message Sending:** The sender program takes input from the user and sends it to the message queue.
- **Message Receiving:** The receiver program receives the message from the queue and displays it.
- **IPC using Message Queue:** Utilizes the `msgget()`, `msgsnd()`, `msgrcv()`, and `msgctl()` system calls for message queue creation, message sending, receiving, and queue destruction.

---

## 💻 Files:
1. **send.c** - Sends data to the message queue.
2. **receive.c** - Receives data from the message queue.

---

## 🛠️ Prerequisites:
- Linux-based operating system (for IPC functionality).
- GCC compiler.

---

## 🚀 How to Run:

### Step 1: Compile the Code
In your terminal, run the following commands:

```bash
gcc send.c -o send
gcc receive.c -o receive
```

### Step 2: Run the Sender Program
In one terminal window, run:

```bash
./send
```
Enter the message you want to send. For example, you can type:
```bash
Hello from the sender program! 💬
```
### Step 3: Run the Receiver Program
In another terminal window, run:

```bash
./receive
```
The message sent from the sender program will be displayed.

## 🧑‍💻 Code Explanation:
### send.c
Generates a unique key using ftok().

This function is used to generate a unique key for the message queue based on a file.

Creates a message queue with msgget().

Creates a message queue and returns a message queue identifier. If the queue doesn't exist, it will be created.

Sends a message with msgsnd().

Sends the data from mesg_text into the message queue, allowing another program (receiver) to retrieve it.

Displays the message sent to the console.

After sending the message, it prints the message content for confirmation.

### receive.c
Generates a unique key using ftok().

Same as in send.c, it generates a unique key to access the same message queue.

Creates the message queue with msgget().

It ensures that the receiver can interact with the message queue created by the sender.

Receives the message using msgrcv().

It retrieves the message from the queue and stores it into the message structure.

Displays the received message.

The received message is displayed on the screen.

Deletes the message queue using msgctl().

Once the message is received, the queue is removed to free system resources.

## 📦 Example Output:
#### Sender:
```pgsql
Write Data: Hello from the sender program! 💬
Data sent: Hello from the sender program! 💬
```

#### Receiver:
```csharp
Data received: Hello from the sender program! 💬
```
