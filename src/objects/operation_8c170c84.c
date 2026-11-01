typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_x42320 S_x42320;
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
struct S_x42320 {
    int f00;
};
extern int g_8c4db408;
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);
void quest_op_get_player_proximity_8c170c84(int a0, int a1)
{
    char *v2;
    char *v3;
    S_c8c021ef8 *t1;
    int v5;
    int v7;
    char *v6;
    float r;
    int off;
    int v1;
    S_c8c021ef8 *t2;
    float t3;
    v1 = (int)((unsigned char)a1 << 2);
    v2 = (char *)g_8c4db408;
    v3 = (char *)*(int *)((char *)((char *)v2 + 0x0) + ((unsigned char)a0 << 2));
    r = (float)*(int *)((char *)((char *)v2 + 0x0) + ((unsigned char)(a0 + 1) << 2));
    *(int *)((char *)((char *)v2 + 0x0) + (v1)) = 0;
    t1 = lookup_low_id((int)(v3));
    if (t1 != 0) {
        r *= r;
        v5 = (int)0;
        v6 = (char *)*(int *)((char *)t1 + 0x37c);
        off = 0x37c;
        while (0xc > v5) {
            if (v5 != (int)(v3)) {
                t2 = lookup_low_id(v5);
                if (t2 != 0) {
                    v7 = *(int *)((char *)t2 + off);
                    if (v7 == (int)(v6)) {
                        t3 = squared_distance_xyz((void *)(((char *)t1 + 0x3c)), (void *)(((char *)t2 + 0x3c)));
                        if (r > t3) {
                            ((S_x42320 *)(g_8c4db408 + v1))->f00 += 1;
                        }
                    }
                }
            }
            v5 = (int)(v5 + 1);
        }
    }
}
