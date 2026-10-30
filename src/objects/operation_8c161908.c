typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct S_vv8 S_vv8;
typedef struct S_x17872 S_x17872;
typedef struct S_x74320 S_x74320;
typedef struct S_x79088 S_x79088;
typedef struct Block_frame_18 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_18;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x340];
    float f394;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Block_frame_18 f18;
};
struct S_x17872 {
    float f00;
};
struct S_vv8 {
    char unknown0[0x34];
    int f34;
};
struct S_x79088 {
    float f00;
};
struct S_x74320 {
    float f00;
};
extern int g_8c467874;
extern void call_8c37f6f0(void *, void *);
extern float call_8c37e480(void *);
extern void call_8c37b630(void *);
extern float squared_distance_xz(void *, void *);
extern void call_8c161a80(Object *, S_vv8 *);
extern void call_8c3bdf60(void *, void *);
extern void call_8c161afc(Object *, Frame *);
void operation_8c161908(Object *o)
{
    Frame frame;
    float v1;
    int v7;
    S_vv8 *v8;
    int v5;
    float v9;
    int v6;
    int v4;
    int v36;
    float v37;
    float t1;
    float t2;
    float pm11;
    Block_frame_18 *pm7;
    S_x17872 *pm4;
    Frame *pm5;
    float pm9;
    int pm3;
    S_x17872 *pm14;
    float pm12;
    Vector3 *pm13;
    S_vv8 *pm6;
    v1 = o->f394;
    pm13 = (Vector3 *)&(&frame)->f18;
    *pm13 = *(&o->f48);
    v1 = v1 * v1;
    call_8c37f6f0((void *)(&(&frame)->f18), (void *)(&o->f3c));
    pm9 = call_8c37e480((void *)((&(&frame)->f18)));
    t1 = pm9;
    if (0.0f == t1) {
        float pm10;
        pm10 = 1.0f;
        (&frame)->f18.f00 = pm10;
    }
    call_8c37b630((void *)(&(&frame)->f18));
    v4 = 0x394;
    v5 = 0x2000a00;
    pm14 = (S_x17872 *)((int)o + v4);
    pm4 = (S_x17872 *)(v4 + (int)o);
    (&frame)->f18.f00 *= (pm14)->f00;
    (&frame)->f18.f08 = (&frame)->f18.f08 * (pm4)->f00;
    v7 = 0;
    v6 = (unsigned short)0x324;
    for (; v7 < g_8c467874; v7++) {
        pm6 = (S_vv8 *)*(S_g8c467240 **)((v7 << 2) + (char *)0x8c467240);
        v8 = pm6;
        if (v8 != 0) {
            if (((v8->f34 & v5)) == 0) {
                Frame *pm15;
                pm15 = &frame;
                pm13 = &o->f3c;
                *(&(pm15)->f0c) = *(pm13);
                v9 = 0.0f;
                for (; v9 < t1; ) {
                    pm5 = (&frame);
                    t2 = squared_distance_xz((void *)(&(pm5)->f0c), (void *)((int)v8 + (int)(int)v6));
                    if (!(t2 > v1)) {
                        call_8c161a80(o, v8);
                        break;
                    }
                    pm7 = &(&frame)->f18;
                    pm12 = ((S_x79088 *)((int)o + v4))->f00;
                    v9 = pm12 + v9;
                    call_8c3bdf60((void *)(&(&frame)->f0c), (void *)(pm7));
                }
            }
        }
    }
    pm11 = 0.0f;
    *(&(&frame)->f00) = *(&o->f3c);
    pm3 = 0x394;
    v36 = pm3;
    v37 = pm11;
    for (; t1 > v37; ) {
        int pm8;
        pm8 = (int)o;
        call_8c161afc(o, ((&frame)));
        v37 += ((S_x74320 *)(pm8 + v36))->f00;
        pm7 = &(&frame)->f18;
        call_8c3bdf60((void *)(&frame), (void *)(pm7));
    }
}
