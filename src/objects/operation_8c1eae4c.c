typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
struct Object {
    char unknown0[0x302];
    short f302;
    char unknown304[0x34];
    Arg0_338 *f338;
};
struct Arg0_338 {
    char unknown0[0x8];
    int f08;
};
extern int operation_8c025fe8(void *, int);
extern int operation_8c02606c(void *, int);
extern int operation_8c1eacf4(void *);
int operation_8c1eae4c(Object *o)
{
    int v1;
    int v3;
    int v7;
    int v12;
    int v11;
    int v6;
    int v2;
    int v16;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (int)-1;
    t1 = operation_8c025fe8((void *)o, 1);
    v3 = (int)v1;
    if ((unsigned short)t1 == 2) {
        v2 = (int)(((o->f338->f08 & 4)) != 0);
        v3 = (int)v1;
        if (v2 != 0) {
            v3 = (int)1;
        }
    }
    t2 = operation_8c025fe8((void *)o, 2);
    v7 = (int)v3;
    if ((unsigned short)t2 == 2) {
        v6 = (int)(((o->f338->f08 & 0x400)) != 0);
        v7 = (int)v3;
        if (v6 != 0) {
            v7 = (int)2;
        }
    }
    t3 = operation_8c025fe8((void *)o, 3);
    v12 = (int)v7;
    if ((unsigned short)t3 == 2) {
        v11 = (int)(((o->f338->f08 & 2)) != 0);
        v12 = (int)v7;
        if (v11 != 0) {
            v12 = (int)3;
        }
    }
    t4 = operation_8c02606c((void *)o, v12);
    if ((unsigned short)t4 == 2 && o->f302 == 0) {
        v16 = (int)0;
    } else {
        t5 = operation_8c1eacf4((void *)o);
        v16 = (int)t5;
    }
    if (v16 != 0) {
        return (int)(v12);
    }
    return -1;
}
