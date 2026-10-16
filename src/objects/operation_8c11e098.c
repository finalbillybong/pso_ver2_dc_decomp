typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c31146c S_L8c31146c;
typedef struct S_vv5_0 S_vv5_0;
struct S_L8c31146c {
    char unknown0[0x8];
    short f08;
    short f0a;
    short f0c;
};
extern int g_8c418244;
extern int g_8c4d8458;
extern S_L8c31146c g_8c31146c;
extern void call_8c0344f0(void *, short, short, short);
void operation_8c11e098(void)
{
    int v2;
    int v1;
    int v3;
    int v4;
    int v5;
    v1 = (int)g_8c418244;
    v2 = (int)g_8c4d8458;
    if (v2 != v1) {
        g_8c4d8458 = (int)(v1);
        v3 = (int)0;
        while (7 > v3) {
            v4 = (int)(v3 << 2);
            v5 = (int)(v4 << 2);
            call_8c0344f0((void *)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)&g_8c31146c)))), *(short *)((char *)&g_8c31146c.f08 + (v5)), *(short *)((char *)&g_8c31146c.f0a + (v5)), *(short *)((char *)&g_8c31146c.f0c + (v5)));
            v3 = (int)(v3 + 1);
        }
    }
}
