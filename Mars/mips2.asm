.data
array:	.space	40			# �洢��Щ����Ҫ�õ����飬������Ҫʹ��10*4=40�ֽ�
					# һ��int������Ҫռ��4���ֽڣ���Ҫ�洢10��int����
					# ��ˣ�array[0]�ĵ�ַΪ0x00��array[1]�ĵ�ַΪ0x04
					# array[2]�ĵ�ַΪ0x08���Դ�����
str:	.asciiz	"The numbers are:\n"
space:	.asciiz	" "

.text
	li	$v0,5
	syscall				# ����һ������
	move	$s0,$v0			# $s0 is n
	
	li	$t0,0			# $t0 ѭ������
loop_in:
	beq	$t0,$s0,loop_in_end	# $t0==$s0��ʱ������ѭ��
	li	$v0,5
	syscall				# ����һ������
	sll	$t1,$t0,2		# $t1=$t0<<2����$t1=$t0*4
	sw	$v0,array($t1)		# ��������������ַΪarray+$t1���ڴ���
	addi	$t0,$t0,1		# $t0=$t0+1
	j	loop_in			# ��ת��loop_in
loop_in_end:

	la	$a0,str
	li	$v0,4
	syscall				# �����ʾ��Ϣ
	
	li	$t0,0
loop_out:
	beq	$t0,$s0,loop_out_end
	sll	$t1,$t0,2		# $t1=$t0<<2����$t1=$t0*4
	lw	$a0,array($t1)		# ���ڴ��е�ַΪarray+$t1����ȡ����$a0��
	li	$v0,1
	syscall				# ���$a0
	la	$a0,space
	li	$v0,4
	syscall				# ���һ���ո�
	addi	$t0,$t0,1
	j	loop_out
loop_out_end:
	
	li	$v0,10
	syscall				# ��������		# ��������