typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8480 S_g8c4d8480;
typedef struct S_g8c4d8484 S_g8c4d8484;
typedef struct S_g8c4d8484_0 S_g8c4d8484_0;
typedef struct S_g8c4d8484_4 S_g8c4d8484_4;
typedef struct S_g8c4d8488 S_g8c4d8488;
struct S_g8c4d8484 {
    S_g8c4d8484_0 *f00;
    S_g8c4d8484_4 *f04;
};
extern S_g8c4d8480 *g_8c4d8480;
extern S_g8c4d8484 *g_8c4d8484;
extern S_g8c4d8488 *g_8c4d8488;
extern void call_8c18de08(void *);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
void operation_8c11e814(void)
{
    call_8c18de08(g_8c4d8488);
    g_8c4d8488 = (S_g8c4d8488 *)0;
    call_8c37d534((void *)(g_8c4d8484->f04));
    call_8c37d534((void *)(g_8c4d8484->f00));
    call_8c011ec0((void *)(g_8c4d8484->f04));
    call_8c011ec0((void *)(g_8c4d8484->f00));
    if (g_8c4d8480 != 0) {
        call_8c03dc40(g_8c4d8480, 1);
    }
    if (g_8c4d8484 != 0) {
        call_8c18de08((void *)g_8c4d8484);
    }
}
