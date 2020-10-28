/*
 *  Startup and the minimum runtime implementation for
 *  SOLID debugging features.
 */


.thumb
.text

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

.data
	.align 2
.globl	__start___llvm_prf_cnts
.globl 	__stop___llvm_prf_cnts
.globl 	__start___llvm_prf_data
.globl 	__stop___llvm_prf_data
.globl 	__start___llvm_prf_names
.globl 	__stop___llvm_prf_names
.globl __llvm_profile_runtime
__llvm_profile_runtime:
	.long	0
