typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    Arg0_30 *f30;
    char unknown34[0x4];
    Arg0_38 *f38;
    char unknown3c[0xc];
    int f48;
};
extern int operation_8c1cdc80(void *);
extern void operation_8c1d5dfc(void *, int);
extern void call_8c189990(Object *, int);
extern int call_8c106798(Object *);
extern void call_8c05fbf8(int, int, int, int);
extern int call_8c106760(Object *);
extern int call_8c189294(Object *);
extern void call_8c220b80(int, int);
void operation_8c18935c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f30 != 0) {
        t1 = operation_8c1cdc80((void *)(o->f30));
        if (o->f38 != 0 && t1 != o->f48) {
            operation_8c1d5dfc((void *)(o->f38), (int)((int)o + t1 * 0x14 + 0x4c));
        }
        if (t1 != o->f48) {
            call_8c189990(o, (int)((int)o + t1 * 0x14 + 0x4c));
        }
        o->f48 = (int)(t1);
    }
    t2 = call_8c106798(o);
    if (t2 != 0) {
        o->f24 = 3;
        call_8c05fbf8(0x50001, 0, 0, 0);
    } else {
        t3 = call_8c106760(o);
        if (t3 != 0) {
            call_8c05fbf8(0x50001, 0, 0, 0);
            t4 = call_8c189294(o);
            switch (t4) {
            case 0:
                call_8c220b80(0xe, 1);
                o->f24 = 5;
                break;
            case 1:
                call_8c220b80(0x18, 1);
                o->f24 = 6;
                break;
            case 2:
                call_8c220b80(0x11, 1);
                o->f24 = 7;
                break;
            case 3:
                call_8c220b80(0x10, 1);
                o->f24 = 7;
                break;
            case 4:
                o->f24 = 8;
            }
        }
    }
}
