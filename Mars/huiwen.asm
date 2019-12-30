.data 
str: .space 20
str_space: .asciiz "\n"
.text
	li $v0,5
	syscall
	move $s1,$v0
	li $t0,0
	li $t1,0
	add $t2,$t1,$s1
	subi $t2,$t2,1
load:
	la $a0,str($t0)
	li $a1,
	li $v0,8
	syscall
	#move $t1,$v0
	#sb $t1,str($t0)
	addi $t0,$t0,1
	bne $t0,$s1,load
	li $t1,0
judge:
	bge $t1,$t2,end_1
	lb $t3,str($t1)
	lb $t4,str($t2)
	bne $t3,$t4,end_0
	
	addi $t1,$t1,1
	subi $t2,$t2,1
	j judge
end_0:
	la $a0,str_space
	li $v0,4
	syscall
	li $a0,0
	li $v0,1
	syscall
	j end
end_1:
	la $a0,str_space
	li $v0,4
	syscall
	li $a0,1
	li $v0,1
	syscall
	j end
end:
	li $v0,10
	syscall
	
		

	
