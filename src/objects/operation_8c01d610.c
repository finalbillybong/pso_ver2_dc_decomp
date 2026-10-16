typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
};
short operation_8c01d610(Object *o, int a1)
{
    int v1;
    short v2;
    short v3;
    short v4;
    if (o->f20 == 0xffff) {
        v1 = (int)(o->f34 & 0x70000000);
        switch (v1) {
        case 268435456:
            v2 = (short)*(short *)0x8c41cb80;
            *(short *)0x8c41cb80 = v2 + (a1 + 1);
            o->f20 = v2;
            break;
        case 536870912:
            v3 = (short)*(short *)0x8c41cb82;
            *(short *)0x8c41cb82 = v3 + (a1 + 1);
            o->f20 = v3;
            break;
        case 1073741824:
        default:
            v4 = (short)*(short *)0x8c41cb84;
            *(short *)0x8c41cb84 = v4 + (a1 + 1);
            o->f20 = v4;
        }
    }
    return o->f20;
}
