typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d51d4 S_g8c4d51d4;
extern int g_8c467a50;
extern int g_8c468800;
extern int g_8c4d5190;
extern int g_8c4d5194;
extern float g_8c4d5288;
extern int g_8c4d528c;
extern int g_8c4d52d4;
extern void call_8c060724(int);
extern void call_8c3507fe(void *, int);
extern void call_8c35049c(void *);
extern int call_8c3504ce(void *);
void operation_8c1002d0(void)
{
    float v6;
    int v10;
    int t1;
    int pm5;
    int pm4;
    if (g_8c4d52d4 == 0) {
        if (g_8c468800 != 0) {
            call_8c060724(-0x3e7);
        }
        if (g_8c4d528c > 0) {
            int v7;
            int v71;
            int v9;
            int v8;
            float *pm2;
            v7 = g_8c4d5194;
            pm4 = v7 << 2;
            pm2 = (float *)((char *)0x8c4d5280 + (pm4));
            v6 = g_8c4d5288;
            *pm2 += v6;
            v71 = (1 - v7);
            v8 = (-0x3e7);
            v9 = 0;
            pm4 = v71 << 2;
            *(float *)((char *)0x8c4d5280 + (v71 << 2)) = *(float *)((char *)0x8c4d5280 + (pm4)) - v6;
            while (2 > v9) {
                int pm3;
                int pm6;
                pm6 = v9 << 2;
                pm3 = pm6;
                pm5 = (int)(*(float *)((char *)0x8c4d5280 + (v9 << 2)));
                if (v8 < (pm5 + g_8c467a50)) {
                    v6 = *(float *)((v9 << 2) + (char *)0x8c4d5280);
                    v10 = (g_8c467a50 + (int)v6);
                } else {
                    v10 = (int)v8;
                }
                call_8c3507fe((void *)(*(S_g8c4d51d4 **)((char *)0x8c4d51d4 + (pm3))), v10);
                v71 = 1 + v9;
                v9 = (v71);
            }
            if (!(--g_8c4d528c > 0)) {
                call_8c35049c((void *)(*(S_g8c4d51d4 **)((char *)0x8c4d51d4 + (1 - g_8c4d5194 << 2))));
                t1 = call_8c3504ce((void *)(*(S_g8c4d51d4 **)((char *)0x8c4d51d4 + (g_8c4d5194 << 2))));
                if (t1 != 0 && t1 != 5) {
                    return;
                }
                g_8c4d5190 = 0;
            }
        }
    }
}
