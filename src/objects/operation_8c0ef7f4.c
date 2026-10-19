typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4704c0 S_g8c4704c0;
typedef struct S_g8c4704c4 S_g8c4704c4;
typedef struct S_g8c4704c4_4 S_g8c4704c4_4;
struct S_g8c4704c4 {
    char unknown0[0x4];
    S_g8c4704c4_4 *f04;
};
extern S_g8c4704c0 *g_8c4704c0;
extern S_g8c4704c4 *g_8c4704c4;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4704c4 *);
void operation_8c0ef7f4(void)
{
    call_8c37d534((void *)(g_8c4704c4->f04));
    call_8c011ec0((void *)(g_8c4704c4->f04));
    if (g_8c4704c0 != 0) {
        call_8c03dc40(g_8c4704c0, 1);
    }
    if (g_8c4704c4 != 0) {
        call_8c18de08(g_8c4704c4);
    }
}
