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
    char unknown6a0[0x1c];
    float f6bc;
};
extern int call_8c1430e0(void *);
int operation_8c144938(Object *o)
{
    int v67;
    int t1;
    call_8c1430e0((void *)(((char *)o + 0x684)));
    if (o->f680 != 0) {
        if (o->f680 == 2) {
            goto L_8c144976;
        }
        if (o->f680 == 3) {
            goto L_8c14498a;
        }
    } else {
        if (o->f69c > 160.0f) {
            o->f680 = 2;
            goto L_8c1449cc;
L_8c144976:;
            o->f100 = 0.3f;
            o->f680 = 3;
            goto L_8c1449cc;
L_8c14498a:;
            t1 = call_8c1430e0((void *)(((char *)o + 0x6a4)));
            if (t1 == 3) {
                o->f680 = 4;
            }
            if (o->f6bc > 200.0f) {
                o->f100 += 0.1f;
                if (o->f100 > 0.9f) {
                    o->f100 = 0.9f;
                }
            }
        }
    }
L_8c1449cc:;
    v67 = (int)(o->f680 == 4);
    return (int)(v67);
}
