typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2c0 S_g8c4dc2c0;
typedef struct S_g8c4dc2c4 S_g8c4dc2c4;
typedef struct S_g8c4dc2c8 S_g8c4dc2c8;
typedef struct S_g8c4dc2cc S_g8c4dc2cc;
typedef struct S_g8c4dc2d4 S_g8c4dc2d4;
extern S_g8c4dc2c0 *g_8c4dc2c0;
extern S_g8c4dc2c4 *g_8c4dc2c4;
extern S_g8c4dc2c8 *g_8c4dc2c8;
extern S_g8c4dc2cc *g_8c4dc2cc;
extern int g_8c4dc2d0;
extern S_g8c4dc2d4 *g_8c4dc2d4;
extern void call_8c18de08(void *);
extern void call_8c18df98(void *, int);
void operation_8c192220(void)
{
    call_8c18de08(g_8c4dc2d4);
    g_8c4dc2d4 = (S_g8c4dc2d4 *)0;
    call_8c18de08(g_8c4dc2cc);
    g_8c4dc2cc = (S_g8c4dc2cc *)0;
    g_8c4dc2d0 = 0;
    call_8c18de08(g_8c4dc2c8);
    g_8c4dc2c8 = (S_g8c4dc2c8 *)0;
    call_8c18de08(g_8c4dc2c4);
    g_8c4dc2c4 = (S_g8c4dc2c4 *)0;
    call_8c18df98(g_8c4dc2c0, 0);
    g_8c4dc2c0 = (S_g8c4dc2c0 *)0;
    *(int *)0x8c4dc2d8 = 0;
}
