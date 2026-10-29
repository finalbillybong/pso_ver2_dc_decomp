typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern int g_8c510ba0;
extern int call_8c238458(int);
extern int operation_8c238e94(int);
extern int operation_8c238420(int);
typedef struct S_g8c339ca0 {
    char unknown0[0x504];
    int f504[4];
} S_g8c339ca0;
extern S_g8c339ca0 g_8c339ca0;
void operation_8c2488e0(Object *o)
{
    int v1;
    int v2;
    int v3;
    int t1;
    int t2;
    v1 = (int)(g_8c510ba0 != 0);
    if (v1 != 0) {
        v2 = (int)o->f04;
        v3 = (int)o->f08;
        t1 = call_8c238458(v3);
        if (v2 < 0 || v2 >= 4) {
            return;
        }
        t2 = operation_8c238e94(t1);
        if (t2 != 0) {
            v3 = operation_8c238420(0x8c9f);
        }
        *(int *)((char *)g_8c339ca0.f504 + (v2 << 2)) = v3;
    }
}
