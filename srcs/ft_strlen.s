section .text
	global _ft_strlen

_ft_strlen:
	push rcx
	mov al, 0
   	xor ecx, ecx
	not ecx
	cld
	repne scasb
	not	ecx
	dec	ecx
   	mov eax, ecx
	pop rcx
	ret
