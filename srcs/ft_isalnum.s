section .text
	global _ft_isalnum
	extern ascii_table

_ft_isalnum:
	lea r8, [rel ascii_table]
	cmp rdi, 0x7f
	jg _nik
	mov al, byte[r8 + rdi]
	and al, 0b00000100
	movzx eax, al
	ret

_nik:
	mov eax, 0
	ret