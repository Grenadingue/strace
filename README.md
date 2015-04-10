# STRACE #

This README documents the what and the how of this repository

**/!\ ** This software is experimental, you SHOULD NOT use it if you're looking for the original strace **/!\ **


### What is this repository for? ###

* An illustration of my C skills
* Attached to my [personnal portfolio](http://nicolas.chauv.in/portfolio.phtml) *(currently offline, April 2015)*
* Was a school project

### How do I get set up? ###


```
#!bash

$ cd
$ git clone https://bitbucket.org/chauvi_n/strace.git OR $ git clone http://git.chauv.in/strace.git
$ cd strace
$ make
$ ./strace -p <pid> OR $ ./strace <any_cmd> [args]
```

### Specificity of this software ###

* Experimental, you SHOULD NOT use it if you're looking for the original strace
* Designed for *x86_64* architecture ONLY
* Originaly designed for *Opensuse 12* and *Debian 7*
* Recently ported for working with *Archlinux*
* Pretty (very) slow, uses *PTRACE_SINGLESTEP* instead of *PTRACE_SYSCALL* (scholar restriction)
* Print natives data types (*char*, *char* ***, *int*, ...)
* Print hexadecimal values for pointers and any custom data type (like structures)

### Who do I talk to? ###

* Nicolas Chauvin <chauvin.nico@gmail.com>