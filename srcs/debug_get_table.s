section .text
	global _debug_get_table
	extern ascii_table

_debug_get_table:
	lea r8, [rel ascii_table]
	test edi, 0xffffff00
	jnz _nik
	mov al, byte[r8 + rdi]
	movzx eax, al
	ret

_nik:
	mov eax, 0
	ret