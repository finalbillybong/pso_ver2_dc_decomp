typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x3c];
    float f3c;
};
struct S_vv4 {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_vv3 {
    float f00;
    float f04;
    float f08;
    char unknownc[0x4];
    float f10;
    float f14;
    float f18;
};
void operation_8c104148(Object *o)
{
    S_vv4 *v4;
    int v5;
    S_vv3 *v3;
    float v6;
    float v1;
    float v7;
    float v2;
    v1 = (float)(o->f3c + 3.0f);
    v2 = (float)(o->f3c - 3.0f);
    v3 = (S_vv3 *)((char *)o + 0x44);
    v4 = (S_vv4 *)(void *)0x8c4d5a40;
    v5 = (int)0;
    while (6 > v5) {
        v6 = (float)v4->f00;
        v7 = (float)v4->f08;
        v3->f00 = v6 * v1;
        v3->f04 = 0.0f;
        v3->f08 = v7 * v1;
        v3->f10 = v6 * v2;
        v3->f14 = 0.0f;
        v3->f18 = v7 * v2;
        v3 = (S_vv3 *)((char *)v3 + 32);
        v4 = (S_vv4 *)((char *)v4 + 12);
        v5 = (int)(v5 + 1);
    }
}
