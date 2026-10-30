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
    Vector3 f4c;
    char unknown58[0x4];
    Arg0_5c *f5c;
};
struct Arg0_5c {
    int f00;
    Vector3 f04;
};
extern S_g8c44be0c *g_8c44be0c;
extern float squared_distance_xyz(void *, void *);
extern int call_8c090198(Object *, int);
void operation_8c08f414(Object *o)
{
    int v1;
    int t2;
    int pm6;
    S_vv5 *v5;
    int v7;
    int v2;
    S_vv3 *v3;
    float v6;
    char *v32;
    int pm3;
    v3 = (S_vv3 *)g_8c44be0c;
    v5 = (S_vv5 *)v3->f08;
    v1 = 0;
    pm3 = (int)0;
    v2 = pm3;
    v6 = (float)100000000.0f;
    while (v2 < (int)v3->f00) {
        if (v5->f00 >= 0) {
            int pm4;
            float t1;
            pm4 = (int)v5;
            t1 = squared_distance_xyz((void *)(4 + pm4), (void *)(&o->f20));
            if (t1 < v6) {
                v6 = t1;
                v1 = (int)v5;
                v7 = v2;
            }
        }
        v2 = (int)(v2 + 1);
        v5 = (S_vv5 *)((char *)v5 + 60);
    }
    if (v1 != 0) {
        o->f5c = (Arg0_5c *)v1;
        o->f40 = (int)(v7);
        *(Vector3 *)&o->f20 = *(Vector3 *)&o->f5c->f04;
        *(&o->f4c) = *(Vector3 *)&o->f5c->f04;
        pm6 = o->f5c->f00;
        v32 = (char *)pm6;
        t2 = call_8c090198(o, (int)(v32));
        o->f48 = (int)(t2);
    }
}
