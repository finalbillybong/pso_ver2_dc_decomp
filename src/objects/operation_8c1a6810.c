typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    int tag;
    char unknown4[0x4];
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_vv3 {
    float f00;
    float f04;
};
extern char g_8c287e38[];
extern void normalize_rectangle_fields(void *, float, float);
extern void swap_floats_8c104c40(void *);
extern void swap_floats_8c104c50(void *);
void operation_8c1a6810(Object *o, int a1, int a2, int a3)
{
    int v1;
    S_vv3 *v3;
    if ((short)a1 == -1) {
        o->tag |= 2;
        return;
    }
    o->tag &= -3;
    if (0x30 > (short)a1) {
        v3 = (S_vv3 *)(void *)g_8c287e38;
    } else {
        if (0x3c > (short)a1) {
            v1 = (int)(g_8c287e38 + 0x8);
        } else {
            v1 = (int)(g_8c287e38 + 0x10);
        }
        v3 = (S_vv3 *)v1;
    }
    o->f08 -= v3->f00 * 0.5f;
    o->f0c -= v3->f04 * 0.5f;
    o->f10 = v3->f00;
    o->f14 = v3->f04;
    normalize_rectangle_fields((void *)o, *(float *)((char *)0x8c287c08 + ((short)a1 << 3)), *(float *)((char *)((char *)0x8c287c08 + ((short)a1 << 3)) + 0x4));
    if (a2 != 0) {
        swap_floats_8c104c40((void *)o);
    }
    if (a3 != 0) {
        swap_floats_8c104c50((void *)o);
    }
}
