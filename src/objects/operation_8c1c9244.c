typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    char unknown2[0x3];
    unsigned char f05;
};
extern int operation_8c1c933c(void *);
extern int operation_8c1c9348(void *);
extern int operation_8c1c9354(void *);
int operation_8c1c9244(Object *o)
{
    int v2;
    int v1;
    int t1;
    int t2;
    int t3;
    switch (o->tag) {
    case 0:
        v1 = (int)((char *)o + 0x6);
        v2 = (int)0;
        while (v2 != 3) {
            if ((*(unsigned char *)((char *)((char *)v1 + 0x0) + (v2 << 1))) != 0) {
                return 1;
            }
            v2 = (int)(v2 + 1);
        }
        break;
    case 1:
        if (o->f01 != 1) {
            if (o->f01 == 2) {
                goto L_8c1c92a4;
            }
            if (o->f01 == 3) {
                goto L_8c1c92c0;
            }
            goto L_8c1c92ec;
        }
        if (o->f05 != 0) {
            return 1;
        }
L_8c1c92a4:;
        t1 = operation_8c1c933c((void *)o);
        if (!((short)t1 > 0)) {
            t2 = operation_8c1c9348((void *)o);
            if (!((short)t2 > 0)) {
                goto L_8c1c92ec;
            }
        }
        return 1;
L_8c1c92c0:;
        t3 = operation_8c1c9354((void *)o);
        if (!((short)t3 > 0)) {
            goto L_8c1c92ec;
        }
        return 1;
    case 2:
        switch (o->f01) {
        case 29:
        case 33:
        case 34:
        case 39:
            return 1;
        }
    }
L_8c1c92ec:;
    return 0;
}
