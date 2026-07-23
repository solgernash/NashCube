#include <gccore.h>
#include <malloc.h>
#define MY_COLOR_RED 0x4C544CFF


int main(void) {

    VIDEO_Init();
    GXRModeObj *rmode = VIDEO_GetPreferredMode(NULL);
    void *fb = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));

    VIDEO_Configure(rmode);
    VIDEO_ClearFrameBuffer(rmode, fb, MY_COLOR_RED);
    VIDEO_SetNextFramebuffer(fb);
    VIDEO_SetBlack(FALSE);
    VIDEO_Flush();
    VIDEO_WaitVSync();

    while (1) {
        VIDEO_WaitVSync();
    } //while (1)

} //main
