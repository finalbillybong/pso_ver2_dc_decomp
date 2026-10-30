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
void operation_8c207668(Object *o, short d)
{
    short sum;
    short m;
    int a;
    int b;
    int c;
    int v;
    v = o->f0a;
    m = call_8c18e8a0(v, 0x64);
    if (d > 0 || (d < 0 && -d < m)) {
        a = call_8c18e768(o->f08, 0x64);
        b = call_8c18e768(v, 0x64);
        c = call_8c18e768(o->f04, 0x64);
        sum = c + call_8c18e768(o->f06, 0x64) + b + a;
        if (sum < 0xc8) {
            o->f0a += d;
        } else {
            if (sum == 0xc8) {
                if ((short)(0x63 - m) < d) {
                    d = 0x63 - m;
                }
                o->f0a += d;
            }
        }
    }
}
