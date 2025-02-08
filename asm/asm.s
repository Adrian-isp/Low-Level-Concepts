.globl _start

.section .text

_start:
    mov rax, 0x1
    mov rdi, 0x1
    mov rsi, msg
    mov rdx, msglength
    SYSCALL

    mov rax, 0x3C
    mov rdx, 0x0
    SYSCALL

section .data
    msg: db "Hello world" 0xA
    msglength: equ $ - msg;