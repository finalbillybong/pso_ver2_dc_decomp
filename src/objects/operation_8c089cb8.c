typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46fec0 S_L8c46fec0;
typedef struct S_L8c46fec0_c S_L8c46fec0_c;
typedef struct S_g8c4e18c0 S_g8c4e18c0;
typedef struct Object Object;
typedef struct Arg0_f0 Arg0_f0;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0xf0];
    Arg0_f0 *ff0;
    int ff4;
};
struct Arg1 {
    char unknown0[0x364];
    int f364;
};
struct S_L8c46fec0 {
    char unknown0[0xc];
    S_L8c46fec0_c *f0c;
};
extern S_L8c46fec0 g_8c46fec0;
extern void operation_8c0e7720(void *, int, int);
extern void set_global_8c01c1d0(void);
extern int lookup_low_id(int);
extern void operation_8c110b74(int);
extern void call_8c021cc0(Arg1 *, void *);
void operation_8c089cb8(Object *o, Arg1 *a1)
{
    int v1;
    int v8;
    int v4;
    int v9;
    int v5;
    int v6;
    int v7;
    int t1;
    operation_8c0e7720((void *)((void *)&g_8c46fec0), (int)(o->ff0), (int)(*(S_g8c4e18c0 **)((char *)0x8c4e18c0 + ((int)(o->ff0) << 3))));
    set_global_8c01c1d0();
    if (a1 != 0) {
        v1 = (int)o->ff4;
        if (v1 > 1) {
            a1->f364 = (int)(v1);
        }
    }
    if (o->ff4 > 1) {
        v4 = (int)0x308;
        v5 = (int)0x5f8;
        v6 = (int)0xffff;
        v7 = (int)0x364;
        v8 = (int)0;
        while (4 > v8) {
            t1 = lookup_low_id(v8);
            if (t1 != 0) {
                v9 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v4)) == 3);
                if (v9 != 0 && (*(unsigned short *)((char *)((char *)t1 + 0x0) + (v5)) & 0xffff) != (unsigned short)v6) {
                    *(int *)((char *)((char *)t1 + 0x0) + (v7)) = (int)(o->ff4);
                }
            }
            v8 = (int)(v8 + 1);
        }
    }
    operation_8c110b74((int)((&g_8c46fec0)->f0c));
    call_8c021cc0(a1, (void *)((&g_8c46fec0)->f0c));
}
