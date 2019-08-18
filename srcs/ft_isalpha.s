section .text
	global ft_isalpha
	extern ascii_table

ft_isalpha:
	lea r8, [rel ascii_table]
	mov al, byte[r8 + rdi]
	and al, 0b00000001
	movzx eax, al
	ret
