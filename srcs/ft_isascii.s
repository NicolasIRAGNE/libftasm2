section .text
	global _ft_isascii

_ft_isascii:
    cmp rdi, 0
    jl _false
    cmp rdi, 127
    jg _false
	mov eax, 1
	ret

_false:
    mov eax, 0
    ret
