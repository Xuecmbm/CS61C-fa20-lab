#include "transpose.h"

/* The naive transpose function as a reference. */
void transpose_naive(int n, int blocksize, int *dst, int *src) {
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            dst[y + x * n] = src[x + y * n];
        }
    }
}

/* Implement cache blocking below. You should NOT assume that n is a
 * multiple of the block size. */
void transpose_blocking(int n, int blocksize, int *dst, int *src) {
    // YOUR CODE HERE
    int i, j;
    for(i = 0; i < n / blocksize; i++){
        for(j = 0; j < n / blocksize; j++){
            for(int x = 0; x < blocksize; x++){
                for(int y = 0; y < blocksize; y++){
                    dst[(y + j * blocksize) + (x + i * blocksize) * n] = src[(x + i * blocksize) + (y + j * blocksize) * n];
                }
            }
        }
        for(int x = 0; x < blocksize; x++){
            for(int y = j * blocksize; y < n; y++){
                dst[y + (x + i * blocksize) * n] = src[(x + i * blocksize) + y * n];
            }
        }
    }
    for(int x = i * blocksize; x < n; x++){
        for(int y = 0; y < n; y++){
            dst[y + x * n] = src[x + y * n];
        }
    }
}
