typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
struct S_g8c4db9e4 {
    char unknown0[0x118c];
    unsigned char f118c;
    char unknown118d[0xf];
    unsigned char f119c;
};
extern S_g8c4db9e4 *g_8c4db9e4;
extern void call_8c12b77c(void *, void *, int);
void operation_8c25c308(void)
{
    if ((g_8c4db9e4->f118c) != 0) {
        call_8c12b77c((void *)((void *)0x8c513400), (void *)(&g_8c4db9e4->f118c), 8);
    }
    if ((g_8c4db9e4->f119c) != 0) {
        call_8c12b77c((void *)((void *)0x8c513408), (void *)(&g_8c4db9e4->f119c), 8);
    }
}
