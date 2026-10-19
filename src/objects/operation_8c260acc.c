typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block80 {
    int words[20];
} Block80;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv14 S_vv14;
typedef struct S_vv3 S_vv3;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    Block80 f24;
    Block80 f74;
};
struct Frame {
    Block80 f00;
    Block80 f50;
};
struct S_vv1 {
    Block80 f00;
};
struct S_vv3 {
    Block80 f00;
};
struct S_vv9 {
    Block80 f00;
};
struct S_vv14 {
    Block80 f00;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c4db9e0;
extern int lookup_low_id(int);
extern int operation_8c260934(int, void *, void *);
void operation_8c260acc(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    S_vv3 *v3;
    int v4;
    S_vv9 *v9;
    S_vv14 *v14;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        v1 = (S_vv1 *)0;
    } else {
        v1 = (S_vv1 *)(t1 + 0x7e4);
    }
    if (v1 == 0) {
        o->f04 |= 1;
        return;
    }
    *(Block80 *)&(&frame)->f50 = *(Block80 *)&v1->f00;
    if (g_8c4db9e0 == 0) {
        v3 = (S_vv3 *)0;
    } else {
        v3 = (S_vv3 *)(g_8c4db9e0 + 0x370);
    }
    if (v3 == 0) {
        o->f04 |= 1;
        return;
    }
    *(Block80 *)&(&frame)->f00 = *(Block80 *)&v3->f00;
    v4 = (int)0;
    t2 = operation_8c260934((int)o, (void *)(&(&frame)->f50), (void *)(&frame));
    if (t2 == 0) {
        v4 = (int)(v4 | 1);
    }
    t3 = operation_8c260934((int)o, (void *)(&o->f24), (void *)(&o->f74));
    if (t3 == 0) {
        v4 = (int)(v4 | 2);
    }
    t4 = operation_8c260934((int)o, (void *)(&o->f24), (void *)(&(&frame)->f50));
    if (t4 == 0) {
        v4 = (int)(v4 | 4);
    }
    t5 = operation_8c260934((int)o, (void *)(&o->f74), (void *)(&frame));
    if (t5 == 0) {
        v4 = (int)(v4 | 8);
    }
    if (v4 != 0) {
        if (((v4 & 2)) != 0) {
            o->f04 |= 1;
            return;
        }
        if (((v4 & 4)) != 0) {
            t6 = lookup_low_id((int)g_8c418248);
            if (t6 == 0) {
                v9 = (S_vv9 *)0;
            } else {
                v9 = (S_vv9 *)(t6 + 0x7e4);
            }
            if (v9 != 0) {
                *(Block80 *)&v9->f00 = *(Block80 *)&o->f24;
            }
        }
        if (((v4 & 8)) != 0) {
            if (g_8c4db9e0 == 0) {
                v14 = (S_vv14 *)0;
            } else {
                v14 = (S_vv14 *)(g_8c4db9e0 + 0x370);
            }
            if (v14 != 0) {
                *(Block80 *)&v14->f00 = *(Block80 *)&o->f74;
            }
        }
    }
}
