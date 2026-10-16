typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    char unknown1[0x1];
    char f02;
    char f03;
    char unknown4[0x1];
    char f05;
};
void operation_8c1c93e0(Object *o, int a1)
{
    unsigned char v1;
    v1 = (unsigned char)o->tag;
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c1c9400;
        }
        if (v1 == 2) {
            goto L_8c1c940c;
        }
        if (v1 == 3) {
            goto L_8c1c9406;
        }
        return;
    }
    o->f05 = a1;
    return;
L_8c1c9400:;
    o->f03 = a1;
    return;
L_8c1c9406:;
    o->f03 = a1;
    return;
L_8c1c940c:;
    o->f02 = a1 + 0xc8;
}
