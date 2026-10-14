typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct S_g8c4db380_42c_98 S_g8c4db380_42c_98;
typedef struct S_g8c4db380_42c_98_2c S_g8c4db380_42c_98_2c;
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
};
struct S_g8c4db380_42c {
    char unknown0[0x98];
    S_g8c4db380_42c_98 *f98;
};
struct S_g8c4db380_42c_98 {
    char unknown0[0x2c];
    S_g8c4db380_42c_98_2c *f2c;
};
extern int call_8c011ecc(int);
extern void call_8c0cd588(int, void *, int);
void operation_8c1647bc(void)
{
    int t1;
    t1 = call_8c011ecc(0x14);
    if (t1 != 0) {
        call_8c0cd588(t1, (void *)((*(S_g8c4db380 **)0x8c4db380)->f42c->f98->f2c), 0);
    }
    *(int *)0x8c4db280 = (int)(t1);
}
