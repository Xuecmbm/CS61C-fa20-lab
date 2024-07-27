/*
 * @Author: Xuecmbm 1124653720@qq.com
 * @Date: 2024-07-25 16:38:57
 * @LastEditors: Xuecmbm 1124653720@qq.com
 * @LastEditTime: 2024-07-27 11:08:09
 * @FilePath: \CS61C\CS61C-fa20-lab\lab02\lfsr.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    int leftNum = get_bit(*reg, 0) ^ get_bit(*reg, 2) ^ get_bit(*reg, 3) ^ get_bit(*reg, 5);
    *reg = *reg >> 1;
    set_bit(reg, 15, leftNum);
}

