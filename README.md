# School 42 Security project (intermediate): Rainfall

The given .iso contains 15 users (*level0* to *level9* + *bonus0* to *bonus3* + *end*). The goal is to find a way to access the next level's password
(**[next user's directory]/.pass**), by exploiting flaws in a program located in the current user's directory.

The assignment also requires us to provide readable pseudocode reflecting the binary's disassembled ASM code.

## Principles involved

* gdb (GNU debugger)
* Security flaws in usual C stdlib functions
* Buffer overflows
* ASM language
* Shellcodes
