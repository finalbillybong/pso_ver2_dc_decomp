typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_22cc Arg0_22cc;
typedef struct Arg0_e0 Arg0_e0;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x2284];
    int f22ac;
    char unknown22b0[0x1c];
    Arg0_22cc *f22cc;
    char unknown22d0[0xc];
    int f22dc;
};
void operation_8c222514(Object *o)
{
    int t1;
    char *pm3;
    int pm4;
    int pm7;
    char *pm10;
    int pm6;
    int pm11;
    unsigned int pm9;
    int pm12;
    int pm13;
    if (o->f22cc != 0) {
        int t2;
        int row;
        int pm8;
        int pm14;
        int pm5;
        int pm15;
        pm5 = (int)(unsigned short)((unsigned char)0xb8);
        pm13 = pm5;
        pm4 = pm13;
        pm12 = o->f22ac;
        pm10 = (char *)o + 0xe0;
        pm9 = 0x8c372d98;
        t1 = ((int ( *) ( void *))pm9)(*(Arg0_e0 **)((pm10) + (pm12 * pm4)));
        if (!(t1 == 0)) {
            return;
        }
        pm6 = (int)o;
        pm12 = o->f22ac;
        pm15 = 0xb8 * pm12;
        pm11 = pm15;
        pm7 = pm11;
        t1 = pm7;
        pm10 = (char *)o + 0xe0;
        pm3 = pm10;
        row = t1;
        pm4 = pm6;
        t1 = pm4;
        pm7 = t1 + row;
        pm13 = pm7 + 0x2c;
        pm6 = pm13;
        pm14 = pm6;
        t1 = pm14;
        pm8 = t1;
        pm4 = pm8;
        t2 = ((int ( *) ( void *, int , void *))0x8c010240)(*(Arg0_e0 **)(row + (pm3)), pm4, o->f22cc);
        if (!(0 != t2)) {
            o->f24 = 4;
            return;
        }
        o->f22dc += 2;
        o->f24 = 2;
        return;
    }
    o->f24 = 0x12;
}
