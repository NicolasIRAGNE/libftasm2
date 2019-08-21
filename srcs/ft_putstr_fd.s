%include "srcs/types.s"

section .text
    global _ft_putstr_fd
    extern _ft_strlen

_ft_putstr_fd:
    push r13
    mov r13, rsi
    mov rsi, rdi
    call _ft_strlen
    mov rdi, r13
    mov rdx, rax
    mov rax, SYSCALL | WRITE
    syscall
    pop r13
    ret
