	.file	"add.c"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	# pushq - push - push source onto stack
	#         q - quadword - 8 bytes size
	pushq	%rbp		 # rbp - stack base pointer (points to base of stack)
	.seh_pushreg	%rbp # rsp - stack pointer (points to top of stack)

	# movq - mov - move source onto stack
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0

	# subq - sub - subtract source from destination
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue

	# call - push address and jump to specified location
	call	__main

	# movl - l - long - doubleword - 4 bytes size
	# (reg) - indicates the address the register points to
	movl	$12, -4(%rbp) 	# moves 12 at the stack address
	movl	$15, -8(%rbp)	# moves 15 at the stack address

	movl	-4(%rbp), %edx	# moves 12 to data register
	movl	-8(%rbp), %eax	# moves 15 to accumulation register

	addl	%edx, %eax		# adds them to the data register
	movl	%eax, -12(%rbp) # moves the result at the stack address

	movl	$0, %eax		# moves 0 to accumulation register
	addq	$48, %rsp		# adds 48 to the stack size(?)
	
	# popq - pop - pop top of stack into destination
	popq	%rbp			# removes the stack base

	# ret - return / halt
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev2, Built by MSYS2 project) 14.2.0"
