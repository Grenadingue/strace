# STRACE #

This README documents the why, the what, and the how of this repository

/!\ This software is experimental, you SHOULD NOT use it if you're looking for the original strace /!\


### What is this repository for? ###

* An illustration of my C skills, attached to my [personal portfolio](http://nicolas.chauv.in/portfolio.phtml) *(online soon, April 2015)*
* Was a school project

### What is "strace"? ###

From [Wikipedia](http://en.wikipedia.org/wiki/Strace):

*"strace is a diagnostic, debugging and instructional userspace utility for Linux. It is used to monitor interactions between processes and the Linux kernel, which include system calls, signal deliveries, and changes of process state. The operation of strace is made possible by the kernel feature known as ptrace.
Some Unix-like systems provide other diagnostic tools similar to strace, such as truss."*


### How do I get set up? ###


```
#!bash

$ cd
$ https://github.com/NicolasChauvin/strace.git || git clone https://bitbucket.org/chauvi_n/strace.git || git clone http://git.chauv.in/strace.git
$ cd strace
$ make
$ ./strace

Usage : ./strace <command> [args] || <-p> <pid>

```

### Specificity of this software ###

* Experimental, you SHOULD NOT use it if you're looking for the original strace
* Designed for *x86_64* architecture only
* Originaly designed for *Opensuse 12* and *Debian 7*
* Recently ported for working with *Archlinux*
* Pretty (very) slow, uses *PTRACE_SINGLESTEP* instead of *PTRACE_SYSCALL* (scholar restriction)
* Print natives data types (*char*, *char* ***, *int*, ...)
* Print hexadecimal values for pointers and any custom data type

### Who do I talk to? ###

* Nicolas Chauvin <chauvin.nico@gmail.com>