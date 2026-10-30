typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    short f0a;
};
extern int call_8c18e8a0(int, int);
extern int call_8c18e768(int, int);
void operation_8c2075c0(Object *o, int a1)
{
    int t1;
    int t2;
    int t4;
    int v1;
    int t3;
    v1 = (int)o->f08;
    t1 = call_8c18e8a0(v1, 0x64);
    if ((short)a1 > 0 || ((short)a1 < 0 && -(short)a1 < (short)t1)) {
        v1 = call_8c18e768(v1, 0x64);
        t4 = call_8c18e768((int)(o->f0a), 0x64);
        t2 = call_8c18e768((int)(o->f04), 0x64);
        t3 = call_8c18e768((int)(o->f06), 0x64);
        t2 = t2 + t3 + t4 + v1;
        if (0xc8 > (short)t2) {
            o->f08 += a1;
        } else if ((short)t2 == 0xc8) {
            if ((short)(0x63 - t1) < (short)a1) {
                a1 = 0x63 - t1;
            }
            o->f08 += a1;
        }
    }
}
