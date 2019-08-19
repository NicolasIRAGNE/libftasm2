section .text
    global _ft_tolower
    extern _ft_isupper

_ft_tolower:
    mov r10d, edi
    call _ft_isupper
    cmp eax, 0
    je _osef
    add r10d, 0x20
    mov eax, r10d
    ret

_osef:
    mov eax, r10d
    ret