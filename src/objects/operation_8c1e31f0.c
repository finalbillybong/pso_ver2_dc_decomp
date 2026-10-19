typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    unsigned short f6a;
    char unknown6c[0x1];
    char f6d;
};
extern int call_8c21c718(int);
void operation_8c1e31f0(Object *o)
{
    int t1;
    if (((o->f6a & 8)) == 0 && ((o->f68 & 2)) == 0) {
        t1 = call_8c21c718(0xc);
        if (t1 != 0) {
            o->f6d = 0xc;
            o->f68 |= 0x81;
        }
    }
}
