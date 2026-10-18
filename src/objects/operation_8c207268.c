typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
    char f01;
    short f02;
    short f04;
    short f06;
};
void operation_8c207268(Object *o)
{
    int v1;
    short v2;
    v1 = (int)((o->tag & 0xe0) == 0xe0);
    if (v1 == 0) {
        if (((o->tag & 0x10)) != 0) {
            if ((o->f02 += o->f06) == 0) {
                return;
            }
            if (!(o->f06 < o->f02)) {
                return;
            }
            o->f02 = o->f04;
            return;
        }
        if (((o->tag & 8)) != 0) {
            v2 = (short)o->f02;
            o->f02 = o->f01 + v2;
            if (!(o->f06 < o->f02)) {
                return;
            }
            o->f02 = o->f06;
            o->tag &= -9;
            return;
        }
        o->f02 -= o->f01;
        if (o->f04 > o->f02) {
            o->f02 = o->f04;
            o->tag |= 8;
        }
    }
}
