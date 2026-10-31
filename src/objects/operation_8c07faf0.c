typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
struct S_c8c03b55c {
    char unknown0[0x138];
    unsigned char f138;
    char unknown139[0xab];
    short f1e4;
    short f1e6;
    short f1e8;
    short f1ea;
    short f1ec;
    short f1ee;
};
extern S_c8c03b55c *operation_8c03b55c(void *, int);
extern int call_8c18e768(int, int);
int operation_8c07faf0(int a0, int a1)
{
    S_c8c03b55c *t1;
    int v1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    if (a0 == 0) {
    } else {
        t1 = operation_8c03b55c((void *)(a0 + 0xbcc), 1);
        if (t1 == 0) {
        } else {
            switch (a1) {
            case 0:
                if (!((unsigned int)t1->f138 >= (unsigned int)0x64)) {
                    break;
                }
                return 1;
            case 1:
                if (!((unsigned int)t1->f138 >= (unsigned int)0x64)) {
                    break;
                }
                return 1;
            case 2:
                v1 = (int)0;
                t2 = call_8c18e768((int)(t1->f1e8), 0x64);
                if ((short)t2 >= 0x46) {
                    v1 = (int)(v1 + 1);
                }
                t3 = call_8c18e768((int)(t1->f1ea), 0x64);
                if ((short)t3 >= 0x46) {
                    v1 = (int)(v1 + 1);
                }
                t4 = call_8c18e768((int)(t1->f1ec), 0x64);
                if ((short)t4 >= 0x46) {
                    v1 = (int)(v1 + 1);
                }
                t5 = call_8c18e768((int)(t1->f1ee), 0x64);
                if ((short)t5 >= 0x46) {
                    v1 = (int)(v1 + 1);
                }
                if (!(v1 >= 2)) {
                    break;
                }
                return 1;
            case 3:
                if (!((unsigned int)t1->f138 >= (unsigned int)0x64)) {
                    break;
                }
                return 1;
            case 4:
                if (!((unsigned int)t1->f138 >= (unsigned int)0x78)) {
                    break;
                }
                if (!(t1->f1e4 >= 0xb4)) {
                    break;
                }
                if (!(t1->f1e6 >= 0x6e)) {
                    break;
                }
                return 1;
            case 5:
                t6 = call_8c18e768((int)(t1->f1e8), 0x64);
                if (!((short)t6 >= 0x23)) {
                    break;
                }
                t7 = call_8c18e768((int)(t1->f1ea), 0x64);
                if (!((short)t7 >= 0x23)) {
                    break;
                }
                t8 = call_8c18e768((int)(t1->f1ec), 0x64);
                if (!((short)t8 >= 0x23)) {
                    break;
                }
                t9 = call_8c18e768((int)(t1->f1ee), 0x64);
                if (!((short)t9 >= 0x23)) {
                    break;
                }
                return 1;
            }
        }
    }
    return 0;
}
