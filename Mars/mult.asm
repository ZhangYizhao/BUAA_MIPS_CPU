.data
array1: .space  256
array2: .space  256
str_space: .asciiz  " "
str_line: .asciiz  "\n"
.text
	li $v0,5
	syscall
	move $s1,$v0
	
	li $t0,0
	li $t1,0	
	li $t3,0   #矩阵1的行数
	li $t4,0   #矩阵2的列数
load_in_1:
	mult $t0,$s1
	mflo $t2
	add $t2,$t2,$t1
	sll $t2,$t2,2
	li $v0,5
	syscall
	sw $v0,array1($t2)
	addi $t1,$t1,1
	bne $t1,$s1,load_in_1
	move $t1,$zero
	addi $t0,$t0,1
	bne $t0,$s1,load_in_1
	li $t0,0
	li $t1,0
load_in_2:
	mult $t0,$s1
	mflo $t2
	add $t2,$t2,$t1
	sll $t2,$t2,2
	li $v0,5
	syscall
	sw $v0,array2($t2)
	addi $t1,$t1,1
	bne $t1,$s1,load_in_2
	move $t1,$zero
	addi $t0,$t0,1
	bne $t0,$s1,load_in_2
	li $t2,0
compute:
    	mult $t3,$s1
    	mflo $t5
    	add $t5,$t5,$t2
    	sll $t5,$t5,2
    	lw $s2,array1($t5)
    
    	mult $t2,$s1
    	mflo $t6
    	add $t6,$t6,$t4
    	sll $t6,$t6,2
    	lw $s3,array2($t6)
    	
    	mult $s2,$s3
    	mflo $t7
    	add $s4,$s4,$t7
    	addi $t2,$t2,1
    	bne $t2,$s1,compute
    	move $a0,$s4
    	li $v0,1
    	syscall
    	la $a0,str_space
    	li $v0,4
    	syscall
    	move $t2,$zero
    	move $s4,$zero
    	addi $t4,$t4,1
    	bne $t4,$s1,compute
    	la $a0,str_line
    	li $v0,4
    	syscall
    	move $t4,$zero
    	addi $t3,$t3,1
    	bne $t3,$s1,compute
    	j end
end:
	li $v0,10
	syscall
	
