typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_154 Arg0_154;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xe];
    int f14;
    char unknown18[0x14];
    int f2c;
    char unknown30[0xac];
    int fdc;
    char unknowne0[0x28];
    int f108;
    char unknown10c[0x48];
    Arg0_154 *f154;
    int f158;
};
extern int call_8c18e8a0(void *, int);
extern int allocate_block(void *, unsigned int);
extern void call_8c25d634(int, Object *, void *);
void operation_8c25d488(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    t1 = call_8c18e8a0((void *)(o->f154), 0x168);
    if (t1 == 0) {
        t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t2 != 0) {
            call_8c25d634(t2, o, (void *)(((char *)o + 0x78)));
        }
        t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t3 != 0) {
            call_8c25d634(t3, o, (void *)(((char *)o + 0xa4)));
        }
    }
    if (0xc > o->f158) {
        if ((int)(o->f154) >= 0x78) {
            t4 = call_8c18e8a0((void *)((int)o->f154 + -0x78), 0x2d0);
            if (t4 == 0) {
                o->f2c = 0xc;
                t5 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
                if (t5 != 0) {
                    call_8c25d634(t5, o, (void *)(((char *)o + 0x20)));
                }
                t6 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
                if (t6 != 0) {
                    call_8c25d634(t6, o, (void *)(((char *)o + 0x4c)));
                }
                o->fdc = (int)(o->f158);
                t7 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
                if (t7 != 0) {
                    call_8c25d634(t7, o, (void *)(((char *)o + 0xd0)));
                }
                o->f158 += 1;
            }
        }
        if (!((int)(o->f154) >= 0x1e0)) {
            goto L_8c25d5e6;
        }
        t8 = call_8c18e8a0((void *)((int)o->f154 + -0x1e0), 0x2d0);
        if (t8 != 0) {
            goto L_8c25d5e6;
        }
        o->f2c = 0xd;
        t9 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t9 != 0) {
            call_8c25d634(t9, o, (void *)(((char *)o + 0x20)));
        }
        t10 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t10 != 0) {
            call_8c25d634(t10, o, (void *)(((char *)o + 0x4c)));
        }
        o->f108 = (int)(o->f158);
        t11 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x68);
        if (t11 != 0) {
            call_8c25d634(t11, o, (void *)(((char *)o + 0xfc)));
        }
        o->f158 += 1;
    } else {
        if (o->f14 == 0) {
            o->f04 |= 1;
            return;
        }
    }
L_8c25d5e6:;
    o->f154 = (Arg0_154 *)((int)o->f154 + 1);
}
