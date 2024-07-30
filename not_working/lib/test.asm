bits 64
global ASM_Succ

section .text

ASM_Succ:
    inc rdi
    dec rsi
    jnz ASM_Succ
    mov rax, rdi
    ret
