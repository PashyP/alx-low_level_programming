; Declare needed C  functions
	extern	printf		; the declared C function

	section .data		; Data section with initialized variables
msg:	db "Hello, Holberton", 0; C string
fmt:	db "%s", 10, 0		; Format specifier, "\n",'0'

	section .text		; Code section.

	global main		; the standard gcc entry point
main:				; the program label for the entry point
	push	rbp		; set up alligned stack frame

	mov	rdi,fmt
	mov	rsi,msg
	mov	rax,0		; load format and message string address
	call	printf		; Call printf function

	pop	rbp		; restore stack

	mov	rax,0		; return value (no error)
	ret			; return
