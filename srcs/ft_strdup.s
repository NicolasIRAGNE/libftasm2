section .text
    global _ft_strdup
    extern _ft_strlen
    extern _ft_memcpy
    extern _malloc

_ft_strdup:
    push rbp
	mov rbp, rsp
    mov r12, rdi
    call _ft_strlen
    mov rdi, rax
    mov r13, rax
    call _malloc
    mov rdi, rax
    mov rsi, r12
    mov rdx, r13
    inc rdx
    call _ft_memcpy ; rdi = dst, rsi = src, rdx = len
    pop rbp
    ret