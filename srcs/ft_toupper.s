section .text
    global _ft_toupper
    extern _ft_islower

_ft_toupper:
    mov r10d, edi
    call _ft_islower
    cmp eax, 0
    je _osef
    sub r10d, 0x20
    mov eax, r10d
    ret

_osef:
    mov eax, r10d
    ret