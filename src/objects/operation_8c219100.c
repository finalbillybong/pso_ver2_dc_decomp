typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned char f00;
    unsigned char f01;
    char unknown2[0x2];
    unsigned char f04;
};
extern int operation_8c219e40(void);
extern int call_8c1c7ffc(Arg1 *);
void operation_8c219100(int a0, Arg1 *a1)
{
    int t1;
    int t2;
    t1 = operation_8c219e40();
    if (t1 == 1 && (a1->f00) == 0) {
        t2 = call_8c1c7ffc(a1);
        if (t2 != 0) {
            if (!((unsigned int)a1->f01 > (unsigned int)0xc)) {
                return;
            }
            a1->f04 |= 0x80;
            return;
        }
        if (a1->f04 != 0) {
            a1->f04 |= 0x80;
        }
    }
}
