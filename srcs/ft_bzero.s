section .text
    global ft_bzero

ft_bzero:
   cmp rsi, 8
   jl _part8
   mov qword[rdi], 0
   sub rsi, 8
   add rdi, 8
   jmp ft_bzero

_part8:
   cmp rsi, 1
   jl _stop
   mov byte[rdi], 0
   sub rsi, 1
   add rdi, 1
   jmp _part8

_stop:
    ret
