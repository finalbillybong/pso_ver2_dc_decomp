typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct S_L8c46f6a0 S_L8c46f6a0;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2e6];
    short f308;
};
struct S_L8c46f5a0 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c46f6a0 {
    float f00;
    float f04;
    float f08;
    float f0c;
};
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c46f5a0 g_8c46f5a0;
extern S_L8c46f6a0 g_8c46f6a0;
extern void call_8c013b2c(int, float, float);
extern void call_8c025124(void);
extern void call_8c03b80c(short);
extern void call_8c0b6394(int, void *, void *, int, float, Object *, void *);
extern int call_8c122700(void *, int);
extern void call_8c1ab508(int, Object *, int, int, int, int);
void operation_8c025020(Object *o, int a1)
{
    int v1;
    int t1;
    int t2;
    v1 = (int)(o->f308 == 2);
    if (v1 == 0) {
        call_8c025124();
    }
    t1 = call_8c122700(g_8c4d97e0, 0x58);
    if (t1 != 0) {
        call_8c1ab508(t1, o, o->f20, -1, 0x3c, a1);
    }
    call_8c03b80c(o->f20);
    (&g_8c46f5a0)->f00 = 0.0f;
    (&g_8c46f5a0)->f04 = -1.0f;
    (&g_8c46f5a0)->f08 = 0.0f;
    (&g_8c46f6a0)->f00 = 1.0f;
    (&g_8c46f6a0)->f04 = 1.0f;
    (&g_8c46f6a0)->f08 = 0.8f;
    (&g_8c46f6a0)->f0c = 0.63f;
    t2 = call_8c122700(g_8c4d97e0, 0x68);
    if (t2 != 0) {
        call_8c0b6394(t2, (void *)&g_8c46f6a0, (void *)&g_8c46f5a0, 0xa, 0.2f, o, g_8c44bea0);
    }
    call_8c013b2c(o->f20, 1.0f, 0.5f);
}
