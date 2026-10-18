typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv10 S_vv10;
typedef struct S_x6096 S_x6096;
typedef struct S_x64800 S_x64800;
typedef struct S_x86144 S_x86144;
typedef struct S_x9840 S_x9840;
struct S_x86144 {
    float f00;
};
struct Object {
    char unknown0[0xa8];
    float fa8;
};
struct S_x64800 {
    float f00;
};
struct S_x6096 {
    float f00;
};
struct S_vv10 {
    char unknown0[0xa8];
    float fa8;
};
struct S_x9840 {
    float f00;
};
extern int call_8c12b944(int);
void operation_8c1c6dc4(Object *o, int a1)
{
    int v1;
    int v24;
    S_vv10 *v10;
    int t1;
    int t2;
    if (*(unsigned char *)((char *)((char *)o + 0xa4) + (a1)) != 1) {
        v10 = (S_vv10 *)o;
    } else {
        v1 = (int)(a1 << 2);
        ((S_x86144 *)((int)o + 0x94 + v1))->f00 += o->fa8;
        t1 = call_8c12b944(0x94);
        if (!(((S_x64800 *)((int)o + 0x94 + v1))->f00 > ((float)t1 / 32768.0f))) {
            return;
        }
        *(char *)((char *)((char *)o + 0xa4) + (a1)) = 0;
        ((S_x64800 *)((int)o + 0x94 + v1))->f00 = 0.0f;
        return;
    }
    v24 = (int)(a1 << 2);
    ((S_x6096 *)((int)v10 + 0x94 + v24))->f00 += v10->fa8;
    t2 = call_8c12b944(0x94);
    if (((S_x9840 *)((int)v10 + 0x94 + v24))->f00 > ((float)t2 / 32768.0f)) {
        *(char *)((char *)((char *)v10 + 0xa4) + (a1)) = 1;
        ((S_x9840 *)((int)v10 + 0x94 + v24))->f00 = 0.0f;
    }
}
