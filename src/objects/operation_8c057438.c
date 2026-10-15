typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x43e];
    int f444;
};
void operation_8c057438(Object *o, int a1)
{
    if (a1 != 0) {
        if (a1 != 3) {
            if (a1 != 4) {
                if (a1 == 5) {
                    return;
                }
                return;
            }
            *(int *)((char *)o + 0x444) |= 1;
            o->f444 &= -3;
            return;
        }
        o->f04 |= 1;
    }
}
