CFLAGS = -Werror -Wextra -Wall -pedantic -std=gnu89

a: 0-main.c 0-sum_them_all.c
	gcc $(CFLAGS) 0-main.c 0-sum_them_all.c -o a
	@echo "compilation complete"

b: 1-main.c 1-print_numbers.c
	gcc $(CFLAGS) 1-main.c 1-print_numbers.c -o b
	@echo "compilation complete"

c: 2-main.c 2-print_strings.c
	gcc $(CFLAGS) 2-main.c 2-print_strings.c -o c
	@echo "compilation complete"

d: 3-main.c 3-print_all.c
	gcc $(CFLAGS) 3-main.c 3-print_all.c -o d
	@echo "compilation complete"

clean:
	rm a b c d
