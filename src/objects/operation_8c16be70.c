typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct S_vv3 {
    int f00;
};
struct S_vv4 {
    char unknown0[0x4];
    int f04;
    Block20 f08;
};
struct S_vv2 {
    Block20 f00;
};
struct Object {
    int tag;
};
extern int allocate_block(void *, unsigned int);
extern void call_8c16b970(int, void *, Object *, int, int, int);
S_vv4 *operation_8c16be70(Object *o, int a1, int a2, int a3, int a4)
{
    int v1;
    S_vv3 *v3;
    S_vv2 *v2;
    S_vv4 *v4;
    int v5;
    int t1;
    v1 = (int)0;
    v2 = (S_vv2 *)a3;
    v3 = (S_vv3 *)((char *)o + 0x4);
    v4 = (S_vv4 *)((char *)o + 0xa8);
    while (8 > v1) {
        v5 = (int)(v3->f00 == 0);
        if (v5 != 0) {
            v3->f00 = 1;
            v4->f04 = a4;
            *(Block20 *)&v4->f08 = *(Block20 *)&v2->f00;
            t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x5c);
            if (t1 != 0) {
                call_8c16b970(t1, (void *)(*(S_g8c44bea0 **)0x8c44bea0), o, a2, a1, v1);
            }
            return (S_vv4 *)(o->tag += 1);
        }
        v1 = (int)(v1 + 1);
    }
    return v4;
}
