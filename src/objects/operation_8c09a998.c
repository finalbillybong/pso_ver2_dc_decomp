typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    int f24;
    int f28;
    int f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    char unknown40[0x8];
    float f48;
    float f4c;
    float f50;
    int f54;
};
void operation_8c09a998(Object *o)
{
    float v5;
    float v6;
    float v1;
    float v7;
    int v2;
    switch (o->f20) {
    case 0:
        v5 = (float)((float)o->f54 / (float)o->f24);
        o->f50 = v5;
        v6 = (float)(1.0f - v5);
        o->f38 = v6 * o->f30;
        o->f3c = v6 * o->f34;
        break;
    case 1:
        o->f50 = 1.0f;
        o->f4c = 1.0f;
        o->f3c = 0.0f;
        o->f38 = 0.0f;
        break;
    case 2:
        o->f4c += o->f48;
        v1 = (float)((float)((int)o->f2c - (int)o->f54) / (float)((int)o->f2c - (int)o->f28));
        o->f50 = v1 * v1;
        v7 = (float)-(1.0f - v1);
        o->f38 = v7 * o->f30;
        o->f3c = v7 * o->f34;
    }
    v2 = (int)((int)o->f54 + 1);
    o->f54 = (int)(v2);
    if (v2 >= *(int *)((char *)&o->f24 + (o->f20 << 2))) {
        o->f20 += 1;
        if (o->f20 == 3) {
            o->f04 |= 1;
        }
    }
}
