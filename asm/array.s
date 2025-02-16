	.file	"array.c"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:						# start of main program
.LFB0:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$144, %rsp
	.seh_stackalloc	144
	.seh_endprologue
	call	__main 			# initalise i variable as 0
	movl	$0, -4(%rbp)
	jmp	.L2					# jump to control structure L2
.L3:
	movl	-4(%rbp), %eax
	cltq							# convert long to double
	movl	-4(%rbp), %edx			# moves edx below stack
	movl	%edx, -112(%rbp,%rax,4)	# ???
	addl	$1, -4(%rbp) 			# finally add 1 to i
.L2:
	cmpl	$24, -4(%rbp)	# compare the long in stack to 24
	jle	.L3					# jump if less than equal to L3
	movl	$0, %eax		# add 0 to return
	addq	$144, %rsp 		# move the stack back up
	popq	%rbp			# destroy stack
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (Rev2, Built by MSYS2 project) 14.2.0"
