typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510e20 S_g8c510e20;
typedef struct S_g8c510e24 S_g8c510e24;
extern S_g8c510e20 *g_8c510e20;
extern S_g8c510e24 *g_8c510e24;
extern void call_8c2456e8(void *, int);
extern void call_8c011ed8(void *);
void operation_8c244ca8(void)
{
    call_8c2456e8(g_8c510e24, 1);
    g_8c510e24 = 0;
    call_8c011ed8(g_8c510e20);
    g_8c510e20 = 0;
}
