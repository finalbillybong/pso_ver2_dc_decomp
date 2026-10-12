typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c026058 S_c8c026058;
typedef struct Object Object;
typedef struct S_vv8 S_vv8;
struct S_c8c026058 {
    int f00;
};
struct Object {
    char unknown0[0x4e4];
    int f4e4;
};
struct S_vv8 {
    int f00;
};
extern S_c8c026058 *call_8c026058(int);
unsigned char operation_8c025fe8(Object *o, int a1)
{
    int v1;
    int v2;
    int v5;
    S_vv8 *v8;
    int v9;
    S_c8c026058 *t1;
    t1 = call_8c026058((int)((char *)o + 0x418));
    v1 = (int)(((t1->f00 & 1)) != 0);
    if (v1 != 0) {
        v2 = (int)(o->f4e4 == 0);
        if (v2 != 0) {
            v8 = (S_vv8 *)((char *)o + 0x4c0);
            goto L_8c026026;
        }
        v5 = (int)&o->f4e4;
    } else {
        v5 = (int)((char *)o + 0x4c0);
    }
    v8 = (S_vv8 *)v5;
L_8c026026:;
    if (v8->f00 == 0) {
        v9 = (int)((int)v8 + 4);
    } else {
        v9 = (int)((int)v8 + 0x14);
    }
    return *(unsigned char *)((char *)((char *)v9 + 0x0) + (a1 << 2)) & 0xff;
}
