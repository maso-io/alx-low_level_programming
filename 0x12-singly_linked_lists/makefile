CFLAGS = -no-pie -std=gnu89
NFLAGS = -f elf64


hello:	*.asm
		@echo "---- ---- --50%"
		nasm $(NFLAGS) 101-hello_holberton.asm
		@echo "---- ---- --99%-- ---- ---- ----"
		gcc $(CFLAGS) 101-hello_holberton.o -o hello
		@echo "compilation complete"


clean:
	rm hello
