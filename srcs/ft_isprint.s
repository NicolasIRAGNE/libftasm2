section .text
	global _ft_isprint
	extern ascii_table

_ft_isprint:
	lea r8, [rel ascii_table]
	cmp rdi, 0x7f
	jg _nik
	mov al, byte[r8 + rdi]
	test al, 0b00001000
	jz _nik
	mov eax, 1
	ret

_nik:
	mov eax, 0
	ret