/*
 * @Author: Xuecmbm 1124653720@qq.com
 * @Date: 2024-07-25 16:38:57
 * @LastEditors: Xuecmbm 1124653720@qq.com
 * @LastEditTime: 2024-07-27 10:05:41
 * @FilePath: \CS61C\CS61C-fa20-lab\lab02\bit_ops.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    // YOUR CODE HERE
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns 
    // 0 or 1)
    return (x >> n) & 1;

    return -1;
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    // YOUR CODE HERE
    if(v == 1){
        *x |= (1 << n);
    }else if(v == 0){
        *x &= ~(1 << n);
    }else{
        printf("invalid v\n");
    }
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    // YOUR CODE HERE
    *x ^= (1 << n);
}

