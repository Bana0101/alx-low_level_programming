section		.text
	extern	printf
	global	main
main:
	mov	rdi, text
	xor	eax, eax
	call	printf
section		.data
	text db 'Hello, Holberton', 10, 0
	
