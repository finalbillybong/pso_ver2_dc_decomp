typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x100];
    float f100;
    char unknown104[0x57c];
    int f680;
    char unknown684[0x18];
    float f69c;
    char unknown6a0[0x14];
    float f6b4;
    char unknown6b8[0x4];
    float f6bc;
};
extern int call_8c1430e0(void *);
int operation_8c144a0c(Object *o)
{
    float v1;
    int v64;
    int t1;
    call_8c1430e0((void *)(((char *)o + 0x684)));
    if (o->f680 != 1) {
        if (o->f680 == 3) {
            goto L_8c144a70;
        }
    } else {
        v1 = (float)(o->f6b4 - 0.1f);
        if (-4.0f > (o->f6b4 - 0.1f)) {
            v1 = (float)-4.0f;
        }
        o->f6b4 = v1;
        o->f6bc += v1;
        if (o->f69c > 30.0f) {
            o->f680 = 3;
            goto L_8c144a86;
L_8c144a70:;
            t1 = call_8c1430e0((void *)(((char *)o + 0x6a4)));
            if (t1 == 3) {
                o->f680 = 4;
            }
        }
    }
L_8c144a86:;
    o->f100 += 0.1f;
    if (o->f100 > 0.9f) {
        o->f100 = 0.9f;
    }
    v64 = (int)(o->f680 == 4);
    return (int)(v64);
}
