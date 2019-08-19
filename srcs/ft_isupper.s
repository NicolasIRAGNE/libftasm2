section .text
	global _ft_isupper
	extern ascii_table

_ft_isupper:
	lea r8, [rel ascii_table]
	test edi, 0xffffff00
	jnz _nik
	mov al, byte[r8 + rdi]
	and al, 0b00100000
	movzx eax, al
	ret

_nik:
	mov eax, 0
	ret