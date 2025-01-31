#ifndef ASM_FUNC_H
#define ASM_FUNC_H

#include <stdint.h>

uint32_t read_sp(void);   //return the value of sp
uint32_t read_psp(void);  //return the value of psp
uint32_t read_msp(void);  //return the value of msp
uint32_t read_ctrl(void); //return the value of control


//start user task at task_addr in unprivileged mode and set sp to psp with value psp_init
void start_user(uint32_t *task_addr, uint32_t *psp_init); 
/*
uint32_t *task_addr:
uint32_t *psp_init:

*/


int32_t sys_call(void);
int32_t sys_call_add(int32_t a, int32_t b);

#endif