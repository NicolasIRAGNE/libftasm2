section .text
    global _ft_memset

_ft_memset:
    push rdi
    mov rcx, rdx
    mov al, sil
	cld
    repne stosb
    pop rdi
    mov rax, rdi
    ret