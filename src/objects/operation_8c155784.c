typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct S_g8c4db380_42c_8 S_g8c4db380_42c_8;
typedef struct S_g8c4db380_42c_8_2c S_g8c4db380_42c_8_2c;
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
};
struct S_g8c4db380_42c {
    char unknown0[0x8];
    S_g8c4db380_42c_8 *f08;
};
struct S_g8c4db380_42c_8 {
    char unknown0[0x2c];
    S_g8c4db380_42c_8_2c *f2c;
};
extern int g_8c4daa40;
extern S_g8c4db380 *g_8c4db380;
extern int call_8c011ecc(int);
extern void call_8c0cd588(int, void *, int);
void operation_8c155784(void)
{
    int t1;
    t1 = call_8c011ecc(0x14);
    if (t1 != 0) {
        call_8c0cd588(t1, (void *)(g_8c4db380->f42c->f08->f2c), 0);
    }
    g_8c4daa40 = (int)(t1);
}
