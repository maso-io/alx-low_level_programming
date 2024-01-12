global main: ; declare global main, point of entry for program (_start??)

section .data
	msg db "Hello, Holberton", 10, 0 ; set var msg to our message
	len equ $ - msg ; calculates the distance between the current address and 
					; the address of the msg label, which is the length of the 
					; string (msg) and assign it to len
section .text
	call main	; makes a call to the main subroutine
	
	mov rax, 60 ; call exit() func
	mov rdi, 0 ; return 0
	syscall

main:
	mov rax, 1 ; call write() func 
	mov rdi, 1 ; set fd to stdout
	mov rsi, msg ; pass the msg arg
	mov rdx, len ; get length of msg & pass as count
	syscall
	ret	; returns point of execution to the call instruction

	
