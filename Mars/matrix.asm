.data
array:	.space	3000			# �洢��Щ����Ҫ�õ����飬������Ҫʹ��10*4=40�ֽ�
					# һ��int������Ҫռ��4���ֽڣ���Ҫ�洢10��int����
					# ��ˣ�array[0]�ĵ�ַΪ0x00��array[1]�ĵ�ַΪ0x04
					# array[2]�ĵ�ַΪ0x08���Դ�����
str:	.asciiz	"The numbers are:\n"
space:	.asciiz	" "
tab:	.asciiz	"\n"

.text
	li	$v0,5
	syscall				# ����һ������
	move	$s0,$v0
	li	$v0,5			# $s0 is n
	syscall
	move	$s1,$v0
	multu	$s0,$s1
	mflo	$t2
	addi	$s1,$s1,0x1
	li	$t3,1
	li	$t4,1
	li	$t6,0	
	li	$t8,0xc		# $t0 ѭ������
loop_in:
	beq	$t2,$zero,end_loop
	beq	$t3,$s1,Hang
	next:
		li	$v0,5
		syscall	
		move	$t5,$v0
		bgtz	$t5,out
		# $t0==$s0��ʱ������ѭ��
		addi	$t3,$t3,0x1	
		sub	$t2,$t2,0x1
		j	loop_in
Hang:
	addi	$t4,$t4,0x1
	li	$t3,0x1
	j	next
out:
	addi	$t6,$t6,0x1
	multu	$t6,$t8
	mflo	$t7
	sw	$t4,array($t7)
	addi	$t7,$t7,0x4
	sw	$t3,array($t7)
	addi	$t7,$t7,0x4
	sw	$t5,array($t7)
	addi	$t3,$t3,0x1
	sub	$t2,$t2,0x1
	j	loop_in
		# ��ת��loop_in
end_loop:
	beq	$t6,$zero,end
	multu	$t6,$t8
	mflo	$t7
	lw	$a0,array($t7)
	li	$v0,1
	syscall
	la	$a0,space
	li	$v0,4
	syscall
	addi	$t7,$t7,0x4
	lw	$a0,array($t7)
	li	$v0,1
	syscall
	la	$a0,space
	li	$v0,4
	syscall
	addi	$t7,$t7,0x4
	lw	$a0,array($t7)
	li	$v0,1
	syscall
	la	$a0,tab
	li	$v0,4
	syscall
	sub	$t6,$t6,0x1
	j	end_loop
	
end:
	li	$v0,10
	syscall				# ��������