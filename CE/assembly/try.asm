.org 0x0800
.data
	vect: .word 12,14,16,18		
	len: .word . - vect
	min: .word 0
.text 
main:	
	movq vect, %ax
	movq 0, %bx
	.start:
		cmp %bx, len
		jz .end
		movq vect(,%rbx,1), %ax
		addb $2, %bl
		jmp .start	
	.end:
	hlt
