typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern char g_8c4d5998[];
extern int current_effect_mode(void);
void operation_8c102f40(float f0)
{
    int t1;
    if (*(int *)0x8c4d5954 == 1) {
        *(float *)(g_8c4d5998 + 0x8) -= f0;
        t1 = current_effect_mode();
        if (!((unsigned int)1 >= (unsigned int)(t1 + -0xd))) {
            if (-6000.0f > *(float *)(g_8c4d5998 + 0x8)) {
                *(float *)(g_8c4d5998 + 0x8) = -6000.0f;
            }
            if (*(float *)(g_8c4d5998 + 0x8) > 6000.0f) {
                *(float *)(g_8c4d5998 + 0x8) = 6000.0f;
            }
        }
    }
}
