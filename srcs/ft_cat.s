%define BUFF_SIZE 4096

section .text
    global _ft_cat
    extern _read
    extern _ft_puts

_ft_cat:
    push rbp
	mov rbp, rsp
;    mov rdx, BUFF_SIZE
;    call _read ; rdi = fd, rsi = buf, rdx = len

_read_write:
  ; Lit le fichier dans un buffer
    lea rsi, [rel buf]
    mov rdx, BUFF_SIZE
    call _read
    pop rbp
    ret
    mov rax, rsi
    ret

section .data
    zero: db 0

section .bss
    buf resb BUFF_SIZE