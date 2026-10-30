typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_0 S_vv6_0;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
};
struct S_vv6 {
    S_vv6_0 *f00;
};
extern int call_8c15816c(int, int);
extern int call_8c1580d0(int, int);
extern int operation_8c158110(int);
extern unsigned char operation_8c158548(int);
int operation_8c1c7ffc(Object *o)
{
    S_vv6 *v6;
    unsigned char v28;
    S_vv6_0 *pm1;
    int pm2;
    unsigned char v2;
    unsigned char pm3;
    int pm4;
    unsigned int pm5;
    int pm6;
    pm6 = 0;
    v6 = (S_vv6 *)pm6;
    switch ((int)((unsigned char)o->tag)) {
        case 0:
        pm2 = call_8c15816c(((int)o->f01), (int)(o->f02));
        v6 = (S_vv6 *)pm2;
        break;
        case 1:
        v2 = (unsigned char)o->f01;
        switch (v2) {
            case 1:
            case 2:
            v6 = (S_vv6 *)call_8c1580d0((int)v2, (int)(o->f02));
            break;
            case 3:
            v6 = (S_vv6 *)operation_8c158110((int)(o->f02));
            break;
        }
        break;
        case 2:
        pm3 = o->f01;
        pm4 = 0x28;
        if ((unsigned int)pm3 >= (unsigned int)pm4) {
            v28 = 0xc;
            goto L_done;
        }
        break;
    }
    if (v6 != 0) {
        pm1 = v6->f00;
        v28 = operation_8c158548((int)(pm1));
    } else {
        v28 = 0;
    }
L_done:
    ;
    pm5 = (unsigned int)v28;
    return pm5 >= (unsigned int)9;
}
