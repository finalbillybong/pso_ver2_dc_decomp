typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d0];
    short f308;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    Block_frame_c f0c;
};
struct Object {
    Vector3 tag;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_8c036840(int);
void operation_8c110c80(Object *o, int a1)
{
    Frame frame;
    int v2;
    int v6;
    int v1;
    int v3;
    int v4;
    int v5;
    int v7;
    S_c8c021ef8 *t1;
    v1 = (int)0x5f8;
    v2 = (int)0;
    v3 = (int)0xffff;
    v4 = (int)0x100000;
    v5 = (int)-1;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0) {
            v6 = (int)(t1->f308 == 3);
            if (v6 != 0 && (*(unsigned short *)((char *)((char *)t1 + 0x0) + (v1)) & 0xffff) != (unsigned short)v3) {
                v7 = (int)0;
                if (((t1->f34 & v4)) != 0) {
                    v7 = (int)1;
                }
                (&frame)->f00 = 0x1a;
                (&frame)->f01 = 1;
                (&frame)->f00 = 0x3d;
                (&frame)->f01 = 1;
                (&frame)->f04 = 0;
                (&frame)->f06 = 0;
                (&frame)->f08 = v5;
                (&frame)->f0a = v5;
                (&frame)->f0c.f08 = 0.0f;
                (&frame)->f0c.f04 = 0.0f;
                (&frame)->f0c.f00 = 0.0f;
                (&frame)->f00 = 0x3e;
                (&frame)->f01 = 6;
                (&frame)->f02 = t1->f20;
                *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&o->tag;
                (&frame)->f06 = a1;
                (&frame)->f04 = v7;
                operation_8c036840((int)(&frame));
            }
        }
        v2 = (int)(v2 + 1);
    }
}
