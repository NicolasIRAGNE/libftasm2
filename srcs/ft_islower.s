section .text
	global _ft_islower
	extern ascii_table

_ft_islower:
	lea r8, [rel ascii_table]
	cmp rdi, 0x7f
	jg _nik
	mov al, byte[r8 + rdi]
	and al, 0b00010000
	movzx eax, al
	ret

_nik:
	mov eax, 0
	ret