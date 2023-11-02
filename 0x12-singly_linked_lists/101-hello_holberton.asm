global main: ; declare global main, point of entry for program (_start??)

section .data
	msg db "Hello, Holberton", 10 ; set var msg to our message
	len equ $ - msg ; calculates the distance between the current address and 
					; the address of the msg label, which is the length of the 
					; string (msg) and assign it to len
section .text
main:
	mov rax, 1 ; call write() func 
	mov rdi, 1 ; set fd to stdout
	mov rsi, msg ; pass the msg arg
	mov rdx, len ; get length of msg & pass as count
	syscall

	mov rax, 60 ; call ext() func
	mov rdi, 0 ; return 0
	syscall
