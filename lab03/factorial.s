.globl factorial

.data
n: .word 8

.text
main:
    la t0, n  
    lw a0, 0(t0)  # a0 = n
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE
    addi sp, sp, -4
    sw s0, 0(sp)
    addi t0, a0, 0 # i:t0 = n 
    addi s0, x0, 1 # sum:s0 = 1
loop:
    mul s0, s0, t0 # sum *= i
    addi t1, x0, 1 # t1 = 1
    sub t0, t0, t1 # t0--
    bgt t0, x0, loop
exit:
    addi a0, s0, 0 # return a0
    lw s0, 0(sp)
    addi sp, sp, 4
    jr ra