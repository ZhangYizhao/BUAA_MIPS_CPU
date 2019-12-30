.text
	li $v0,5
	syscall
	move $s0,$v0
	
loop1:
	li $t6,0x00000190
	div $s0,$t6
	mfhi $t7
	beq $t7,$zero,out1
loop2:
	li $a2,0x00000004
	li $a3,0x00000064
	
	div $s0,$a2
	mfhi $t1
	div $s0,$a3
	mfhi $t2
	bgtz $t1,out0
	beq $t2,$zero,out0
	j out1
out0:
	move $a0,$zero
	li $v0,1
	syscall
	j end
out1:
	li $a0,0x1
	li $v0,1
	syscall
	j end
end:
	li $v0,10
	syscall