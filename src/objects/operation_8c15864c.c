typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
struct S_c8c03b55c {
    char unknown0[0x136];
    unsigned char f136;
};
extern S_c8c03b55c *call_8c03b55c(int, int);
extern void call_8c158698(unsigned char, int);
void operation_8c15864c(int a0)
{
    S_c8c03b55c *t1;
    if (a0 != 0) {
        t1 = call_8c03b55c((int)(a0 + 0xbcc), 6);
        if (t1 != 0) {
            call_8c158698(t1->f136, (int)(a0 + 0x3c));
            return;
        }
        call_8c158698(0, (int)(a0 + 0x3c));
    }
}
