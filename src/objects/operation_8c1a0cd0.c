typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct Arg0_39c Arg0_39c;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x8c];
    float f398;
    Arg0_39c *f39c;
};
struct S_vv4 {
    int f00;
    char unknown4[0x30];
    int f34;
    char unknown38[0x34c];
    int f384;
};
extern int g_8c306c34;
extern int g_8c467874;
extern int g_8c467878;
extern float call_8c37eb0c(void *);
extern void operation_8c04a43c(void *, void *, float);
void operation_8c1a0cd0(Object *o)
{
    int v3;
    S_vv4 *v4;
    int v5;
    float t1;
    int mask;
    int off;
    int off2;
    {
        int *pf1 = (int *)((char *)o + 0x39c);
        *pf1 = (int)((float)*pf1 + 2184.0f);
    }
    t1 = call_8c37eb0c((void *)(o->f39c));
    o->f398 = t1 + 60.0f;
    operation_8c04a43c((void *)o, (void *)(((char *)o + 0x3ac)), o->f398);
    mask = 0x800;
    off = 0x384;
    off2 = 0x30a;
    v3 = g_8c467874;
    while ((g_8c467874 + g_8c467878) > v3) {
        v4 = (S_vv4 *)*(S_g8c467240 **)((char *)0x8c467240 + (v3 << 2));
        if (v4 != 0 && v4 != (void *)o && ((v4->f34 & mask)) != 0) {
            v5 = (int)(v4->f00 == g_8c306c34);
            if (v5 != 0 && *(int *)((char *)v4 + off) == 0) {
                *(short *)((char *)o + off2) = 1;
            }
        }
        v3 = (int)(v3 + 1);
    }
}
