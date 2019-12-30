.data
array: .space 200

.text
	li $v0,5
	syscall
	move $s0,$v0
	li $v0,5
	syscall
	move $s1,$v0
	li $t0,0
	li $t1,0
	li $s5,0
load:
	mult $t0,$s1
	mflo $t2
	add $t3,$t2,$t1
	sll $t3,$t3,2
	li $v0,5
	syscall
	sw $v0,array($t3)
	addi $t1,$t1,1
	bne $t1,$s1,load
	move $t1,$zero
	addi $t0,$t0,1
	bne $t0,$s0,load
load1:
	li $v0,5
	syscall
	move $a0,$v0
	subi $a0,$a0,1
	li $v0,5
	syscall
	move $a1,$v0
	subi $a1,$a1,1
	li $v0,5
	syscall
	move $s3,$v0
	subi $s3,$s3,1
	li $v0,5
	syscall
	move $s4,$v0
	subi $s4,$s4,1

	jal find

	move $a0,$s5
	li $v0,1
	syscall
	
	li $v0,10
	syscall

find:
	move $t0,$a0
	move $t1,$a1
	bne $t0,$s3,loop
	bne $t1,$s4,loop
	addi $s5,$s5,1
	jr $ra
loop:
	addi $t2,$t0,1
	blt $t2,$s0,point1
back1:
	subi $t2,$t0,1
	bgez $t2,point2
back2:
	addi $t2,$t1,1
	blt $t2,$s1,point3 
back3:
	subi $t2,$t1,1
	bgez $t2,point4
back4:
	jr $ra

point1:
	mult $t2,$s1
	mflo $t3
	add $t4,$t3,$t1
	sll $t4,$t4,2
	lw $t5,array($t4)
	beq $t5,$zero,end1
	j back1
end1:
	mult $t0,$s1
	mflo $t6
	add $t7,$t1,$t6
	sll $t7,$t7,2
	addi $t6,$zero,1
	sw $t6,array($t7)
	sw $ra,0($sp)
	subi $sp,$sp,4
	sw $t0,0($sp)
	subi $sp,$sp,4
	sw $t1,0($sp)
	subi $sp,$sp,4

	move $a0,$t2
	move $a1,$t1

	jal find

	addi $sp,$sp,4
	lw $t1,0($sp)
	addi $sp,$sp,4
	lw $t0,0($sp)
	addi $sp,$sp,4
	lw $ra,0($sp)
	
	mult $t0,$s1
	mflo $t6
	add $t7,$t1,$t6
	sll $t7,$t7,2
	move $t6,$zero
	sw $t6,array($t7)
	j back1

point2:
	mult $t2,$s1
	mflo $t3
	add $t4,$t3,$t1
	sll $t4,$t4,2
	lw $t5,array($t4)
	beq $t5,$zero,end2
	j back2
end2:
	mult $t0,$s1
	mflo $t6
	add $t7,$t1,$t6
	sll $t7,$t7,2
	addi $t6,$zero,1
	sw $t6,array($t7)
	sw $ra,0($sp)
	subi $sp,$sp,4
	sw $t0,0($sp)
	subi $sp,$sp,4
	sw $t1,0($sp)
	subi $sp,$sp,4

	move $a0,$t2
	move $a1,$t1

	jal find

	addi $sp,$sp,4
	lw $t1,0($sp)
	addi $sp,$sp,4
	lw $t0,0($sp)
	addi $sp,$sp,4
	lw $ra,0($sp)
	
	mult $t0,$s1
	mflo $t6
	add $t7,$t1,$t6
	sll $t7,$t7,2
	move $t6,$zero
	sw $t6,array($t7)
	
	j back2
point3:
	mult $t0,$s1
	mflo $t3
	add $t4,$t3,$t2
	sll $t4,$t4,2
	lw $t5,array($t4)
	beq $t5,$zero,end3
	j back3
end3:
	mult $t0,$s1
	mflo $t6
	add $t7,$t1,$t6
	sll $t7,$t7,2
	addi $t6,$zero,1
	sw $t6,array($t7)
	sw $ra,0($sp)
	subi $sp,$sp,4
	sw $t0,0($sp)
	subi $sp,$sp,4
	sw $t1,0($sp)
	subi $sp,$sp,4

	move $a0,$t0
	move $a1,$t2

	jal find

	addi $sp,$sp,4
	lw $t1,0($sp)
	addi $sp,$sp,4
	lw $t0,0($sp)
	addi $sp,$sp,4
	lw $ra,0($sp)
	
	mult $t0,$s1
	mflo $t6
	add $t7,$t1,$t6
	sll $t7,$t7,2
	move $t6,$zero
	sw $t6,array($t7)
	
	j back3
point4:
	mult $t0,$s1
	mflo $t3
	add $t4,$t3,$t2
	sll $t4,$t4,2
	lw $t5,array($t4)
	beq $t5,$zero,end4
	j back4
end4:
	mult $t0,$s1
	mflo $t6
	add $t7,$t1,$t6
	sll $t7,$t7,2
	addi $t6,$zero,1
	sw $t6,array($t7)
	sw $ra,0($sp)
	subi $sp,$sp,4
	sw $t0,0($sp)
	subi $sp,$sp,4
	sw $t1,0($sp)
	subi $sp,$sp,4

	move $a0,$t0
	move $a1,$t2

	jal find

	addi $sp,$sp,4
	lw $t1,0($sp)
	addi $sp,$sp,4
	lw $t0,0($sp)
	addi $sp,$sp,4
	lw $ra,0($sp)
	
	mult $t0,$s1
	mflo $t6
	add $t7,$t1,$t6
	sll $t7,$t7,2
	move $t6,$zero
	sw $t6,array($t7)
	
	j back4
