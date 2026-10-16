typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x14];
    int f14;
    unsigned char dispatch;
    unsigned char f19;
};
void operation_8c19a054(Object *o)
{
    unsigned char v1;
    int v2;
    v1 = (unsigned char)o->dispatch;
    if (v1 != 0) {
        if (v1 == 1) {
            goto L_8c19a08c;
        }
        if (v1 == 2) {
            goto L_8c19a08c;
        }
        return;
    }
    v2 = !(o->f19 & 1);
    if (v2 != 0) {
        o->f14 = -1;
        return;
    }
    o->f14 = -0x979798;
    return;
L_8c19a08c:;
    o->f14 = -0x1000000;
}
