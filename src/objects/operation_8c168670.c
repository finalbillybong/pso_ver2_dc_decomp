typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct S_c8c053d84_s3c S_c8c053d84_s3c;
typedef struct Frame Frame;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4d9df0 S_g8c4d9df0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_s30 Arg0_s30;
typedef struct Block_p0_30 {
    int f00;
    char unknown4[0x8];
} Block_p0_30;
struct Frame {
    Vector3 f00;
    unsigned short f0c;
    char unknowne[0x2];
    int f10;
    int f14;
    char unknown18[0x4];
    char f1c;
    char unknown1d[0x3];
    float f20;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    int f24;
    int f28;
    int f2c;
    Block_p0_30 f30;
    Arg0_3c *f3c;
    unsigned short f40;
};
struct Arg0_3c {
    char unknown0[0x20];
    short f20;
};
struct S_c8c053d84_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_c8c053d84 {
    char unknown0[0x3c];
    int f3c;
};
struct Arg0_s30 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_20 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4d9df0 *g_8c4d9df0;
extern int hierarchy_is_active(void *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
extern int allocate_block(void *, unsigned int);
extern void call_8c14e034(int, Frame *);
extern void call_8c155ec4(int, Frame *);
extern void call_8c1557e8(int, Frame *);
extern void operation_8c13f1cc(int, int);
extern void call_8c163fd8(int, Frame *);
extern void call_8c164824(int, Frame *);
extern void call_8c178968(int, Frame *);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c168980(Object *);
void operation_8c168670(Object *o)
{
    Frame frame;
    int v7;
    int v8;
    int v9;
    int v10;
    char *v41;
    int v15;
    int v16;
    int v23;
    unsigned int v24;
    int v28;
    int v35;
    unsigned int v36;
    int v40;
    int t1;
    S_c8c053d84 *t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f30;
    if (o->f3c != 0) {
        (&frame)->f0c = o->f3c->f20;
    } else {
        (&frame)->f0c = 0xffff;
    }
    if (o->f28 != 0) {
        if (o->f28 == 1) {
            goto L_8c168934;
        }
        if (o->f28 == 2) {
            goto L_8c16894e;
        }
        return;
    }
    if (o->f24 != 0) {
        t1 = hierarchy_is_active((void *)(o->f20));
        if (t1 != 0) {
            return;
        }
    }
    v7 = (int)o->f24;
    v8 = (int)o->f2c;
    if (v7 == v8) {
        o->f28 = 2;
        return;
    }
    if (v7 != 0) {
        v9 = (int)*(int *)((char *)((char *)o + 0x54) + (v7 << 2));
        switch (v9) {
        case 2:
        case 3:
            t2 = lookup_object_by_id((unsigned short)g_8c4d9df0);
            if (t2 != 0) {
                *(Vector3 *)((char *)o + 0x30) = *(Vector3 *)((char *)t2 + 0x3c);
            }
        }
    }
    v41 = (char *)o->f24;
    v15 = (int)(v41 == 0);
    v16 = (int)((int)(v41) != ((int)o->f2c + -1));
    (&frame)->f10 = (int)(v15);
    (&frame)->f14 = (int)(v16);
    (&frame)->f1c = o->f2c;
    (&frame)->f20 = (float)*(int *)((char *)((char *)o + 0x74) + (o->f24 << 2));
    switch (*(int *)((char *)((char *)o + 0x54) + (o->f24 << 2))) {
    case 2:
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x204);
        if (t3 != 0) {
            call_8c14e034(t3, (Frame *)((&frame)));
        }
        o->f20 = (Arg0_20 *)t3;
        break;
    case 3:
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x1e4);
        if (t4 != 0) {
            call_8c155ec4(t4, (Frame *)((&frame)));
        }
        o->f20 = (Arg0_20 *)t4;
        break;
    case 4:
        t5 = allocate_block(g_8c4d97e0, (unsigned int)0x1e8);
        if (t5 != 0) {
            call_8c1557e8(t5, (Frame *)((&frame)));
        }
        o->f20 = (Arg0_20 *)t5;
        v28 = (int)0;
        goto L_8c168848;
        v23 = (int)0;
        do {
            v24 = (unsigned int)*(int *)((char *)((char *)o + 0x64) + (v23 << 2));
            if ((unsigned int)4 > v24) {
                if (v24 != o->f40) {
                    operation_8c13f1cc(v24, 4);
                }
            }
            v28 = (int)(v23 + 1);
L_8c168848:;
            v23 = (int)v28;
        } while (4 > v28);
        break;
    case 0:
        t6 = allocate_block(g_8c4d97e0, (unsigned int)0x1e0);
        if (t6 != 0) {
            call_8c163fd8(t6, (Frame *)((&frame)));
        }
        o->f20 = (Arg0_20 *)t6;
        break;
    case 1:
        t7 = allocate_block(g_8c4d97e0, (unsigned int)0x1dc);
        if (t7 != 0) {
            call_8c164824(t7, (Frame *)((&frame)));
        }
        o->f20 = (Arg0_20 *)t7;
        break;
    case 5:
        t8 = allocate_block(g_8c4d97e0, (unsigned int)0x1e0);
        if (t8 != 0) {
            call_8c178968(t8, (Frame *)((&frame)));
        }
        o->f20 = (Arg0_20 *)t8;
        v40 = (int)0;
        goto L_8c16890c;
        v35 = (int)0;
        do {
            v36 = (unsigned int)*(int *)((char *)((char *)o + 0x64) + (v35 << 2));
            if ((unsigned int)4 > v36) {
                if (v36 != o->f40) {
                    operation_8c13f1cc(v36, 5);
                }
            }
            v40 = (int)(v35 + 1);
L_8c16890c:;
            v35 = (int)v40;
        } while (4 > v40);
    }
    o->f20->f04 |= 4;
    o->f20->f04 |= 0x10;
    o->f24 += 1;
    o->f28 = 1;
    return;
L_8c168934:;
    o->f20->f04 &= -5;
    o->f20->f04 &= -0x11;
    o->f28 = 0;
    return;
L_8c16894e:;
    call_8c05fbf8(0x20027, (void *)(&o->f30), 0, 0);
    call_8c168980(o);
    o->f04 |= 1;
}
