#include <gccore.h>
#include <malloc.h>


int main(void) {

    VIDEO_Init();
    GXRModeObj *rmode = VIDEO_GetPreferredMode(NULL);
    void *fb = memalign(0, VIDEO_GetFrameBufferSize(rmode));


    VIDEO_Configure(rmode);
    VIDEO_ClearFrameBuffer(rmode, fb, COLOR_RED);
    VIDEO_SetNextFramebuffer(fb);
    VIDEO_SetBlack(FALSE);
    VIDEO_Flush();
    VIDEO_WaitVSync();

    while (1) {
        VIDEO_WaitVSync();
    } //while (1)

} //main
