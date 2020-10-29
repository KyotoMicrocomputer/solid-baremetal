/*
 * Copyright (c) 1995-2020 by Kyoto Micro Computer Co.,LTD.
 * All Rights Reserved.
 */

	.text
	.arm
	.align 4
	.type	_kmc_asm_init, %function
_kmc_asm_init:
/*
        Write target-dependent initialization in assembler.
*/
#if defined(__clang__)
/*
 *  Do not edit.
 *  Required symbols for the llvm coverage.
 */
.globl __llvm_profile_register_names_function
__llvm_profile_register_names_function:
    bx lr
.globl __llvm_profile_register_function
__llvm_profile_register_function:
    bx lr
.globl	__start___llvm_prf_cnts
.globl 	__stop___llvm_prf_cnts
.globl 	__start___llvm_prf_data
.globl 	__stop___llvm_prf_data
.globl 	__start___llvm_prf_names
.globl 	__stop___llvm_prf_names
.globl	__llvm_profile_runtime
__llvm_profile_runtime:
	.long	0
#endif
	bx	lr
	.size	_kmc_asm_init, .-_kmc_asm_init
