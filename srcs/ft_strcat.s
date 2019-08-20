section .text
    global _ft_strcat
    extern _ft_strlen

_ft_strcat:
    mov r12, rdi
    call _ft_strlen
    mov r8, rdi
    dec r8

_loop:
    cmp byte[rsi], 0
    je _end
    mov cl, byte[rsi]
    mov byte[r8], cl
    inc r8
    inc rsi
    jmp _loop

_end:
    mov byte[r8], 0
    mov rax, r12
    ret