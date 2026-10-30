typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_3c S_g8c467180_3c;
typedef struct S_g8c467180_3c_0 S_g8c467180_3c_0;
typedef struct Object Object;
typedef struct Arg0_18c Arg0_18c;
typedef struct S_vv22 S_vv22;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x14a];
    char f176;
    char unknown177[0x5];
    float f17c;
    float f180;
    float f184;
    float f188;
    Arg0_18c *f18c;
};
struct S_g8c467180 {
    char unknown0[0x3c];
    S_g8c467180_3c *f3c;
};
struct S_g8c467180_3c {
    int f00;
    char unknown4[0x14];
    int f18;
};
struct S_vv22 {
    char unknown0[0x5c];
    float f5c;
};
struct Arg0_18c {
    char unknown0[0x5c];
    float f5c;
};
extern S_g8c467180 *g_8c467180;
extern void operation_8c04b244(int, int, float, float, float);
void operation_8c0ece88(Object *o)
{
    S_vv22 *v22;
    S_g8c467180_3c *pm2;
    int pm8;
    Arg0_18c *pm3;
    int *pm4;
    Arg0_18c *pm13;
    S_g8c467180_3c *pm7;
    switch (o->f176) {
        case 1:
        break;
        case 0:
        v22 = (S_vv22 *)o->f18c;
        if (0 != v22) {
            int pm11;
            float pm12;
            int pm1;
            int pm5;
            float pm9;
            pm7 = g_8c467180->f3c;
            pm1 = (int)(pm7->f00);
            pm12 = v22->f5c;
            pm11 = -1;
            operation_8c04b244(pm1, pm11, o->f17c, o->f180, -1.0f / (pm12 + 0.1495f));
            pm5 = o->f28;
            if (!(pm5 != 3)) {
                float pm6;
                pm13 = o->f18c;
                pm5 = -1;
                pm3 = pm13;
                pm12 = pm3->f5c;
                pm6 = pm12;
                pm2 = g_8c467180->f3c;
                pm8 = pm2->f18;
                operation_8c04b244((pm8), pm5, o->f184, o->f188, -1.0f / (0.1495f + pm6));
                return;
            }
            pm2 = g_8c467180->f3c;
            pm3 = o->f18c;
            pm4 = &pm2->f00;
            pm9 = pm3->f5c + 0.1495f;
            operation_8c04b244((int)(*(S_g8c467180_3c_0 **)((o->f28 + 1 << 2) + (char *)pm4)), -1, o->f184, o->f188, -1.0f / (pm9));
        }
    }
}
