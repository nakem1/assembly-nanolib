
global		_ft_strlen

section		.text

_ft_strlen:
	mov		rax, dword 0
.mekan_loop:
	cmp		[rdi + rax], byte 0
	je		.rifl
	inc		rax
	jmp		.mekan_loop

.rifl:
	ret
