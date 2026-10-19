typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    short f30c;
    char unknown30e[0xa6];
    float f3b4;
    char unknown3b8[0x2];
    short f3ba;
};
void operation_8c04e000(Object *o, int a1, int a2)
{
    int v3;
    if (o->f3ba != 0) {
        if (o->f3ba == 1) {
            goto L_8c04e022;
        }
        if (o->f3ba == 2) {
            goto L_8c04e02a;
        }
        o->f3ba = 0;
    }
    o->f30a = 3;
    v3 = (int)a2;
    goto L_8c04e054;
L_8c04e022:;
    o->f30a = 5;
    v3 = (int)a2;
    goto L_8c04e054;
L_8c04e02a:;
    o->f30a = 4;
    o->f3b4 = 0.0f;
    v3 = (int)0;
    while (0xc > v3) {
        *(int *)((char *)((char *)o + 0x3f0) + (v3 << 2)) = 0;
        v3 = (int)(v3 + 1);
    }
L_8c04e054:;
    o->f30c = 0;
    o->ff0 = 1;
    o->f34 |= 0x200000;
    o->f34 &= -0x40001;
}
