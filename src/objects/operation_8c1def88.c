typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46718c S_g8c46718c;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x2];
    char f6e;
    char f6f;
    Arg0_70 *f70;
};
struct S_vv3 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c46718c *g_8c46718c;
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern int operation_8c01d858(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c1e2d64(void *);
extern void operation_8c1e2dc4(void *);
extern void operation_8c1e2e84(void *);
extern void operation_8c1e2f44(void *);
void operation_8c1def88(Object *o)
{
    int v1;
    int v2;
    S_vv3 *v3;
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
    v1 = (int)0;
    v2 = (int)0;
    v3 = (S_vv3 *)g_8c46718c;
    if (((o->f68 & 2)) != 0) {
        int v4 = (int)(g_8c41cba0 + 0x20);
        t1 = operation_8c01d844(v4, 0xf0, 6, 2);
        if (t1 == 0) {
            return;
        }
        t2 = operation_8c01d844(v4, 0x10, 6, 2);
        if (t2 != 0) {
            v2 -= 1;
        }
        t3 = operation_8c01d844(v4, 0x20, 6, 2);
        if (t3 != 0) {
            v2 = (int)(v2 + 1);
        }
        t4 = operation_8c01d844(v4, 0x40, 6, 2);
        if (t4 != 0) {
            v1 -= 1;
        }
        t5 = operation_8c01d844(v4, 0x80, 6, 2);
        if (t5 == 0) {
            goto L_8c1df080;
        }
        v1 = (int)(v1 + 1);
    } else {
        int v5 = (int)(g_8c41cba0 + 0x20);
        t6 = operation_8c01d858(v5, 0xf0, 6, 2);
        if (t6 == 0) {
            return;
        }
        t7 = operation_8c01d858(v5, 0x10, 6, 2);
        if (t7 != 0) {
            v2 -= 1;
        }
        t8 = operation_8c01d858(v5, 0x20, 6, 2);
        if (t8 != 0) {
            v2 = (int)(v2 + 1);
        }
        t9 = operation_8c01d858(v5, 0x40, 6, 2);
        if (t9 != 0) {
            v1 -= 1;
        }
        t10 = operation_8c01d858(v5, 0x80, 6, 2);
        if (t10 != 0) {
            v1 = (int)(v1 + 1);
        }
    }
L_8c1df080:;
    call_8c05fbf8(0x50000, 0, 0, 0);
    if (((o->f68 & 0x40)) != 0) {
        if ((char)v1 > 0) {
            operation_8c1e2d64((void *)(o->f70));
        } else {
            if (!((char)v1 >= 0)) {
                operation_8c1e2dc4((void *)(o->f70));
            }
        }
        if ((char)v2 > 0) {
            operation_8c1e2e84((void *)(o->f70));
            return;
        }
        if ((char)v2 >= 0) {
            return;
        }
        operation_8c1e2f44((void *)(o->f70));
        return;
    }
    if ((char)v1 > 0) {
        switch ((unsigned char)*(unsigned char *)((char *)((char *)(v3->f04 + o->f6e) + 0x0) + (o->f6f << 4))) {
        case 2:
        case 6:
            o->f6e += 2;
            break;
        case 5:
            o->f6e += 3;
            break;
        case 4:
            o->f6e += 4;
            break;
        case 0:
        case 1:
        case 3:
        case 7:
        default:
            o->f6e += 1;
        }
    }
    if (!((char)v1 >= 0)) {
        switch ((unsigned char)*(unsigned char *)((char *)((char *)(v3->f04 + o->f6e) + 0x0) + (o->f6f << 4))) {
        case 3:
        case 5:
            o->f6e -= 2;
            break;
        case 6:
            o->f6e -= 3;
            break;
        case 7:
            o->f6e -= 4;
            break;
        case 0:
        case 1:
        case 2:
        case 4:
        default:
            o->f6e -= 1;
        }
    }
    o->f6f += v2;
    if (!(o->f6e >= 0)) {
        o->f6e += 0x10;
    }
    if (o->f6e >= 0x10) {
        o->f6e -= 0x10;
    }
    if (!(o->f6f >= 0)) {
        o->f6f += 7;
    }
    if (o->f6f >= 7) {
        o->f6f -= 7;
    }
}
