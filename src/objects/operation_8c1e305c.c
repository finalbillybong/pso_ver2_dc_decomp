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
    char unknown6e[0x4e];
    int fbc;
};
extern void operation_8c1e2770(void *, int);
extern int call_8c21c718(int);
void operation_8c1e305c(Object *o)
{
    int t1;
    if (((o->f6a & 8)) == 0) {
        if (((o->fbc & 0x20)) != 0) {
            operation_8c1e2770((void *)o, 0);
            return;
        }
        if (((o->f68 & 2)) == 0) {
            t1 = call_8c21c718(8);
            if (t1 != 0) {
                o->f6d = 8;
                o->f68 |= 0x81;
            }
        }
    }
}
