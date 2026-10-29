typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d820c S_L8c4d820c;
typedef struct S_L8c4d820c_4 S_L8c4d820c_4;
typedef struct S_g8c4d820c S_g8c4d820c;
typedef struct Object Object;
struct Object {
    char unknown0[0xe8];
    float fe8;
    char unknownec[0x4];
    float ff0;
    char unknownf4[0x2c];
    float f120;
};
struct S_L8c4d820c {
    S_g8c4d820c *f00;
    S_L8c4d820c_4 *f04;
};
struct S_L8c4d820c_4 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4d820c {
    char unknown0[0x4];
    int f04;
};
extern S_L8c4d820c g_8c4d820c;
void operation_8c113aa4(Object *o)
{
    int v12;
    int v2;
    float pm1;
    int pm2;
    int pm3;
    S_L8c4d820c *pm4;
    pm3 = -1;
    o->fe8 += o->ff0;
    pm4 = &g_8c4d820c;
    pm2 = (pm4)->f04->f04 + (pm3);
    pm1 = o->fe8;
    v2 = (pm2);
    if ((float)(unsigned int)v2 < pm1) {
        o->fe8 = (float)(unsigned int)v2;
    }
    pm1 = o->f120 + o->ff0;
    o->f120 = pm1;
    v2 = -1 + (&g_8c4d820c)->f00->f04;
    v12 = ((v2));
    if (o->f120 > (float)(unsigned int)v12) {
        o->f120 = (float)(unsigned int)v12;
    }
}
