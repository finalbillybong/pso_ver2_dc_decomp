typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct S_g8c4db380_42c_a8 S_g8c4db380_42c_a8;
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
};
struct S_g8c4db380_42c {
    char unknown0[0xa8];
    S_g8c4db380_42c_a8 *fa8;
};
extern S_g8c4db380 *g_8c4db380;
extern int g_8c4db900;
extern int call_8c011ecc(int);
extern void call_8c0cd588(int, void *, int);
void operation_8c178900(void)
{
    int t1;
    t1 = call_8c011ecc(0x14);
    if (t1 != 0) {
        call_8c0cd588(t1, (void *)(g_8c4db380->f42c->fa8), 1);
    }
    g_8c4db900 = (int)(t1);
}
