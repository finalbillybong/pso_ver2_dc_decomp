typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_184 Arg0_28_184;
typedef struct Arg0_34 Arg0_34;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x8];
    Arg0_34 *f34;
    int f38;
    char unknown3c[0xc];
    int f48;
    int f4c;
};
struct Arg0_28 {
    char unknown0[0x184];
    Arg0_28_184 *f184;
};
struct Arg0_28_184 {
    char unknown0[0x20];
    int f20;
};
struct Frame {
    int f00;
};
extern int operation_8c1cdc80(void *);
extern void operation_8c1d5dfc(void *, int);
extern void operation_8c106038(Object *, int);
extern int operation_8c106798(Object *);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c106760(Object *);
extern int item_capacity_8c022f5c(void *, void *);
extern int call_8c163428(Arg0_28 *, int, Frame *);
extern void call_8c220b80(int, int);
void operation_8c105968(Object *o)
{
    Frame frame;
    char *v44;
    int v1;
    int v11;
    int v12;
    int v14;
    int v16;
    int v19;
    int v21;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v44 = (char *)o->f34;
    if (v44 != 0) {
        t1 = operation_8c1cdc80((void *)v44);
        v1 = (int)o->f38;
        if (v1 != 0 && t1 != o->f48) {
            operation_8c1d5dfc((void *)v1, (int)((int)o + t1 * 0x14 + 0x50));
        }
        if (t1 != o->f48) {
            operation_8c106038(o, (int)((int)o + t1 * 0x14 + 0x50));
        }
        o->f48 = (int)(t1);
    }
    t2 = operation_8c106798(o);
    if (t2 != 0) {
        o->f24 = 3;
        call_8c05fbf8(0x50001, 0, 0, 0);
        return;
    }
    t3 = operation_8c106760(o);
    if (t3 != 0) {
        call_8c05fbf8(0x50001, 0, 0, 0);
        o->f4c = 0;
        if (o->f34 == 0) {
            v21 = (int)0;
        } else {
            t4 = operation_8c1cdc80((void *)(o->f34));
            v11 = (int)o->f28->f184->f20;
            if (v11 < *(int *)((char *)((char *)o + 0x60) + (t4 * 0x14))) {
                v19 = (int)0;
            } else {
                v12 = (int)((int)o + t4 * 0x14 + 0x50);
                t5 = item_capacity_8c022f5c((void *)(o->f28), (void *)v12);
                if (t5 == 0) {
                    v16 = (int)1;
                } else {
                    t6 = call_8c163428((Arg0_28 *)(o->f28), v12, (Frame *)((&frame)));
                    if (t6 == 0) {
                        if ((((&frame)->f00 & 1)) != 0) {
                            v21 = (int)2;
                            goto L_8c105a66;
                        }
                        v14 = (int)3;
                    } else {
                        o->f4c = 1;
                        v14 = (int)4;
                    }
                    v16 = (int)v14;
                }
                v19 = (int)v16;
            }
            v21 = (int)v19;
        }
L_8c105a66:;
        switch (v21) {
        case 0:
            call_8c220b80(0xe, 1);
            o->f24 = 5;
            return;
        case 1:
            call_8c220b80(0x18, 1);
            o->f24 = 6;
            return;
        case 2:
            call_8c220b80(0x11, 1);
            o->f24 = 7;
            return;
        case 3:
            call_8c220b80(0x10, 1);
            o->f24 = 7;
            return;
        case 4:
            o->f24 = 8;
            return;
        }
    }
}
