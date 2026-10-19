typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_bc8 S_vv4_bc8;
struct Object {
    char unknown0[0x2];
    short f02;
    int f04;
};
struct S_vv4 {
    char unknown0[0xbc8];
    S_vv4_bc8 *fbc8;
};
extern int operation_8c16a18c(void *, int);
extern int operation_8c169508(void *);
extern void release_child_slot_8c022624(void *, void *);
void operation_8c022594(Object *o)
{
    int v1;
    short v2;
    S_vv4 *v4;
    int v7;
    int v9;
    int v12;
    int v13;
    int t1;
    int t2;
    v2 = o->f02;
    if ((unsigned short)v2 == 0xffff) {
        v4 = (S_vv4 *)0;
    } else {
        if ((int)(unsigned short)v2 >= 0xc) {
            v4 = (S_vv4 *)0;
        } else {
            v1 = (int)*(int *)((char *)0x8c41ce2c + ((unsigned short)v2 << 2));
            v4 = (S_vv4 *)v1;
        }
    }
    if (v4 != 0) {
        v7 = (int)*(int *)0x8c4627c8;
        v12 = (int)0;
        if (v7 == 0) {
            v9 = (int)0;
            if ((unsigned short)v2 == *(int *)0x8c418248) {
                v9 = (int)1;
            }
            v12 = (int)v9;
        }
        v13 = (int)(v12 == 0);
        if (v13 != 0) {
            t1 = operation_8c16a18c((void *)(v4->fbc8), (int)(o->f04));
            if (t1 != 0) {
                t2 = operation_8c169508((void *)t1);
                if (t2 != 0) {
                    release_child_slot_8c022624((void *)v4, (void *)t2);
                }
            }
        }
    }
}
