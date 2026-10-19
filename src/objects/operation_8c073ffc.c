typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    char unknown2[0x1];
    unsigned char f03;
};
struct S_c8c1c7658 {
    char unknown0[0x8];
    short f08;
    char unknowna[0x6];
    unsigned char f10;
    char unknown11[0x1];
    unsigned char f12;
    unsigned char f13;
};
struct Frame {
    char unknown0[0x4];
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x4];
};
extern void call_8c1c9418(Object *);
extern int operation_8c1c9398(void *);
extern S_c8c1c7658 *operation_8c1c7658(void *);
extern int operation_8c1c933c(void *);
extern int operation_8c1c9348(void *);
extern int operation_8c1c9354(void *);
extern void initialize_fields_8c207358(void *);
extern void call_8c1c8ce4(Object *, Frame *);
extern int operation_8c207304(void *);
extern int call_8c18e768(int, int);
int operation_8c073ffc(Object *o)
{
    Frame frame;
    unsigned char v2;
    int v3;
    int v1;
    int v7;
    S_c8c1c7658 *t2;
    int t1;
    int v6;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (int)0;
    if (o == 0) {
        v1 = (int)0;
    } else {
        call_8c1c9418(o);
        t1 = operation_8c1c9398((void *)o);
        if ((unsigned char)t1 != 0) {
            v1 = (int)1;
        }
        t2 = operation_8c1c7658((void *)o);
        v2 = (unsigned char)o->tag;
        switch (v2) {
        case 0:
            if ((unsigned int)t2->f10 < (unsigned int)o->f03) {
                v1 = (int)1;
            }
            v3 = (int)0;
            while (v3 != 3) {
                if (*(char *)((char *)((char *)o + 0x7) + (v3 << 1)) > 0x3c) {
                    v1 = (int)1;
                }
                v3 = (int)(v3 + 1);
            }
            break;
        case 1:
            if (o->f01 != 3) {
                t3 = operation_8c1c933c((void *)o);
                if (t2->f12 < (short)t3) {
                    v1 = (int)1;
                }
                t4 = operation_8c1c9348((void *)o);
                if (t2->f13 < (short)t4) {
                    v1 = (int)1;
                }
                break;
            }
            v7 = (int)t2->f08;
            v6 = (int)(v7 << 1);
            t5 = operation_8c1c9354((void *)o);
            if ((short)t5 < (short)(v7 * -2) || (short)t5 > (short)v6) {
                v1 = (int)1;
            }
            break;
        case 2:
            initialize_fields_8c207358((void *)(&frame));
            call_8c1c8ce4(o, (Frame *)((&frame)));
            t6 = operation_8c207304((void *)(&frame));
            if ((short)t6 > 0xc8 || (short)call_8c18e768((int)((&frame)->f04), 0x64) < 0 || (short)call_8c18e768((int)((&frame)->f06), 0x64) < 0 || (short)call_8c18e768((int)((&frame)->f08), 0x64) < 0 || (short)call_8c18e768((int)((&frame)->f0a), 0x64) < 0) {
                v1 = (int)1;
            }
        }
    }
    return (int)(v1);
}
