.data
symbol: .space 40
array: .space 40
str_space: .asciiz " "
str_line: .asciiz "\n"

.text
	li $v0,5
	syscall
	move $s0,$v0
	move $a0,$zero
	jal fullarray
	
	li $v0,10
	syscall
fullarray:
	blt $a0,$s0,work
	li $t0,0
loop1:
	sll $t5,$t0,2
	lw $a0,array($t5)
	li $v0,1
	syscall
	la $a0,str_space
	li $v0,4
	syscall
	addi $t0,$t0,1
	bne $t0,$s0,loop1
	la $a0,str_line
	li $v0,4
	syscall
	jr $ra
work:
	move $t2,$a0
	li $t0,0
loop2:
	sll $t5,$t0,2
	lw $t1,symbol($t5)
	bne $t1,$zero,exc

	addi $t3,$t0,1
	sll $t5,$t2,2
	sw $t3,array($t5)
	addi $t4,$zero,1
	sll $t5,$t0,2
	sw $t4,symbol($t5)
	
	sw $ra,0($sp)
	subi $sp,$sp,4
	sw $t2,0($sp)
	subi $sp,$sp,4
	sw $t0,0($sp)
	subi $sp,$sp,4
	
	addi $a0,$t2,1
	
	jal fullarray
	
	addi $sp,$sp,4
	lw $t0,0($sp)
	addi $sp,$sp,4
	lw $t2,0($sp)
	addi $sp,$sp,4
	lw $ra,0($sp)
	
	sll $t5,$t0,2
	sw $zero,symbol($t5)
	addi $t0,$t0,1
	bne $t0,$s0,loop2
	jr $ra
	
exc:
	addi $t0,$t0,1
	bne $t0,$s0,loop2
	jr $ra
	


	