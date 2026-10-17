typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    int tag;
};
struct S_vv2 {
    unsigned short f00;
};
int operation_8c04bfa0(Object *o)
{
    int v3;
    S_vv2 *v2;
    int v4;
    int v5;
    v3 = (int)o->tag;
    if (v3 == 0) {
        return 1;
    }
    v2 = (S_vv2 *)v3;
    goto L_8c04bfbc;
L_8c04bfae:;
    v4 = (int)v2->f00;
    v2 = (S_vv2 *)((char *)v2 + 2);
    if (v4 == 0x20) {
        goto L_8c04bfbc;
    }
    return 0;
L_8c04bfbc:;
    v5 = (int)v2->f00;
    if (v5 != 0) {
        goto L_8c04bfae;
    }
    return 1;
}
