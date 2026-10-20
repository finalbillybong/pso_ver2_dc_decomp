typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_s6b0 Arg0_s6b0;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x350];
    int f350;
    char unknown354[0x364];
    float f6b8;
    char unknown6bc[0x4];
    float f6c0;
};
struct Arg0_s6b0 {
    char unknown0[0xc];
    float f0c;
};
struct Arg1 {
    float f00;
    char unknown4[0x4];
    float f08;
};
int operation_8c026934(Object *o, Arg1 *a1)
{
    int v2;
    int v1;
    float *p;
    float dx;
    float dz;
    v1 = (int)(((o->f350 & 1)) != 0);
    if (v1 == 0) {
        return 0;
    }
    p = (float *)((char *)((char *)o + 0x6b0) + 0xc);
    dx = *p - a1->f00;
    p++;
    dz = *p - a1->f08;
    v2 = !(o->f6b8 > dx * dx + dz * dz);
    return (int)(v2);
}
