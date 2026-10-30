typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_8 S_vv3_8;
typedef struct S_vv5 S_vv5;
struct S_vv3 {
    short f00;
    char unknown2[0x6];
    S_vv3_8 *f08;
};
struct S_vv5 {
    int f00;
};
struct Object {
    char unknown0[0x20];
    Vector3 f20;
    char unknown2c[0x14];
    int f40;
    char unknown44[0x4];
    int f48;
    char unknown4c[0x10];
    Arg0_5c *f5c;
    char unknown60[0x54];
    Vector3 fb4;
};
struct Arg0_5c {
    int f00;
    Vector3 f04;
};
extern S_g8c44be0c *g_8c44be0c;
extern float squared_distance_xyz(void *, void *);
extern int call_8c08db98(Object *, int);
void operation_8c08ce40(Object *o)
{
    int v1;
    Vector3 *pm2;
    S_vv5 *v5;
    int v7;
    float v6;
    int v2;
    S_vv3 *v3;
    int pm6;
    int pm7;
    S_vv3 *pm8;
    S_vv5 *pm9;
    int pm10;
    float pm11;
    pm8 = (S_vv3 *)g_8c44be0c;
    v3 = pm8;
    v5 = (S_vv5 *)v3->f08;
    pm11 = 100000000.0f;
    v6 = pm11;
    v2 = v1 = (unsigned short)(0);
    while ((int)v3->f00 > v2) {
        pm7 = v5->f00;
        if (pm7 >= 0) {
            float t1;
            pm10 = (int)v5;
            t1 = squared_distance_xyz((void *)(pm10 + 4), (void *)(&o->f20));
            if (t1 < v6) {
                v6 = t1;
                v1 = (int)v5;
                v7 = (int)v2;
            }
        }
        v2 = 1 + v2;
        pm9 = (S_vv5 *)((char *)v5 + 60);
        v5 = pm9;
    }
    if (0 != v1) {
        char *pm3;
        Vector3 *pm5;
        int pm4;
        o->f5c = (Arg0_5c *)v1;
        pm2 = &o->f20;
        o->f40 = (v7);
        *pm2 = *(&o->f5c->f04);
        pm5 = &o->fb4;
        pm2 = pm5;
        *((pm2)) = *(&o->f5c->f04);
        pm6 = o->f5c->f00;
        pm3 = (char *)pm6;
        pm7 = (int)(pm3);
        v7 = call_8c08db98(o, pm7);
        pm4 = v7;
        v1 = pm4;
        v7 = (v1);
        v2 = v7;
        o->f48 = v2;
    }
}
