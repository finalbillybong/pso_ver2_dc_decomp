typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467240 S_g8c467240;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_dc S_vv7_dc;
typedef struct S_vv8 S_vv8;
typedef struct Block_frame_c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_c;
typedef struct Block_vv7_3c {
    char unknown0[0x8];
    float f08;
} Block_vv7_3c;
struct S_vv7 {
    int f00;
    char unknown4[0x38];
    Block_vv7_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x74];
    S_vv7_dc *fdc;
};
struct S_vv8 {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    Block_frame_c f0c;
};
extern int g_8c309720;
extern int g_8c325f64;
extern int g_8c467870;
extern int g_8c467874;
extern int g_8c467878;
extern float call_8c12c714(float);
extern float signed_sqrt_8c37f6c0(float);
extern void scale_vector_to_length(void *, float);
extern void operation_8c13a344(void *, void *, int);
void operation_8c139fc4(int a0)
{
    Vector3 pos;
    Vector3 dir;
    int v5;
    S_vv7 *v7;
    S_vv8 *v8;
    int v9;
    int v10;
    int v2;
    int v1;
    int v3;
    int v4;
    int v11;
    float t1;
    float t2;
    float fv1;
    if (a0 != 0) {
        v1 = (int)-0x1388;
    } else {
        v1 = (int)0;
    }
    fv1 = (float)v1;
    v2 = (int)0x40000;
    v3 = (int)-0x1388;
    v5 = (int)(g_8c467874 + g_8c467878);
    v4 = (int)0x1388;
    while (g_8c467870 > v5) {
        v7 = (S_vv7 *)*(S_g8c467240 **)((char *)0x8c467240 + (v5 << 2));
        if (v7 != 0) {
            v8 = (S_vv8 *)v7->fdc;
            if (v8 != 0) {
                v9 = (int)(v7->f00 == g_8c309720);
                if (v9 == 0) {
                    v10 = (int)(v7->f00 == g_8c325f64);
                    if (v10 == 0 && ((v8->f18 & v2)) != 0) {
                        t1 = call_8c12c714(v7->f3c.f08 - fv1);
                        if (t1 > 1000.0f) {
                            pos = *(Vector3 *)&v7->f3c;
                            if (a0 != 0) {
                                v11 = (int)v3;
                            } else {
                                v11 = (int)v4;
                            }
                            pos.z += (float)v11;
                            if (a0 == 1) {
                                dir.x = pos.x;
                                dir.y = 0.0f;
                                dir.z = pos.z - fv1;
                                t2 = signed_sqrt_8c37f6c0(dir.x * dir.x + dir.z * dir.z);
                                if (50.0f > t2) {
                                    scale_vector_to_length((void *)(&dir), 50.0f);
                                    pos.x = dir.x;
                                    pos.z = dir.z + fv1;
                                }
                            }
                            operation_8c13a344((void *)v7, (void *)(&pos), (int)(v7->f64));
                        }
                    }
                }
            }
        }
        v5 = (int)(v5 + 1);
    }
}
