typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x50];
    int f50;
    char unknown54[0x128];
    int f17c;
    char unknown180[0x128];
    int f2a8;
    char unknown2ac[0x138];
    int f3e4;
};
extern void call_8c37d534(void *);
extern void call_8c011ed8(Object *);
Object *operation_8c0355fc(Object *o, int a1)
{
    if (o != 0) {
        if (o->f50 != 0) {
            if (((o->f3e4 & 1)) == 0) {
                call_8c37d534(((char *)o + 0x174));
            }
            o->f50 = 0;
        }
        if (o->f17c != 0) {
            if (((o->f3e4 & 2)) == 0) {
                call_8c37d534(((char *)o + 0x2a0));
            }
            o->f17c = 0;
        }
        if (o->f2a8 != 0) {
            if (((o->f3e4 & 4)) == 0) {
                call_8c37d534(((char *)o + 0x3cc));
            }
            o->f2a8 = 0;
        }
        if ((short)a1 > 0) {
            call_8c011ed8(o);
        }
    }
    return o;
}
