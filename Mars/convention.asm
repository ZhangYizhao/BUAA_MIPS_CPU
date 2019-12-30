.data
array1: .space 400
array2: .space 400
array3: .space 400
space: .asciiz " "
line: .asciiz "\n"

.text
	li    $v0,5        #scanf("%d",&m1)
    	syscall
    	move    $t0,$v0    #t0=m1
    	li    $v0,5        #scanf("%d",&n1)
    	syscall    
    	move    $t1,$v0    #t1=n1
    
    	li    $v0,5        #scanf("%d",&m2)
    	syscall
    	move    $t2,$v0    #t2=m2
    	li    $v0,5        #scanf("%d",&n2)
    	syscall    
    	move    $t3,$v0    #t3=n2
    
    	move    $s0,$0
    	move    $s1,$0
    	move    $s2,$0    
load1:
	mult    $s0,$t1
    	mflo    $s2
    	add    $s2,$s2,$s1
    	li    $v0,5
    	syscall
   	move    $t4,$v0
    	sll    $s2,$s2,2
    	sw    $t4,array1($s2)    #t4=a[j][j]
    
    	addi    $s1,$s1,1
    	bne    $s1,$t1,load1
    
    	move    $s1,$0
    	addi    $s0,$s0,1
    	bne    $s0,$t0,load1
    
    	move    $s0,$0
    	move    $s1,$0
    	move    $s2,$0
load2:
	mult    $s0,$t3
    	mflo    $s2
   	add    $s2,$s2,$s1
    	li    $v0,5
	syscall
    	move    $t4,$v0
    	sll    $s2,$s2,2
    	sw    $t4,array2($s2)    #t4=b[j][j]
    
    	addi    $s1,$s1,1
    	bne    $s1,$t3,load2
    
    	move    $s1,$0
    	addi    $s0,$s0,1
    	bne    $s0,$t2,load2
    
    	sub    $t4,$t0,$t2
    	addi    $t4,$t4,1    #t4=m1-m2+1
    	sub    $t5,$t1,$t3
    	addi    $t5,$t5,1    #t5=n1-n2+1
    
    	move    $s0,$0    #s0=i
conv1:
    	beq    $s0,$t4,end1
    
    	move    $s1,$0    #s1=j
conv2:
        	beq    $s1,$t5,end2
        	move     $s2,$0    #s2=temp
        
        	move    $s3,$0    #s3=m
conv3:
            	beq    $s3,$t2,end3
        
               move    $s4,$0    #s4=n
conv4:
               beq    $s4,$t3,end4
                    
               add    $t6,$s0,$s3    #t6=i+m
               slt    $s5,$t6,$t0
               beq    $s5,$0,if_end
               add    $t7,$s1,$s4    #t7=j+n
               slt    $s5,$t7,$t1
               beq    $s5,$0,if_end
                    
               mult    $t6,$t1
               mflo    $s5
               add    $s5,$s5,$t7
               sll    $s5,$s5,2
               lw    $s6,array1($s5)    #s6=a[i+m][j+n]
                    
               mult    $s3,$t3
               mflo    $s5
               add    $s5,$s5,$s4
               sll    $s5,$s5,2
               lw    $s7,array2($s5)    #s7=b[m][n]
                    
               mult    $s6,$s7
               mflo    $s5
               add    $s2,$s2,$s5        
            
if_end:
               addi    $s4,$s4,1
               j    conv4
end4:
               mult    $s0,$t5
               mflo    $s5
               add    $s5,$s5,$s1
               sll    $s5,$s5,2
               sw    $s2,array3($s5)    #c[i][j]=temp
        
            	addi    $s3,$s3,1
            	j    conv3
end3:
            	nop
        
        	addi    $s1,$s1,1
        	j    conv2
end2:
        	nop
    	addi    $s0,$s0,1
    	j    conv1
end1:
    	nop
    
    	move    $s0,$0
conv5:
    	beq    $s0,$t4,end5
    
    	move    $s1,$0
conv6:
        	beq    $s1,$t5,end6
        
        	mult    $s0,$t5
        	mflo    $s2
        	add    $s2,$s2,$s1
        	sll    $s2,$s2,2
        	lw    $a0,array3($s2)
        	li    $v0,1
        	syscall
        	la    $a0,space
        	li    $v0,4
        	syscall    
        
        	addi    $s1,$s1,1
        	j    conv6
end6:
        	la    $a0,line
        	li    $v0,4
        	syscall
        
    	addi    $s0,$s0,1
    	j    conv5
end5:
    	li    $v0,10
    	syscall
	
	