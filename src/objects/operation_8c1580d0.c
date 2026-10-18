typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct Entry Entry;
struct Entry {
    int f00;
    int f04;
};
struct S_g8c4daaa4 {
    char unknown0[0x8];
    Entry *f08;
};
int operation_8c1580d0(int a0, int a1)
{
    Entry *v1;
    if (a0 > 0 && 3 > a0) {
        v1 = (Entry *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f08 + (a0 + -1 << 3));
        return v1->f00 > a1 ? v1->f04 + a1 * 0x18 : v1->f04 + v1->f00 * 0x18;
    }
    return 0;
}
