
global		_ft_read

section		.text

_ft_read:
	xor		rax, rax
	mov		rax, 0x2000003		
	syscall
	ret
