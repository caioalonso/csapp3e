	.file	"3.5.c"
	.text
	.globl	decode1
	.type	decode1, @function
decode1:
.LFB0:
	.cfi_startproc
	movq	(%rdi), %rax
	movq	(%rsi), %r8
	movq	(%rdx), %rcx
	movq	%r8, (%rdi)
	movq	%rcx, (%rsi)
	movq	%rax, (%rdx)
	ret
	.cfi_endproc
.LFE0:
	.size	decode1, .-decode1
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
