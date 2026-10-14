typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv66 S_vv66;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x2e6];
    short f308;
    char unknown30a[0xae];
    int f3b8;
};
struct S_vv66 {
    int f00;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c0d8c40(int, Object *, short);
void operation_8c020d1c(Object *o)
{
    int v1;
    int v2;
    int t1;
    v1 = (int)(o->f308 == 1);
    if (v1 == 0) {
        v2 = (int)(o->f308 == 3);
        if (v2 == 0) {
            goto L_8c020d66;
        }
    }
    if (o->f3b8 == 0) {
        t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x470);
        if (t1 != 0) {
            call_8c0d8c40(t1, o, o->f20);
        }
        o->f3b8 = (int)(t1);
    }
L_8c020d66:;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
}
