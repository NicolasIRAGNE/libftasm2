section .text
	global _ft_islower
	extern ascii_table

_ft_islower:
	lea r8, [rel ascii_table]
	test edi, 0xffffff00
	jnz _nik
	mov al, byte[r8 + rdi]
	and al, 0b00010000
	movzx eax, al
	ret

_nik:
	mov eax, 0
	ret