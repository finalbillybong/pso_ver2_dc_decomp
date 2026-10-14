typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8200 S_g8c4d8200;
typedef struct S_g8c4d8214 S_g8c4d8214;
extern S_g8c4d8200 *g_8c4d8200;
extern S_g8c4d8214 *g_8c4d8214;
extern void call_8c03dc40(void *, int);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
void operation_8c11399c(void)
{
    call_8c03dc40(g_8c4d8200, 1);
    g_8c4d8200 = (S_g8c4d8200 *)0;
    call_8c37d534(g_8c4d8214);
    call_8c011ec0(g_8c4d8214);
    g_8c4d8214 = (S_g8c4d8214 *)0;
}
