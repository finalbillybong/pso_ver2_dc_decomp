typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_184 Arg0_28_184;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_40 Arg0_40;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    char unknown30[0xc];
    int f3c;
    Arg0_40 *f40;
    char unknown44[0x10];
    int f54;
};
struct Arg0_28 {
    char unknown0[0x184];
    Arg0_28_184 *f184;
    char unknown188[0xa40];
    int fbc8;
};
struct Arg0_28_184 {
    char unknown0[0x20];
    int f20;
};
extern int operation_8c1cdc80(void *);
extern void operation_8c1d5dfc(void *, int);
extern int operation_8c16a50c(void *, int);
extern void operation_8c1ca234(void *, int);
extern int operation_8c106798(Object *);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c106760(Object *);
extern int item_capacity_8c022f5c(void *, void *);
extern void call_8c220b80(int, int);
void operation_8c1888dc(Object *o)
{
    int v1;
    int v12;
    int v13;
    int v14;
    int v16;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    {
        Object *base = o;
        if (base->f2c != 0) {
            t1 = operation_8c1cdc80((void *)(base->f2c));
            v1 = (int)base->f3c;
            if (v1 != 0 && t1 != base->f54) {
                operation_8c1d5dfc((void *)v1, (int)((int)base + t1 * 0x14 + 0x58));
            }
            if (base->f40 != 0 && t1 != base->f54) {
                t2 = operation_8c16a50c((void *)base->f28->fbc8, (int)((int)base + t1 * 0x14 + 0x58));
                operation_8c1ca234((void *)(base->f40), t2);
            }
            base->f54 = (int)(t1);
        }
        t3 = operation_8c106798(base);
        if (t3 != 0) {
            base->f24 = 3;
            call_8c05fbf8(0x50001, 0, 0, 0);
            return;
        }
        t4 = operation_8c106760(base);
        if (t4 != 0) {
            call_8c05fbf8(0x50001, 0, 0, 0);
            if (base->f2c == 0) {
                v16 = (int)0;
            } else {
                t5 = operation_8c1cdc80((void *)(base->f2c));
                v12 = (int)base->f28->f184->f20;
                if (v12 < *(int *)((char *)((char *)base + 0x68) + (t5 * 0x14))) {
                    v14 = (int)0;
                } else {
                    t6 = item_capacity_8c022f5c((void *)(base->f28), (void *)((int)base + t5 * 0x14 + 0x58));
                    if (t6 == 0) {
                        v13 = (int)1;
                    } else {
                        v13 = (int)3;
                    }
                    v14 = (int)v13;
                }
                v16 = (int)v14;
            }
            switch (v16) {
            case 0:
                call_8c220b80(0xe, 1);
                base->f24 = 5;
                return;
            case 1:
                call_8c220b80(0x18, 1);
                base->f24 = 6;
                return;
            case 3:
                base->f24 = 7;
            }
        }
    }
}
