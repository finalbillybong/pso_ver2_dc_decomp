typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct Object Object;
struct Object {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
};
struct S_c8c03b55c {
    char unknown0[0x138];
    unsigned char f138;
};
extern S_c8c03b55c *call_8c03b55c(int, int);
float operation_8c1c8764(Object *o, int a1)
{
    unsigned char v2;
    float v1;
    S_c8c03b55c *t1;
    S_c8c03b55c *t2;
    S_c8c03b55c *t3;
    S_c8c03b55c *t4;
    S_c8c03b55c *t5;
    S_c8c03b55c *t6;
    S_c8c03b55c *t7;
    v1 = (float)1.0f;
    v2 = (unsigned char)o->f01;
    switch (v2) {
    case 1:
        if (o->f02 == 5) {
            t1 = call_8c03b55c((int)(a1 + 0xbcc), 3);
            t2 = call_8c03b55c((int)(a1 + 0xbcc), 2);
            if (t1 != 0 && t2 != 0 && t1->f138 == 0x26 && t2->f138 == 0x28) {
                v1 = 1.5f;
            }
        }
        break;
    case 2:
        if (o->f02 == 5) {
            t3 = call_8c03b55c((int)(a1 + 0xbcc), 3);
            t4 = call_8c03b55c((int)(a1 + 0xbcc), 2);
            if (t3 != 0 && t4 != 0 && t3->f138 == 0x24 && t4->f138 == 0x26) {
                v1 = 1.5f;
            }
        }
        break;
    case 6:
        if (o->f02 == 6) {
            t5 = call_8c03b55c((int)(a1 + 0xbcc), 3);
            t6 = call_8c03b55c((int)(a1 + 0xbcc), 2);
            if (t5 != 0 && t6 != 0 && t5->f138 == 0x25 && t6->f138 == 0x27) {
                v1 = 1.5f;
            }
        }
        break;
    case 26:
        t7 = call_8c03b55c((int)(a1 + 0xbcc), 3);
        if (t7 != 0 && t7->f138 == 0x1a) {
            v1 = 2.0f;
        }
        break;
    }
    return v1;
}
