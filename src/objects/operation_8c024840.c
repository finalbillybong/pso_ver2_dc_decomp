typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
typedef struct S_x40144 S_x40144;
typedef struct S_x74000 S_x74000;
typedef struct Block_p0_48 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_48;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Block_p0_48 f48;
};
struct S_vv5 {
    int f00;
};
struct S_x74000 {
    float f00;
};
struct S_x40144 {
    float f00;
};
void operation_8c024840(Object *o)
{
    int v7;
    S_vv5 *v5;
    float v15;
    if (o->f48.f00 == o->f3c.f00 && o->f48.f08 == o->f3c.f08) {
    } else {
        v5 = (S_vv5 *)((char *)o + 0x62c);
        if (++v5->f00 >= 0x10) {
            v5->f00 = 0;
        }
        v15 = (float)o->f3c.f08;
        v7 = (int)v5->f00;
        ((S_x74000 *)((char *)(int *)((char *)o + 0x630) + (v7 << 3)))->f00 = o->f3c.f00;
        ((S_x40144 *)((char *)(int *)((char *)o + 0x634) + (v7 << 3)))->f00 = v15;
    }
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
}
