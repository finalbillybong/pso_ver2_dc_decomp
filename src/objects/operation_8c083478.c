typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_114 Arg0_114;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x28];
    float f70;
    char unknown74[0x18];
    int f8c;
    int f90;
    char unknown94[0x64];
    Vector3 ff8;
    Arg0_104 *f104;
    char unknown108[0xc];
    Arg0_114 *f114;
    int f118;
    char unknown11c[0x8];
    float f124;
};
extern char g_8c2ff478[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
void operation_8c083478(Object *o)
{
    int v7;
    int v10;
    int v5;
    o->f114 = (Arg0_114 *)o->f8c;
    if (1 > (int)(o->f114)) {
        o->f114 = (Arg0_114 *)1;
    }
    if ((int)(o->f114) > 4) {
        o->f114 = (Arg0_114 *)4;
    }
    v5 = (int)0x114;
    v10 = (int)0;
    goto L_8c0834b8;
    v7 = (int)0;
L_8c0834aa:;
    *(int *)((char *)&o->f104 + (v7 << 2)) = (int)*(int *)((char *)((char *)o + 0x0) + 0x88) + v7;
    v10 = (int)(v7 + 1);
L_8c0834b8:;
    v7 = (int)v10;
    if (*(int *)((char *)((char *)o + 0x0) + (v5)) > v10) {
        goto L_8c0834aa;
    }
    *(Vector3 *)&o->ff8 = *(Vector3 *)&o->f3c;
    o->f124 = o->f70;
    if (o->f90 != 0) {
        o->f118 |= 0x8000000;
    } else {
        o->f118 &= -0x8000001;
    }
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c2ff478 + 0x37)));
    call_8c38cf80(0x13001b, (void *)((g_8c2ff478 + 0x44)));
    call_8c38cf80(0x13001e, (void *)((g_8c2ff478 + 0x52)), o->f104);
    call_8c38cf80(0x13001f, (void *)((g_8c2ff478 + 0x65)), o->f114);
    if (o->f90 != 0) {
        call_8c38cf80(0x130020, (void *)((g_8c2ff478 + 0x78)));
    } else {
        call_8c38cf80(0x130020, (void *)((g_8c2ff478 + 0x8a)));
    }
    call_8c38c5b6(-0xf0f10);
}
