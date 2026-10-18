typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
};
struct Arg0_13c {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x46];
    int f350;
    char unknown354[0x104];
    float f458;
};
extern void call_8c1ace6c(void *);
extern int call_8c207378(int, int);
extern void call_8c185134(void *);
extern void operation_8c07da28(void *);
void operation_8c07d324(Object *o)
{
    int v1;
    int v8;
    int v2;
    int v6;
    int v5;
    int v3;
    int v4;
    int t1;
    v1 = (int)(o->f13c->f308 == 2);
    if (v1 == 0) {
        call_8c1ace6c((void *)(((char *)o->f13c + 0x4c0)));
        v2 = (int)0x1e4;
        v3 = (int)0x13c;
        v6 = (int)0;
        v4 = (int)0x418;
        v5 = (int)-1;
        while (v6 != 3) {
            t1 = call_8c207378((int)((int)o + v2), v6);
            if (t1 != v5) {
                *(char *)((char *)((char *)((int)*(int *)((char *)((char *)o + 0x0) + (v3)) + v4) + 0x88) + ((short)t1)) = v5;
            }
            v6 = (int)(v6 + 1);
        }
        v8 = (int)(((o->f13c->f350 & 0x200000)) != 0);
        if (v8 == 0) {
            *(float *)((char *)(int *)((char *)o->f13c + 0x418) + 0x40) = 0.0f;
            call_8c185134((void *)(((char *)o->f13c + 0x418)));
        }
    }
    operation_8c07da28((void *)o);
}
