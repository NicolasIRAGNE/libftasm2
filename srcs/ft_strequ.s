section .text
    global _ft_strequ
    extern _ft_strlen

_ft_strequ:
    push r13
    push r14
    push r15
    mov r13, rsi
    mov r14, rdi
    call _ft_strlen
    mov r15, rax
    mov rdi, r13
    call _ft_strlen
    cmp rax, r15
    cmovl rax, r15
    mov rcx, rax
    mov rsi, r13
    mov rdi, r14
    repe cmpsb
    je _equal
    jmp _not_equal

_equal:
    mov rax, 1
    jmp _ret

_not_equal:
    mov rax, 0

_ret:
    pop r13
    pop r14
    pop r15
    ret