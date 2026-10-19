typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8628 S_g8c4d8628;
typedef struct S_g8c4d97d4 S_g8c4d97d4;
struct S_g8c4d97d4 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d8628 *g_8c4d8628;
extern S_g8c4d97d4 *g_8c4d97d4;
extern void call_8c18de08(void *);
extern void call_8c37e7ac(int);
extern void call_8c37e7c8(int);
extern void call_8c37e7d4(void *);
extern void call_8c391c94(void);
void operation_8c121560(void)
{
    int v1;
    g_8c4d97d4->f04 |= 1;
    g_8c4d97d4 = (S_g8c4d97d4 *)0;
    call_8c18de08(g_8c4d8628);
    g_8c4d8628 = (S_g8c4d8628 *)0;
    call_8c37e7ac(0);
    call_8c37e7c8(0x2710);
    v1 = (int)0;
    while (0x80 > v1) {
        *(float *)((char *)0x8c4d87d0 + (v1 << 2)) = 0.0f;
        v1 = (int)(v1 + 1);
    }
    call_8c37e7d4((void *)((void *)0x8c4d87d0));
    call_8c391c94();
}
