typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510fa0 S_g8c510fa0;
typedef struct S_g8c510fa4 S_g8c510fa4;
typedef struct S_g8c510fa4_0 S_g8c510fa4_0;
struct S_g8c510fa4 {
    S_g8c510fa4_0 *f00;
};
extern S_g8c510fa0 *g_8c510fa0;
extern S_g8c510fa4 *g_8c510fa4;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c510fa4 *);
void operation_8c24b6e8(void)
{
    call_8c37d534((void *)(g_8c510fa4->f00));
    call_8c011ec0((void *)(g_8c510fa4->f00));
    if (g_8c510fa0 != 0) {
        call_8c03dc40(g_8c510fa0, 1);
    }
    if (g_8c510fa4 != 0) {
        call_8c18de08(g_8c510fa4);
    }
}
