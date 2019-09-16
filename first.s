	.file	"queue.c"
	.comm	items,20,4
	.globl	front
	.data
	.align 4
	.type	front, @object
	.size	front, 4
front:
	.long	-1
	.globl	rear
	.align 4
	.type	rear, @object
	.size	rear, 4
rear:
	.long	-1
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	leal	4(%esp), %ecx
	.cfi_def_cfa 1, 0
	andl	$-16, %esp
	pushl	-4(%ecx)
	pushl	%ebp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	movl	%esp, %ebp
	pushl	%ecx
	.cfi_escape 0xf,0x3,0x75,0x7c,0x6
	subl	$4, %esp
	call	deQueue
	subl	$12, %esp
	pushl	$1
	call	enQueue
	addl	$16, %esp
	subl	$12, %esp
	pushl	$2
	call	enQueue
	addl	$16, %esp
	subl	$12, %esp
	pushl	$3
	call	enQueue
	addl	$16, %esp
	subl	$12, %esp
	pushl	$4
	call	enQueue
	addl	$16, %esp
	subl	$12, %esp
	pushl	$5
	call	enQueue
	addl	$16, %esp
	subl	$12, %esp
	pushl	$6
	call	enQueue
	addl	$16, %esp
	call	display
	call	deQueue
	call	display
	movl	$0, %eax
	movl	-4(%ebp), %ecx
	.cfi_def_cfa 1, 0
	leave
	.cfi_restore 5
	leal	-4(%ecx), %esp
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC0:
	.string	"\nQueue is Full!!"
.LC1:
	.string	"\nInserted -> %d"
	.text
	.globl	enQueue
	.type	enQueue, @function
enQueue:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	rear, %eax
	cmpl	$4, %eax
	jne	.L4
	subl	$12, %esp
	pushl	$.LC0
	call	printf
	addl	$16, %esp
	jmp	.L7
.L4:
	movl	front, %eax
	cmpl	$-1, %eax
	jne	.L6
	movl	$0, front
.L6:
	movl	rear, %eax
	addl	$1, %eax
	movl	%eax, rear
	movl	rear, %eax
	movl	8(%ebp), %edx
	movl	%edx, items(,%eax,4)
	subl	$8, %esp
	pushl	8(%ebp)
	pushl	$.LC1
	call	printf
	addl	$16, %esp
.L7:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	enQueue, .-enQueue
	.section	.rodata
.LC2:
	.string	"\nQueue is Empty!!"
.LC3:
	.string	"\nDeleted : %d"
	.text
	.globl	deQueue
	.type	deQueue, @function
deQueue:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	front, %eax
	cmpl	$-1, %eax
	jne	.L9
	subl	$12, %esp
	pushl	$.LC2
	call	printf
	addl	$16, %esp
	jmp	.L11
.L9:
	movl	front, %eax
	movl	items(,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC3
	call	printf
	addl	$16, %esp
	movl	front, %eax
	addl	$1, %eax
	movl	%eax, front
	movl	front, %edx
	movl	rear, %eax
	cmpl	%eax, %edx
	jle	.L11
	movl	$-1, rear
	movl	rear, %eax
	movl	%eax, front
.L11:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	deQueue, .-deQueue
	.section	.rodata
.LC4:
	.string	"\nQueue is Empty!!!"
.LC5:
	.string	"\nQueue elements are:"
.LC6:
	.string	"%d\t"
	.text
	.globl	display
	.type	display, @function
display:
.LFB3:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	rear, %eax
	cmpl	$-1, %eax
	jne	.L13
	subl	$12, %esp
	pushl	$.LC4
	call	printf
	addl	$16, %esp
	jmp	.L17
.L13:
	subl	$12, %esp
	pushl	$.LC5
	call	puts
	addl	$16, %esp
	movl	front, %eax
	movl	%eax, -12(%ebp)
	jmp	.L15
.L16:
	movl	-12(%ebp), %eax
	movl	items(,%eax,4), %eax
	subl	$8, %esp
	pushl	%eax
	pushl	$.LC6
	call	printf
	addl	$16, %esp
	addl	$1, -12(%ebp)
.L15:
	movl	rear, %eax
	cmpl	%eax, -12(%ebp)
	jle	.L16
.L17:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	display, .-display
	.ident	"GCC: (Ubuntu 5.3.1-14ubuntu2) 5.3.1 20160413"
	.section	.note.GNU-stack,"",@progbits
