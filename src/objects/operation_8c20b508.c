typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    short tag;
    char unknown2[0x2];
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x8];
    int f14;
};
struct Arg1 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x8];
    int f14;
};
void operation_8c20b508(Object *o, Arg1 *a1)
{
    int v22;
    int v9;
    short v8;
    int v1;
    v22 = o->tag;
    if (v22 > 1) {
        v1 = 0;
        v8 = o->f06;
        if (v8 >= 0x377 && 0x3c4 >= v8) {
            v1 = 1;
        }
        if (v1 != 0) {
            a1->f02 = 4;
            if (v22 > 3) {
                a1->f04 = o->f0a;
            } else if (v22 > 2 && o->f08 == 0x450) {
                a1->f04 = 0x463;
            } else {
                a1->f04 = 0x1b4;
            }
            a1->f06 = v8;
            a1->f08 = o->f04;
            if (v22 > 2) {
                a1->f0a = o->f08;
                a1->f00 = 4;
            } else {
                a1->f00 = 3;
            }
        } else {
            a1->f02 = 5;
            for (v9 = 0; v22 > v9; v9++) {
                *(short *)((char *)&a1->f04 + (v9 << 1)) = *(short *)((char *)&o->f04 + (v9 << 1));
            }
            a1->f00 = o->tag;
        }
    }
    a1->f14 = (int)(o->f14);
}
