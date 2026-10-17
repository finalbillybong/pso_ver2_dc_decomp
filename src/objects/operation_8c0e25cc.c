typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2ba0 S_g8c4e2ba0;
typedef struct S_g8c4e2ba4 S_g8c4e2ba4;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv13_c S_vv13_c;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_c S_vv9_c;
struct Object {
    char unknown0[0x20];
    float f20;
    char unknown24[0x38];
    float f5c;
};
struct S_vv1 {
    char unknown0[0x14];
    int f14;
};
struct S_vv9 {
    char unknown0[0xc];
    S_vv9_c *f0c;
    char unknown10[0x4c];
    float f5c;
};
struct S_g8c4e2ba4 {
    char unknown0[0x14];
    int f14;
};
struct S_vv13 {
    char unknown0[0xc];
    S_vv13_c *f0c;
    char unknown10[0x4c];
    float f5c;
};
void operation_8c0e25cc(Object *o)
{
    S_vv1 *v1;
    float v2;
    int v8;
    S_vv9 *v9;
    float v7;
    float v10;
    int v12;
    S_vv13 *v13;
    float v14;
    v1 = (S_vv1 *)*(S_g8c4e2ba0 **)0x8c4e2ba0;
    if (v1 != 0) {
        v2 = (float)o->f20;
        if (v2 != 0.0f) {
            if (v2 != 0.0f) {
                *(float *)0x8c4e2bb8 -= -0.3f;
            }
            v7 = (float)o->f5c;
            v8 = (int)v1->f14;
            v9 = (S_vv9 *)v8;
            while (v9 != 0) {
                v10 = (float)v9->f5c;
                if (v7 > v10) {
                    v9->f5c = v10 - -0.3f;
                }
                v9 = (S_vv9 *)v9->f0c;
            }
            if (*(int *)0x8c4e2ba4 != 0) {
                v12 = (int)(*(S_g8c4e2ba4 **)0x8c4e2ba4)->f14;
                v13 = (S_vv13 *)v12;
                while (v13 != 0) {
                    v14 = (float)v13->f5c;
                    if (v7 > v14) {
                        v13->f5c = v14 - -0.3f;
                    }
                    v13 = (S_vv13 *)v13->f0c;
                }
            }
        }
    }
}
