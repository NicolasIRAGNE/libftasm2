section .text
    global ft_strlen

ft_strlen:
	mov al, 0
   	xor ecx, ecx
    	not ecx
    	cld
    	repne scasb
	not	ecx
	dec	ecx
   	mov rax, rcx
    	ret
