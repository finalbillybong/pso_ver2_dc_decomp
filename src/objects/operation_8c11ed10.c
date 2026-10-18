typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d84a0 S_g8c4d84a0;
typedef struct S_g8c4d84a4 S_g8c4d84a4;
typedef struct S_g8c4d84a4_4 S_g8c4d84a4_4;
typedef struct S_g8c4d84a8 S_g8c4d84a8;
struct S_g8c4d84a4 {
    char unknown0[0x4];
    S_g8c4d84a4_4 *f04;
};
extern S_g8c4d84a0 *g_8c4d84a0;
extern S_g8c4d84a4 *g_8c4d84a4;
extern S_g8c4d84a8 *g_8c4d84a8;
extern void call_8c18de08(void *);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c11ed10(void)
{
    call_8c18de08(g_8c4d84a8);
    g_8c4d84a8 = (S_g8c4d84a8 *)0;
    call_8c37d534((void *)(g_8c4d84a4->f04));
    call_8c011ec0((void *)(g_8c4d84a4->f04));
    if (g_8c4d84a0 != 0) {
        call_8c03dc40(g_8c4d84a0, 1);
    }
    if (g_8c4d84a4 != 0) {
        call_8c18de08((void *)g_8c4d84a4);
    }
}
