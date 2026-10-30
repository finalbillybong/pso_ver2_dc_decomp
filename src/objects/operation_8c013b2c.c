typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41887c S_L8c41887c;
typedef struct S_x20992 S_x20992;
typedef struct S_x23504 S_x23504;
typedef struct S_x45520 S_x45520;
typedef struct S_x67760 S_x67760;
typedef struct S_x72352 S_x72352;
typedef struct S_x75200 S_x75200;
struct S_L8c41887c {
    char unknown0[0x1c];
    int f1c;
    int f20;
    int f24;
    int f28;
};
struct S_x20992 {
    float f00;
};
struct S_x23504 {
    float f00;
};
struct S_x67760 {
    int f00;
};
struct S_x72352 {
    float f00;
};
struct S_x75200 {
    float f00;
};
struct S_x45520 {
    int f00;
};
extern int g_8c4189e0;
extern S_L8c41887c g_8c41887c;
void operation_8c013b2c(int a0, float f0, float f1)
{
    int k8;
    int v1;
    int v16;
    int v2;
    int pm3;
    char *pm1;
    char *pm4;
    v1 = g_8c4189e0;
    pm3 = 8;
    k8 = pm3;
    v16 = 1;
    if (!(v1 >= k8)) {
        int kff;
        int pm8;
        pm8 = 0xffff;
        v2 = 0;
        kff = pm8;
        while (v2 < k8) {
            int pm6;
            pm6 = *(int *)((v2 * 0x2c) + (char *)&g_8c41887c.f28);
            if (a0 == pm6) {
                int pm2;
                char *pm5;
                v16 = 0;
                pm2 = v2 * 0x2c;
                *(int *)((char *)&g_8c41887c.f28 + (pm2)) = a0;
                pm5 = (char *)&g_8c41887c.f1c + v2 * 0x2c;
                *(float *)(pm5) = f0;
                pm4 = v2 * 0x2c + (char *)&g_8c41887c.f20;
                *(float *)(pm4) = f1;
                *(int *)(v2 * 0x2c + (char *)&g_8c41887c.f24) |= 1;
                break;
            }
            if (*(int *)((char *)&g_8c41887c.f28 + (v2 * 0x2c)) == kff) {
                break;
            }
            v2++;
        }
        if (v16 != 0) {
            S_x45520 *pm9;
            pm4 = (char *)&g_8c41887c.f28;
            pm1 = pm4;
            *(int *)(pm1 + (v1 * 0x2c)) = a0;
            ((S_x72352 *)(v1 * 0x2c + (char *)&g_8c41887c.f1c))->f00 = f0;
            ((S_x75200 *)(v1 * 0x2c + (char *)&g_8c41887c.f20))->f00 = f1;
            pm9 = (S_x45520 *)((char *)&g_8c41887c.f24 + v1 * 0x2c);
            (pm9)->f00 |= 1;
            g_8c4189e0 = g_8c4189e0 + 1;
        }
    }
}
