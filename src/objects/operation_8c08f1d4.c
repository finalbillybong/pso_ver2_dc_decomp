typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0bb998 S_c8c0bb998;
typedef struct Object Object;
typedef struct S_vv21 S_vv21;
typedef struct S_vv21_58 S_vv21_58;
typedef struct S_vv21_5c S_vv21_5c;
typedef struct S_vv21_s20 S_vv21_s20;
typedef struct S_vv21_s4c S_vv21_s4c;
typedef struct S_vv27 S_vv27;
typedef struct S_vv29 S_vv29;
struct Object {
    char unknown0[0x40];
    int f40;
};
struct S_vv21 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x1c];
    int f40;
    char unknown44[0x4];
    int f48;
    int f4c;
    char unknown50[0x8];
    S_vv21_58 *f58;
    S_c8c0bb998 *f5c;
};
struct S_vv21_58 {
    short f00;
};
struct S_c8c0bb998 {
    int f00;
};
struct S_vv27 {
    int f00;
    int f04;
    int f08;
};
struct S_vv21_s20 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv29 {
    int f00;
    int f04;
    int f08;
};
struct S_vv21_s4c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_vv21_5c {
    int f00;
};
extern S_c8c0bb998 *forward_scene_record(void *, int);
extern int call_8c090198(S_vv21 *, int);
void operation_8c08f1d4(S_vv21 *v21, int a1)
{
    int i;
    int neg;
    int max;
    S_c8c0bb998 *t1;
    i = v21->f40;
    neg = -1;
    for (;;) {
        i += a1;
        max = v21->f58->f00 + neg;
        if (i > max) {
            i = 0;
        }
        if (i < 0) {
            i = max;
        }
        t1 = forward_scene_record((void *)v21, i);
        if (t1 == 0) {
            continue;
        }
        if (t1->f00 == neg) {
            continue;
        }
        break;
    }
    v21->f5c = t1;
    *(S_vv27 *)((char *)v21 + 0x20) = *(S_vv27 *)((char *)v21->f5c + 0x4);
    *(S_vv27 *)((char *)v21 + 0x4c) = *(S_vv27 *)((char *)v21->f5c + 0x4);
    v21->f48 = call_8c090198(v21, v21->f5c->f00);
    v21->f40 = i;
}
