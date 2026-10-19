typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_c S_vv3_c;
struct Object {
    char unknown0[0x14];
    int f14;
};
struct S_vv3 {
    char unknown0[0xc];
    S_vv3_c *f0c;
};
extern int hierarchy_is_active(void *);
extern void call_8c245fdc(Object *, void *, void *, int, int, int);
extern void restore_child_blend(void);
void operation_8c245f68(Object *o)
{
    int v2;
    int v7;
    int v4;
    int v1;
    S_vv3 *v3;
    int t1;
    int t2;
    v1 = (int)o->f14;
    v3 = (S_vv3 *)v1;
    v2 = (int)0;
    while (v3 != 0) {
        if (v3 != 0) {
            v4 = (int)v3->f0c;
            if (v4 != 0) {
                t1 = hierarchy_is_active((void *)v3);
                if (t1 != 0) {
                    t2 = hierarchy_is_active((void *)v4);
                    v7 = (int)v2;
                    if (t2 != 0) {
                        call_8c245fdc(o, (void *)((int)v3 + 0x24), (void *)((int)v3 + 0x2c), (int)(v4 + 0x2c), (int)(v4 + 0x24), v2);
                        v7 = (int)(v2 + 1);
                    }
                    v2 = (int)v7;
                }
            }
        }
        v3 = (S_vv3 *)v3->f0c;
    }
    restore_child_blend();
}
