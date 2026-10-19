typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9980 S_g8c4d9980;
typedef struct S_g8c4d9984 S_g8c4d9984;
typedef struct S_g8c4d9984_0 S_g8c4d9984_0;
typedef struct S_g8c4d9984_4 S_g8c4d9984_4;
struct S_g8c4d9984 {
    S_g8c4d9984_0 *f00;
    S_g8c4d9984_4 *f04;
};
extern S_g8c4d9980 *g_8c4d9980;
extern S_g8c4d9984 *g_8c4d9984;
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
extern void call_8c03dc40(void *, int);
extern void call_8c18de08(S_g8c4d9984 *);
void operation_8c129b68(void)
{
    call_8c37d534((void *)(g_8c4d9984->f04));
    call_8c37d534((void *)(g_8c4d9984->f00));
    call_8c011ec0((void *)(g_8c4d9984->f00));
    call_8c011ec0((void *)(g_8c4d9984->f04));
    if (g_8c4d9980 != 0) {
        call_8c03dc40(g_8c4d9980, 1);
        g_8c4d9980 = (S_g8c4d9980 *)0;
    }
    if (g_8c4d9984 != 0) {
        call_8c18de08(g_8c4d9984);
        g_8c4d9984 = (S_g8c4d9984 *)0;
    }
}
