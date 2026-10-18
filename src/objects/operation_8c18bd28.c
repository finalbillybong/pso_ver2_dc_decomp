typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct Arg0_58_6c Arg0_58_6c;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x2e];
    short f52;
    short f54;
};
struct Arg0_58 {
    char unknown0[0x6c];
    Arg0_58_6c *f6c;
};
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
extern void operation_8c19a044(void *, int);
extern void operation_8c18caac(void *);
void operation_8c18bd28(Object *o)
{
    int v2;
    int v6;
    int v13;
    short v12;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    if (((o->f20 & 1)) != 0 && ((o->f20 & 4)) == 0) {
        v1 = (int)(g_8c41cba0 + 0x20);
        v2 = (int)o->f54;
        t1 = operation_8c01d844(v1, 0x10, 6, 1);
        if (t1 == 0) {
            t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
            v6 = (int)v2;
            if (t2 == 0) {
                goto L_8c18bd76;
            }
        }
        v6 = (int)(v2 + -1);
L_8c18bd76:;
        t3 = operation_8c01d844(v1, 0x20, 6, 1);
        if (t3 == 0) {
            t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
            if (t4 == 0) {
                goto L_8c18bd9c;
            }
        }
        v6 = (int)(v6 + 1);
L_8c18bd9c:;
        if (v6 != o->f54) {
            call_8c05fbf8(0x50000, 0, 0, 0);
            v12 = (short)o->f52;
            if ((short)v12 > v6) {
                v13 = (int)5;
                while (*(int *)((char *)((char *)o + 0x58) + (v13 << 2)) == 0) {
                    v13 = (int)(v13 + -1);
                }
                v6 = (int)v13;
            }
            if (v6 >= 6) {
                v6 = (int)(short)v12;
            }
            if (*(int *)((char *)((char *)o + 0x58) + (v6 << 2)) == 0) {
                v6 = (int)(short)v12;
            }
            operation_8c19a044((void *)((*(Arg0_58 **)((char *)((char *)o + 0x58) + (o->f54 << 2)))->f6c), 0);
            o->f54 = v6;
            operation_8c18caac((void *)o);
        }
    }
}
