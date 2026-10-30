typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct S_x42352_0 S_x42352_0;
typedef struct S_x42416_0 S_x42416_0;
typedef struct S_x67632 S_x67632;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x20];
    int f68;
    char unknown6c[0x7c];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x2ba];
    Arg0_3ac *f3ac;
    char unknown3b0[0x2c];
    int f3dc;
    char unknown3e0[0x294];
    int f674;
    char unknown678[0x4c];
    float f6c4;
};
struct S_x67632 {
    Vector3 f00;
};
extern char g_8c286300[];
extern char g_8c4da2c0[];
extern void send_code_8c14472c(void *, int);
extern void operation_8c144d8c(void *);
extern void call_8c01c5f0(Object *);
extern int check_range_8c01cf68(void *, float);
extern void operation_8c166174(void *, void *, void *);
extern int active_unflagged_8c05b2dc(void *);
extern void call_8c1667ac(void *, int, void *, int);
extern void call_8c05fbf8(int, void *, int, int);
extern void operation_8c144ae0(int);
void operation_8c1496ec(Object *o, int a1, int a2)
{
    int v1;
    int v3;
    int v6;
    int v2;
    int t2;
    int v4;
    int t1;
    switch (a1) {
        case 4:
        *(int *)((char *)o + 0x3dc) &= -5;
        o->f3dc |= 0x100;
        o->ff0 = 0xb;
        o->f674 = 1;
        *(Vector3 *)&o->f3c = *(Vector3 *)&((S_x67632 *)(o->f674 * 0xc + g_8c286300))->f00;
        o->f6c4 = 0.0f;
        o->f68 = 0;
        return;
        case 2:
        if (((o->fe8 & 0x10)) == 0) {
            return;
        }
        send_code_8c14472c((void *)o, 2);
        return;
        case 9:
        if (((o->fe8 & 0x10)) == 0) {
            return;
        }
        operation_8c144d8c((void *)o);
        return;
        case 0:
        call_8c01c5f0(o);
        t1 = check_range_8c01cf68((void *)o, 18.0f);
        if (t1 == 0) {
            return;
        }
        v1 = (int)((char *)o + 0x4f0);
        if (a2 == 0x18) {
            v3 = (int)0;
            v2 = (int)0x650;
            while (5 > v3) {
                operation_8c166174((void *)(*(S_x42352_0 **)((char *)((char *)((int)o + v2) + 0x0) + (v3 << 2))), (void *)v1, (void *)(v3 * 0xc + g_8c4da2c0));
                v3 = (int)(v3 + 1);
            }
        } else {
            t2 = active_unflagged_8c05b2dc((void *)(o->f3ac));
            if (t2 != 0) {
                int v5;
                v4 = (int)0x3ac;
                v6 = (int)0;
                v5 = (int)0x664;
                while (3 > v6) {
                    call_8c1667ac((void *)(*(S_x42416_0 **)((char *)((char *)((int)o + v5) + 0x0) + (v6 << 2))), v1, (void *)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v4))), v6);
                    v6 = (int)(v6 + 1);
                }
            }
        }
        call_8c05fbf8(0x30003, (void *)(((char *)o + 0x544)), 0, 0);
        return;
        case 6:
        if (a2 == 0x19) {
            operation_8c144ae0((int)o);
        }
        return;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        break;
    }
}
