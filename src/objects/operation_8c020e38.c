typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct S_vv104 S_vv104;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x176];
    short f198;
    short f19a;
    char unknown19c[0x16c];
    short f308;
    char unknown30a[0x26];
    short f330;
    short f332;
    char unknown334[0x1c];
    int f350;
    char unknown354[0x8];
    int f35c;
    char unknown360[0x1b0];
    short f510;
    char unknown512[0x306];
    int f818;
};
struct Arg1 {
    char unknown0[0x3];
    unsigned char f03;
};
struct S_vv104 {
    int f00;
};
extern int operation_8c02c194(void);
extern void operation_8c02afd8(void *);
extern void apply_setting_8c02c820(void *);
void operation_8c020e38(Object *o, Arg1 *a1)
{
    int v1;
    int v2;
    int v63;
    int t1;
    o->f330 = o->f198;
    o->f332 = o->f19a;
    v1 = (int)(o->f308 == 2);
    if (v1 != 0) {
        t1 = operation_8c02c194();
        if (t1 == 0) {
            v2 = (int)(*(int *)0x8c4dc800 == 1);
            if (v2 == 0) {
                operation_8c02afd8((void *)o);
            }
        }
    }
    v63 = (int)(((o->f818 & 0x10)) != 0);
    if (v63 != 0) {
        o->f350 |= 0x100000;
        if (*(int *)0x8c4703c0 == 3) {
            apply_setting_8c02c820((void *)o);
        }
    }
    o->f35c = a1->f03;
    o->f510 = o->f20;
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
