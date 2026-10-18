typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct Entry Entry;
typedef struct S_vv1 S_vv1;
struct S_g8c4daaa4 {
    char unknown0[0x4];
    S_vv1 *f04;
};
struct Entry {
    int f00;
    int f04;
};
struct S_vv1 {
    char unknown0[0x44c];
    int f44c;
};
int operation_8c15816c(int a0, int a1)
{
    S_vv1 *v1;
    Entry *v2;
    if (a0 > 0) {
        v1 = (*(S_g8c4daaa4 **)0x8c4daaa4)->f04;
        if (0x89 > a0) {
            v2 = (Entry *)((char *)v1 + (a0 << 3));
            if (v2->f00 > a1) {
                return v2->f04 + a1 * 0x18;
            }
        }
        return (int)(v1->f44c);
    }
    return 0;
}
