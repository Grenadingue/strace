# STRACE #

This README documents the what and the how of this repository

Experimental, you SHOULD NOT use it if you're looking for the "real strace"


### What is this repository for? ###

* An illustration of my C skills
* Attached to my [personnal portfolio](http://nicolas.chauv.in/portfolio.phtml) *(currently offline, April 2015)*
* Was a school project

### How do I get set up? ###

* Clone this repository in your computer
* Go into it
* Then *'$ make'*
* And *'$ ./strace -p <pid>'* or *'$ ./strace <any_cmd> [args]'*

### Specificity of this software ###

* Experimental, you SHOULD NOT use it if you're looking for the "real strace"
* Designed for *x86_64* architecture ONLY
* Originaly designed for *Opensuse 12* and *Debian 7*
* Recently ported for working with *Archlinux*
* Pretty (very) slow, uses *PTRACE_SINGLESTEP* instead of *PTRACE_SYSCALL* (scholar restriction)
* Print natives data types (*char*, *char* ***, *int*, ...)
* Print hexadecimal values for pointers and any custom data type (like structures)

### Who do I talk to? ###

* Nicolas Chauvin <chauvin.nico@gmail.com>