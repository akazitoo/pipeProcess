<h1 align="center">Pipe In Process</h1>

<p align="center">
        <span>Process</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>First Step</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Compile</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Run</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Clean</span>&nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
        <span>Explanation</span>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
</p>

---

## ๐ Process

step by step about how to connect a child process with a parent process using 'pipe'.

---

## โ๏ธ First Step

```bash
$ git clone https://github.com/akazitoo/pipeProcess.git
$ cd pipeProcess
```

Cloning the project to local

---

## โ๏ธ Compile

```bash
$ make
```
Create a file 'main'

<br>

OBS: if you don't have 'make' installed

```bash
$ sudo apt install make
```

---

## โ๏ธ Run

```bash
$ make run
```
Run the main file 

---

## ๐งน Clean

```bash
$ make clean
```

Delete the compiled file

---

## ๐ Explanation

A pipe is normally used to connect two processes, that being said, running the main file that creates a child process, read and write a message to parent process.
