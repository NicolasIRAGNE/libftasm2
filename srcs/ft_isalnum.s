%include "srcs/types.s"

section .text
	global _ft_isalnum
	extern ascii_table

_ft_isalnum:
	lea r8, [rel ascii_table]
	cmp rdi, 0x7f
	jg _nik
	mov al, byte[r8 + rdi]
	test al, ALNUM
	je _nik
	mov eax, 1
	ret

_nik:
	mov eax, 0
	ret