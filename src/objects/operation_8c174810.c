typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct S_g8c4db380_42c_b8 S_g8c4db380_42c_b8;
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
};
struct S_g8c4db380_42c {
    char unknown0[0xb8];
    S_g8c4db380_42c_b8 *fb8;
};
extern S_g8c4db380 *g_8c4db380;
extern int g_8c4db660;
extern int call_8c011ecc(int);
extern void call_8c0cd588(int, void *, int);
void operation_8c174810(void)
{
    int t1;
    t1 = call_8c011ecc(0x14);
    if (t1 != 0) {
        call_8c0cd588(t1, (void *)(g_8c4db380->f42c->fb8), 1);
    }
    g_8c4db660 = (int)(t1);
}
