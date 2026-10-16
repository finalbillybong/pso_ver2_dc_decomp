typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    int f34;
    char unknown38[0x48];
    char f80;
    char unknown81[0x1];
    unsigned char f82;
    char unknown83[0x1];
    short f84;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
};
struct Arg0_30_0 {
    char unknown0[0x20];
    int f20;
};
extern void operation_8c0df720(void *, int);
extern int operation_8c257e3c(int, unsigned int);
void operation_8c0e12dc(Object *o, int a1)
{
    int v1;
    unsigned char v4;
    char *v8;
    int t1;
    v1 = !(o->f34 & 1);
    if (v1 != 0) {
        o->f80 = 5;
    }
    operation_8c0df720((void *)o, a1);
    v4 = (unsigned char)o->f82;
    if (v4 != 0) {
        if (v4 == 1) {
            goto L_8c0e1344;
        }
        if (v4 == 2) {
            return;
        }
        return;
    }
    v8 = (char *)o->f30->f00->f20;
    t1 = operation_8c257e3c((int)(v8), (unsigned int)0x100);
    o->f84 = (int)((float)(unsigned int)t1 * 3.3f + 55.5f);
    return;
L_8c0e1344:;
    o->f84 = 0x5a;
}
