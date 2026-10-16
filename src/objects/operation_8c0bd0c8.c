typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f3c4 S_L8c46f3c4;
typedef struct S_g8c46f3c0 S_g8c46f3c0;
struct S_L8c46f3c4 {
    float f00;
    float f04;
    float f08;
};
extern int g_8c46f3bc;
extern S_g8c46f3c0 *g_8c46f3c0;
extern S_L8c46f3c4 g_8c46f3c4;
extern void call_8c37dd28(int, void *);
extern void transform_in_vector_frame(void *, void *, void *);
void operation_8c0bd0c8(void)
{
    if (g_8c46f3bc == 0x18) {
        call_8c37dd28(0, g_8c46f3c0);
    }
    if (g_8c46f3bc == 0x1d) {
        (&g_8c46f3c4)->f00 = 0.0f;
        (&g_8c46f3c4)->f04 = 0.0f;
        (&g_8c46f3c4)->f08 = 0.0f;
        transform_in_vector_frame((void *)((void *)0x8c46ee84), (void *)((void *)&g_8c46f3c4), (void *)((void *)&g_8c46f3c4));
    }
    g_8c46f3bc += 1;
}
