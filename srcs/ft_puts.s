%include "srcs/types.s"

section .text
    global _ft_puts
    extern _ft_strlen

_ft_puts:
    mov rsi, rdi
    call _ft_strlen
    mov rdi, 1
    mov rdx, rax
    mov rax, SYSCALL | WRITE
    syscall
    cmp rax, 0
	jl error
    mov r10, rax
    mov rax, SYSCALL | WRITE
    mov rdi, 1
    lea rsi, [rel nl]
    mov rdx, 1
    syscall
    cmp rax, 0
	jl error
    add rax, r10
    ret

error:
	mov rax, -1
	ret

section .data
    nl: db 10