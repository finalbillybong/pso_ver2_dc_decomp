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
};
extern int call_8c175de4(int);
extern int call_8c18e8a0(int, int);
extern void operation_8c18582c(int, int);
void operation_8c1766d0(Object *o)
{
    int v2;
    int v1;
    int v3;
    int t1;
    int t2;
    o->f20 += 1;
    if (o->f20 >= 0xa0) {
        o->f04 |= 1;
        return;
    }
    v1 = (int)0x170;
    v2 = (int)0;
    while (0x1c > v2) {
        v3 = (int)((int)o + v2 * 0x2c + 0x24);
        t1 = call_8c175de4(v3);
        if (t1 != 0) {
            t2 = call_8c18e8a0(v2, 2);
            if (t2 == 0) {
                operation_8c18582c(v3, v1);
            }
        }
        v2 = (int)(v2 + 1);
    }
}
