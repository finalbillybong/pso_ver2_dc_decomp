typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b60 S_g8c4d9b60;
typedef struct S_g8c4d9b60_42c S_g8c4d9b60_42c;
typedef struct S_g8c4dab0c S_g8c4dab0c;
struct S_g8c4d9b60 {
    char unknown0[0x42c];
    S_g8c4d9b60_42c *f42c;
};
struct S_g8c4d9b60_42c {
    char unknown0[0x128];
    int f128;
};
extern S_g8c4d9b60 *g_8c4d9b60;
extern int g_8c4dab00;
extern int g_8c4dab04;
extern int g_8c4dab08;
extern S_g8c4dab0c *g_8c4dab0c;
extern int call_8c011ecc(int);
extern void initialize_vector_array(void *, void *);
extern int record24_8c17948c(int);
extern int record30_8c1794c8(int);
void operation_8c159e60(void)
{
    int t1;
    int t2;
    int t3;
    g_8c4dab0c = (S_g8c4dab0c *)(int)(g_8c4d9b60->f42c->f128);
    t1 = call_8c011ecc(0xc);
    if (t1 != 0) {
        initialize_vector_array((void *)t1, g_8c4dab0c);
    }
    g_8c4dab08 = (int)(t1);
    t2 = record24_8c17948c(0x26);
    g_8c4dab00 = (int)(t2);
    t3 = record30_8c1794c8(0x26);
    g_8c4dab04 = (int)(t3);
}
