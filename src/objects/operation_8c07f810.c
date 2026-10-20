typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1e6];
    short f1e6;
    char unknown1e8[0x20];
    unsigned char f208;
};
extern int call_8c12b944(void);
int operation_8c07f810(Object *o, int a1)
{
    int v7;
    unsigned char v8;
    int t1;
    if (0x1f > o->f1e6) {
        v7 = 0;
    } else if (0x3d > o->f1e6) {
        v7 = 0xf;
    } else if (0x51 > o->f1e6) {
        v7 = 0x19;
    } else if (0x65 > o->f1e6) {
        v7 = 0x1e;
    } else {
        v7 = 0x23;
    }
    v8 = 0;
    if ((*(unsigned char *)((char *)((char *)o + 0x209) + (a1))) != 0) {
        switch ((unsigned char)*(unsigned char *)((char *)((char *)o + 0x20d) + (a1))) {
        case 0:
            v8 = o->f208;
            break;
        case 1:
            v8 = o->f208 + v7;
            break;
        case 2:
            v8 = v7;
            break;
        case 3:
            v8 = o->f208;
            if ((unsigned char)v8 > 0xa) {
                v8 -= 0xa;
            } else {
                v8 = 0;
            }
            break;
        case 4:
            if ((unsigned char)v7 > 0xa) {
                v8 = v7 - 0xa;
            } else {
                v8 = 0;
            }
            break;
        }
        t1 = call_8c12b944();
        if ((unsigned char)v8 > (unsigned char)(int)((float)t1 / 32768.0f * 100.0f)) {
            return 1;
        }
    }
    return 0;
}
