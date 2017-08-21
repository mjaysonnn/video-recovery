#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <CL/cl.h>

#include "vr.h"

/*
 * TODO
 * Define global variables here. For example :
 * cl_platform_id platform;
 */

void init() {
    /*
     * TODO
     * Input-independent jobs (e.g.., OpenCL initialization, kernel build, ...)
     * go here. For example :
     * clGetPlatformIDs(1, &platform, NULL);
     */ 
}

void recoverVideo(unsigned char *videoR, unsigned char *videoG, unsigned char *videoB, int *vrIdx, int N, int H, int W) {
    /*
     * TODO
     * Implement this function. Write result to vrIdx.
     * See "vr_seq.c" for details.
     */
}
