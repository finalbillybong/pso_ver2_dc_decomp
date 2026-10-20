typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be0c S_g8c44be0c;
typedef struct S_vv5 S_vv5;
struct S_g8c44be0c {
    short f00;
    char unknown2[0x6];
    int f08;
};
struct S_vv5 {
    int f00;
    char unknown4[0x18];
    float f1c;
};
extern S_g8c44be0c *g_8c44be0c;
extern float squared_distance_xyz(void *, void *);
int operation_8c032a58(int a0)
{
    S_vv5 *v5;
    float v3;
    int v7;
    int v4;
    float t1;
    v7 = -1;
    if (g_8c44be0c == 0) {
        return v7;
    }
    v3 = 1000000000.0f;
    v4 = 0;
    v5 = (S_vv5 *)g_8c44be0c->f08;
    while (g_8c44be0c->f00 > v4) {
        if (v5->f00 >= 0) {
            t1 = squared_distance_xyz((void *)a0, (void *)((int)v5 + 4));
            if (!(t1 > v5->f1c * v5->f1c) && v3 > t1) {
                v7 = v5->f00;
                v3 = t1;
            }
        }
        v4++;
        v5 = (S_vv5 *)((char *)v5 + 60);
    }
    return v7;
}
