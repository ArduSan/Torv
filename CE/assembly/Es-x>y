.org 0x800
.data 
	x: .word 3
	y: .word 5
.text
	main:
	movw x, %ax
	movw y, %bx
	cmp %bx,%ax
	jz .nonimpostare
	js .controlOF
	jmp .set
	.controlOF:
	jno .nonimpostare
	.set: 
	movw $1,%cx
	.nonimpostare:
	hlt
