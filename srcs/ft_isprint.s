section .text
	global _ft_isprint
	extern ascii_table

_ft_isprint:
	lea r8, [rel ascii_table]
    test edi, 0xffffff00
	jnz _nik
	mov al, byte[r8 + rdi]
	and al, 0b00001000
	movzx eax, al
	ret

_nik:
	mov al, 0
	ret