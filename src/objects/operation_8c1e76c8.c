typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct S_g8c4db9e4 {
    char unknown0[0x12b8];
    unsigned char f12b8;
    char unknown12b9[0xf];
    unsigned char f12c8;
};
extern S_g8c4db9e4 *g_8c4db9e4;
extern void call_8c12b77c(void *, void *, int);
void operation_8c1e76c8(void)
{
    if ((g_8c4db9e4->f12b8) != 0) {
        call_8c12b77c((void *)((void *)0x8c4e3120), (void *)(&g_8c4db9e4->f12b8), 8);
    }
    if ((g_8c4db9e4->f12c8) != 0) {
        call_8c12b77c((void *)((void *)0x8c4e3128), (void *)(&g_8c4db9e4->f12c8), 8);
    }
}
