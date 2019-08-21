%define BUFF_SIZE 4096
%include "srcs/types.s"

section .text
    global _ft_cat
    extern _read

_ft_cat:
    push r12
    mov r12, rdi

_loop:                  ; Lit le fichier dans un buffer
    mov rdi, r12
    lea rsi, [rel buf]
    mov rdx, BUFF_SIZE
    call _read			; rdi = fd, rsi = buf, rdx = len
    cmp rax, 0
    jle _nik
    mov rdx, rax
    mov rax, SYSCALL | WRITE
    mov rdi, 1
    syscall
    jmp _loop
    
_nik:
    pop r12
    mov rax, rsi
    ret

section .bss
    buf resb BUFF_SIZE