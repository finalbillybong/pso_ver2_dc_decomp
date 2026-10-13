typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x20];
    float f10c;
    char unknown110[0x1fc];
    short f30c;
};
extern int call_8c1aaabc(void *);
extern int call_8c1aaafc(void *);
void operation_8c1eb51c(Object *o)
{
    int t1;
    int t2;
    int t3;
    o->f30c = 0;
    t1 = call_8c1aaabc((void *)(((char *)o + 0x754)));
    if ((short)t1 != 0) {
        if ((short)t1 == 1) {
            goto L_8c1eb56c;
        }
        if ((short)t1 == 2) {
            goto L_8c1eb56c;
        }
        return;
    }
    t2 = call_8c1aaafc((void *)(((char *)o + 0x754)));
    if ((short)t2 == 0) {
        o->f10c = 0.5f;
        o->fe8 |= 0x200;
        return;
L_8c1eb56c:;
        t3 = call_8c1aaafc((void *)(((char *)o + 0x754)));
        if ((short)t3 == 0) {
            o->f10c = 0.2f;
            o->fe8 |= 0x200;
        }
    }
}
