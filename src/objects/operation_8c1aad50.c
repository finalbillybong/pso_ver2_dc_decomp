typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_84 Arg0_84;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_s58 Arg0_s58;
typedef struct Arg0_s68 Arg0_s68;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct Block_p0_58 {
    char unknown0[0x4];
    float f04;
} Block_p0_58;
struct Object {
    char unknown0[0x34];
    int f34;
    Vector3 f38;
    int f44;
    Vector3 f48;
    char unknown54[0x4];
    Block_p0_58 f58;
    float f60;
    char unknown64[0x4];
    int f68;
    float f6c;
    float f70;
    char unknown74[0x10];
    Arg0_84 *f84;
    Arg0_88 *f88;
};
struct Arg0_84 {
    Vector3 f00;
};
struct S_vv5 {
    Block8 f00;
    int f08;
};
struct Arg0_s58 {
    char unknown0[0x8];
    int f08;
};
struct S_vv4 {
    Vector3 f00;
};
struct S_vv3 {
    int f00;
    int f04;
    int f08;
};
struct Arg0_s68 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
};
extern Vector3 g_8c324efc;
extern void call_8c0bbc90(Object *, Frame *);
void operation_8c1aad50(Object *o)
{
    Frame frame;
    S_vv5 *v5;
    int *pm9;
    Vector3 *pm2;
    int *pm1;
    Vector3 *pm3;
    int *pm5;
    Vector3 *pm4;
    float pm6;
    Vector3 *pm7;
    Frame *pm8;
    Arg0_s58 *pm10;
    float pm11;
    pm2 = (Vector3 *)&o->f38;
    o->f34 = 0;
    *pm2 = *(Vector3 *)&o->f84->f00;
    v5 = (S_vv5 *)o->f84;
    *(Block8 *)&o->f58 = *(Block8 *)&v5->f00;
    pm10 = (Arg0_s58 *)((char *)o + 0x58);
    (pm10)->f08 = (int)((char *)v5->f08);
    o->f58.f04 -= 7.07f;
    o->f60 += 7.07f;
    o->f44 = 0;
    pm2 = (Vector3 *)&o->f48;
    pm9 = &o->f68;
    pm5 = pm9;
    *pm2 = *(&((S_vv4 *)o->f88)->f00);
    pm4 = &g_8c324efc;
    pm1 = pm5;
    *(Vector3 *)pm1 = *(Vector3 *)o->f88;
    pm11 = 7.07f;
    o->f6c -= pm11;
    pm6 = 7.07f;
    o->f70 += pm6;
    pm7 = (Vector3 *)pm4;
    pm2 = pm7;
    pm3 = pm2;
    pm7 = (Vector3 *)&(&frame)->f00;
    pm8 = &frame;
    *pm7 = *pm3;
    call_8c0bbc90(o, (Frame *)((pm8)));
}
