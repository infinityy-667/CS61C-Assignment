.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0) #a0 == 8
    jal ra, factorial

    mv a1, a0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    li t1, 1 #初始化为1
    li t2, 1 #来记录大小
    addi t3, a0, 1 #9
    
loop:
    bge t1, t3, Done # 到了9就退出
    mul t2, t2, t1 #乘
    addi t1, t1, 1 #自增
    j loop 
    
    
Done:
    mv a0, t2 #赋值给a0
    jalr ra #返回main
    
    
    