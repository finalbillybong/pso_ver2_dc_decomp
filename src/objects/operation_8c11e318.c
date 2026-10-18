typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8460 S_g8c4d8460;
typedef struct S_g8c4d8464 S_g8c4d8464;
typedef struct S_g8c4d8464_0 S_g8c4d8464_0;
typedef struct S_g8c4d8464_4 S_g8c4d8464_4;
typedef struct S_g8c4d8468 S_g8c4d8468;
struct S_g8c4d8464 {
    S_g8c4d8464_0 *f00;
    S_g8c4d8464_4 *f04;
};
extern S_g8c4d8460 *g_8c4d8460;
extern S_g8c4d8464 *g_8c4d8464;
extern S_g8c4d8468 *g_8c4d8468;
extern void call_8c18de08(void *);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c11e318(void)
{
    call_8c18de08(g_8c4d8468);
    g_8c4d8468 = (S_g8c4d8468 *)0;
    call_8c37d534((void *)(g_8c4d8464->f04));
    call_8c37d534((void *)(g_8c4d8464->f00));
    call_8c011ec0((void *)(g_8c4d8464->f04));
    call_8c011ec0((void *)(g_8c4d8464->f00));
    if (g_8c4d8460 != 0) {
        call_8c03dc40(g_8c4d8460, 1);
    }
    if (g_8c4d8464 != 0) {
        call_8c18de08((void *)g_8c4d8464);
    }
}
