global		_ft_putchar

section		.text
_ft_putchar:
	mov		rsi, rdi
	mov		rdi, 1
	mov		rdx, 1
	mov		rax, 0x20000004
	syscall
	ret
