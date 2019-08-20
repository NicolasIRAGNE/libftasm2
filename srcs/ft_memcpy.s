section .text
    global _ft_memcpy

_ft_memcpy:
    mov rcx, rdx
	cld
    rep movsb
    mov rdi, rax
    ret