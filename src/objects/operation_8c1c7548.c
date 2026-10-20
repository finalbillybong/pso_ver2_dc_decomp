typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
struct S_vv6 {
    int f00;
};
extern int operation_8c15816c(int, int);
extern int operation_8c1580d0(int, int);
extern int operation_8c158110(int);
extern int operation_8c158548(int);
extern int operation_8c158794(unsigned char);
extern int operation_8c1c9354(void *);
int operation_8c1c7548(Object *o)
{
    unsigned char v1;
    unsigned char v2;
    S_vv6 *v6;
    int v23;
    unsigned char v49;
    char *v50;
    int v51;
    int v52;
    int t1;
    int t2;
    int t3;
    v6 = (S_vv6 *)0;
    v1 = (unsigned char)o->tag;
    switch (v1) {
    case 0:
        v6 = (S_vv6 *)operation_8c15816c((int)(o->f01), (int)(o->f02));
        break;
    case 1:
        v2 = (unsigned char)o->f01;
        switch (v2) {
        case 1:
        case 2:
            v6 = (S_vv6 *)operation_8c1580d0((int)v2, (int)(o->f02));
            break;
        case 3:
            v6 = (S_vv6 *)operation_8c158110((int)(o->f02));
            break;
        }
        break;
    case 2:
        if ((unsigned int)o->f01 >= (unsigned int)0x28) {
            v23 = (int)0xc;
            goto L_8c1c75c6;
        }
        break;
    }
    if (v6 != 0) {
        v23 = operation_8c158548((int)(v6->f00));
    } else {
        v23 = (int)0;
    }
L_8c1c75c6:;
    v49 = (unsigned char)o->tag;
    v50 = (char *)v23;
    switch (v49) {
    case 0:
        if ((unsigned int)9 > (unsigned int)(unsigned char)v50) {
            if (((o->f04 & 0x80)) != 0) {
                break;
            }
            t1 = operation_8c158794(o->f04);
            v50 = (char *)(v50 + t1);
            break;
        }
        if (((o->f04 & 0x80)) == 0) {
            break;
        }
        v51 = (int)0;
        v50 = (char *)v51;
        break;
    case 1:
        if (o->f01 != 3) {
            break;
        }
        t2 = operation_8c1c9354((void *)o);
        if (!((short)t2 >= 0)) {
            v50 = (char *)(v50 + -1);
            break;
        }
        if (!((short)t2 > 0)) {
            break;
        }
        v50 = (char *)(v50 + 1);
    }
    v52 = (int)v50;
    if ((unsigned int)(unsigned char)v50 > (unsigned int)0xc) {
        v52 = (int)0xc;
    }
    return (int)(v52);
}
