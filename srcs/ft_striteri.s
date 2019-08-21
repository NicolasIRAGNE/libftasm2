section .text
    global _ft_striteri

_ft_striteri:
    push r12
    push r13
    push r14
    push r15
    mov r12, rdi
    mov r13, rsi
    mov r14, 0
    mov r15, rdi

_loop:
    cmp byte[r12 + r14], 0
    je _end
    mov rdi, r14
    mov rsi, r15
    call r13 ; rdi = index, rsi = char*
    inc r14
    inc r15
    jmp _loop

_end:
    pop r12
    pop r13
    pop r14
    pop r15
    ret