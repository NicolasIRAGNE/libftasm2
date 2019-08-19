section .text
	global _ft_strlen

_ft_strlen:
	mov al, 0
   	xor ecx, ecx
	not ecx
	cld
	repne scasb
	not	ecx
	dec	ecx
   	mov rax, rcx
	ret
