typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    unsigned char f02;
};
struct S_c8c03b55c {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0x1];
    unsigned char f138;
};
extern S_c8c03b55c *call_8c03b55c(int, int);
float operation_8c1c8b88(Object *o, int a1)
{
    float v1;
    S_c8c03b55c *t1;
    S_c8c03b55c *t2;
    v1 = 1.0f;
    switch (o->f02) {
    case 0x1a:
        t1 = call_8c03b55c((int)(a1 + 0xbcc), 6);
        if (t1 != 0 && t1->f136 == 0x1a) {
            v1 = 2.0f;
        }
        break;
    case 0x26:
        t1 = call_8c03b55c((int)(a1 + 0xbcc), 6);
        t2 = call_8c03b55c((int)(a1 + 0xbcc), 2);
        if (t1 != 0 && t2 != 0 && t1->f136 == 1 && t1->f138 == 5 && t2->f138 == 0x28) {
            v1 = 1.5f;
        }
        break;
    case 0x24:
        t1 = call_8c03b55c((int)(a1 + 0xbcc), 6);
        t2 = call_8c03b55c((int)(a1 + 0xbcc), 2);
        if (t1 != 0 && t2 != 0 && t1->f136 == 2 && t1->f138 == 5 && t2->f138 == 0x26) {
            v1 = 1.5f;
        }
        break;
    case 0x25:
        t1 = call_8c03b55c((int)(a1 + 0xbcc), 6);
        t2 = call_8c03b55c((int)(a1 + 0xbcc), 2);
        if (t1 != 0 && t2 != 0 && t1->f136 == 6 && t1->f138 == 6 && t2->f138 == 0x27) {
            v1 = 1.5f;
        }
        break;
    }
    return v1;
}
