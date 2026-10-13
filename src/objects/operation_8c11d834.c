typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d8380 S_g8c4d8380;
typedef struct S_g8c4d8384 S_g8c4d8384;
extern S_g8c4d8380 *g_8c4d8380;
extern S_g8c4d8384 *g_8c4d8384;
extern void call_8c03dc40(void *, int);
extern void call_8c37d534(void *);
extern void call_8c011ec0(void *);
void operation_8c11d834(void)
{
    call_8c03dc40(g_8c4d8380, 1);
    g_8c4d8380 = (S_g8c4d8380 *)0;
    call_8c37d534(g_8c4d8384);
    call_8c011ec0(g_8c4d8384);
    g_8c4d8384 = (S_g8c4d8384 *)0;
}
