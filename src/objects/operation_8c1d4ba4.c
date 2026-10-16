typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_c8c03b55c_e8 S_c8c03b55c_e8;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct S_g8c418248 S_g8c418248;
struct S_c8c0744dc {
    char unknown0[0xec];
    int fec;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    S_c8c03b55c_e8 *fe8;
};
extern int lookup_low_id(int);
extern S_c8c03b55c *call_8c03b55c(int, int);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern void call_8c022538(int, int);
extern void call_8c02231c(int, int, int);
void operation_8c1d4ba4(int a0, int a1)
{
    S_c8c03b55c *t2;
    int t1;
    S_c8c0744dc *t3;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = call_8c03b55c((int)(t1 + 0xbcc), a0);
        t3 = find_record_8c0744dc(a1);
        if (t2 == (void *)t3) {
            call_8c022538(t1, a1);
            return;
        }
        if (((t3->fec & 8)) != 0) {
            call_8c022538(t1, a1);
        }
        if (t2 != 0) {
            call_8c022538(t1, (int)(t2->fe8));
        }
        call_8c02231c(t1, a1, a0);
    }
}
