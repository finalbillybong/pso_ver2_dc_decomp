typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c33ff6c S_L8c33ff6c;
typedef struct S_L8c33ff6c_8 S_L8c33ff6c_8;
typedef struct S_L8c33ff7c S_L8c33ff7c;
typedef struct S_L8c33ff7c_8 S_L8c33ff7c_8;
typedef struct S_L8c513340 S_L8c513340;
typedef struct S_L8c513340_8 S_L8c513340_8;
struct S_L8c513340 {
    float f00;
    float f04;
    S_L8c513340_8 *f08;
    float f0c;
};
struct S_L8c33ff7c {
    float f00;
    float f04;
    S_L8c33ff7c_8 *f08;
    float f0c;
};
struct S_L8c33ff6c {
    float f00;
    float f04;
    S_L8c33ff6c_8 *f08;
    float f0c;
};
extern S_L8c33ff6c g_8c33ff6c;
extern S_L8c33ff7c g_8c33ff7c;
extern S_L8c513340 g_8c513340;
extern float call_8c12c714(float);
extern int angle_difference(int, int);
void operation_8c256dcc(void)
{
    float v1;
    float v16;
    float v39;
    float t1;
    float t2;
    float t3;
    float t4;
    int t5;
    int t6;
    float t7;
    float t8;
    v1 = (float)(&g_8c513340)->f00;
    if (v1 != 0.0f) {
        if (0.0f > (((&g_8c33ff7c)->f00 - (&g_8c33ff6c)->f00) * v1)) {
            (&g_8c513340)->f00 = 0.0f;
        } else {
            t2 = call_8c12c714((&g_8c33ff7c)->f00 - (&g_8c33ff6c)->f00);
            t1 = call_8c12c714(v1);
            if (t1 > t2) {
                (&g_8c33ff6c)->f00 = (&g_8c33ff7c)->f00;
                (&g_8c513340)->f00 = 0.0f;
            } else {
                (&g_8c33ff6c)->f00 += (&g_8c513340)->f00;
            }
        }
    }
    v16 = (float)(&g_8c513340)->f04;
    if (v16 != 0.0f) {
        if (0.0f > (((&g_8c33ff7c)->f04 - (&g_8c33ff6c)->f04) * v16)) {
            (&g_8c513340)->f04 = 0.0f;
        } else {
            t4 = call_8c12c714((&g_8c33ff7c)->f04 - (&g_8c33ff6c)->f04);
            t3 = call_8c12c714(v16);
            if (t3 > t4) {
                (&g_8c33ff6c)->f04 = (&g_8c33ff7c)->f04;
                (&g_8c513340)->f04 = 0.0f;
            } else {
                (&g_8c33ff6c)->f04 += (&g_8c513340)->f04;
            }
        }
    }
    if ((&g_8c513340)->f08 != 0) {
        t6 = angle_difference((int)((&g_8c33ff6c)->f08), (int)((&g_8c33ff7c)->f08));
        t5 = angle_difference(0, (int)((&g_8c513340)->f08));
        if (t5 > t6) {
            (&g_8c33ff6c)->f08 = (S_L8c33ff6c_8 *)(&g_8c33ff7c)->f08;
            (&g_8c513340)->f08 = (S_L8c513340_8 *)0;
        } else {
            (&g_8c33ff6c)->f08 = (S_L8c33ff6c_8 *)((int)(&g_8c33ff6c)->f08 + (int)(&g_8c513340)->f08);
        }
    }
    v39 = (float)(&g_8c513340)->f0c;
    if (v39 != 0.0f) {
        if (0.0f > (((&g_8c33ff7c)->f0c - (&g_8c33ff6c)->f0c) * v39)) {
            (&g_8c513340)->f0c = 0.0f;
            return;
        }
        t8 = call_8c12c714((&g_8c33ff7c)->f0c - (&g_8c33ff6c)->f0c);
        t7 = call_8c12c714(v39);
        if (t7 > t8) {
            (&g_8c33ff6c)->f0c = (&g_8c33ff7c)->f0c;
            (&g_8c513340)->f0c = 0.0f;
            return;
        }
        (&g_8c33ff6c)->f0c += (&g_8c513340)->f0c;
    }
}
