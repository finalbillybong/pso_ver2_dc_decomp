typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x18544 S_x18544;
typedef struct S_x36080 S_x36080;
typedef struct S_x9616 S_x9616;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xf4];
    int f110;
    int f114;
    int f118;
    int f11c;
    int f120;
    int f124;
};
struct S_x9616 {
    float f00;
};
struct S_x36080 {
    float f00;
};
struct S_x18544 {
    float f00;
};
extern void initialize_hierarchy_node(void *, void *);
Object *operation_8c185d30(Object *o, int a1, int a2, int a3)
{
    int v1;
    int v5;
    int pm1;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c272074;
    v5 = (int)0;
    goto L_8c185d7e;
    v1 = (int)0;
L_8c185d64:
    ;
    pm1 = v1 * 0xc;
    ((S_x9616 *)((char *)(int *)((char *)o + 0x20) + pm1))->f00 = 0.0f;
    ((S_x36080 *)((char *)(int *)((char *)o + 0x24) + v1 * 0xc))->f00 = 0.0f;
    ((S_x18544 *)((char *)(int *)((char *)o + 0x28) + v1 * 0xc))->f00 = 0.0f;
    v5 = (int)(v1 + 1);
L_8c185d7e:;
    v1 = (int)v5;
    if (0x14 > v5) {
        goto L_8c185d64;
    }
    o->f110 = 0;
    o->f114 = 0;
    o->f118 = a2;
    o->f11c = a3;
    o->f120 = 0;
    o->f124 = 0;
    return o;
}
