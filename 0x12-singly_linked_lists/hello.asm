global _start

section .data
    msg db "Hello, World", 10, 0
    len equ $ - msg

section .text
	main

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, len
	syscall

	mov rax, 60
	xor rdi, rdi
	syscall
