typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x840];
    int f840;
    char unknown844[0x128];
    int f96c;
    char unknown970[0x128];
    int fa98;
    char unknowna9c[0x128];
    int fbc4;
};
extern void call_8c37d534(void *);
void operation_8c035130(Object *o)
{
    if (o->f840 != 0) {
        if (((o->fbc4 & 1)) == 0) {
            call_8c37d534(((char *)o + 0x964));
        }
        o->f840 = 0;
    }
    if (o->f96c != 0) {
        if (((o->fbc4 & 2)) == 0) {
            call_8c37d534(((char *)o + 0xa90));
        }
        o->f96c = 0;
    }
    if (o->fa98 != 0) {
        if (((o->fbc4 & 4)) == 0) {
            call_8c37d534(((char *)o + 0xbbc));
        }
        o->fa98 = 0;
    }
}
