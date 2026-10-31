typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
struct Object {
    char unknown0[0x302];
    short f302;
    char unknown304[0x514];
    int f818;
    char unknown81c[0x3ac];
    Arg0_bc8 *fbc8;
};
struct Frame {
    char f00;
    char f01;
    char f02;
    char unknown3[0x11];
};
extern int player_flag9_8c026508(void);
extern int call_8c247730(void *, int);
extern void operation_1c7dd4(void *);
extern int find_node_8c16a3c0(void *, int);
extern int operation_8c1ac9a4(void *, int, int);
int operation_8c1ac704(Object *o, int a1, int a2)
{
    Frame frame;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    switch ((unsigned int)((unsigned char)a1)) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        if ((unsigned char)a2 == 2) {
            if (o->f302 == 0) {
                return 0;
            }
        }
        t1 = player_flag9_8c026508();
        if (t1 == 0) {
            break;
        }
        return 1;
    case 3:
        t2 = call_8c247730((void *)(((char *)o + 0x3bc)), (int)((unsigned char)a2));
        if ((char)t2 == -1) {
            return 0;
        }
        t3 = player_flag9_8c026508();
        if (t3 == 0) {
            break;
        }
        return 1;
    case 4:
        operation_1c7dd4((void *)(&frame));
        (&frame)->f00 = 3;
        switch ((unsigned int)((unsigned char)a2)) {
        case 0:
            (&frame)->f01 = 0;
            (&frame)->f02 = 0;
            break;
        case 1:
            (&frame)->f01 = 0;
            (&frame)->f02 = 1;
            break;
        case 2:
            (&frame)->f01 = 0;
            (&frame)->f02 = 2;
            break;
        case 3:
            v2 = (int)(((o->f818 & 0x10)) != 0);
            if (v2 != 0) {
                return 0;
            }
            (&frame)->f01 = 1;
            (&frame)->f02 = 0;
            break;
        case 4:
            v3 = (int)(((o->f818 & 0x10)) != 0);
            if (v3 != 0) {
                return 0;
            }
            (&frame)->f01 = 1;
            (&frame)->f02 = 1;
            break;
        case 5:
            v4 = (int)(((o->f818 & 0x10)) != 0);
            if (v4 != 0) {
                return 0;
            }
            (&frame)->f01 = 1;
            (&frame)->f02 = 2;
            break;
        case 6:
            v5 = (int)(((o->f818 & 0x10)) != 0);
            if (v5 != 0) {
                return 0;
            }
            (&frame)->f01 = 6;
            (&frame)->f02 = 0;
            break;
        case 7:
            v6 = (int)(((o->f818 & 0x10)) != 0);
            if (v6 != 0) {
                return 0;
            }
            (&frame)->f01 = 6;
            (&frame)->f02 = 1;
            break;
        case 8:
            (&frame)->f01 = 3;
            break;
        case 9:
            (&frame)->f01 = 4;
            break;
        case 10:
            (&frame)->f01 = 5;
            break;
        case 11:
            (&frame)->f01 = 7;
            break;
        case 12:
            v7 = (int)(((o->f818 & 0x10)) != 0);
            if (v7 != 0) {
                return 0;
            }
            (&frame)->f01 = 8;
        }
        t4 = find_node_8c16a3c0((void *)(o->fbc8), (int)(&frame));
        if (t4 == 0) {
            return 0;
        }
        t5 = player_flag9_8c026508();
        if (t5 == 0) {
            break;
        }
        return 1;
    case 6:
        if (*(char *)((char *)((char *)o + 0x4a0) + ((short)(unsigned char)a2)) != 0xff) {
            break;
        }
        return 0;
    case 7:
        return 1;
    case 5:
        break;
    }
    t6 = operation_8c1ac9a4((void *)o, a1, a2);
    v8 = (int)(t6 != 0);
    return (int)(v8);
}
