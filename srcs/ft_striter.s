section .text
    global _ft_striter

_ft_striter:
    push r12
    push r13
    mov r12, rdi
    mov r13, rsi

_loop:
    cmp byte[r12], 0
    je _end
    mov rdi, r12
    call r13
    inc r12
    jmp _loop

_end:
    pop r12
    pop r13
    ret