typedef struct S_g8c418248 S_g8c418248;
typedef struct Arg1 Arg1;
struct Arg1 {
    unsigned short f00;
    unsigned short f02;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern int operation_8c025fcc(int, int);
extern void operation_8c026144(int, int, int, int, unsigned short, unsigned short);
void operation_8c197dc8(int a0, Arg1 *a1)
{
    int t1;
    int t2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    t2 = operation_8c025fcc(t1, 0);
    if (t2 == 0) {
        return;
    }
    if (a1->f00 == (unsigned short)*((unsigned char *)((char *)t2 + 4) + 4) && a1->f02 == (unsigned short)*((unsigned char *)((char *)((char *)t2 + 4) + 4) + 1)) {
        operation_8c026144(t1, 0, 0, 1, 0, 0);
    }
    if (a1->f00 == (unsigned short)*((unsigned char *)((char *)t2 + 4) + 12) && a1->f02 == (unsigned short)*((unsigned char *)((char *)((char *)t2 + 4) + 12) + 1)) {
        operation_8c026144(t1, 0, 0, 3, 0, 0);
    }
    if (a1->f00 == (unsigned short)*((unsigned char *)((char *)t2 + 4) + 8) && a1->f02 == (unsigned short)*((unsigned char *)((char *)((char *)t2 + 4) + 8) + 1)) {
        operation_8c026144(t1, 0, 0, 2, 0, 0);
    }
    if (a1->f00 == (unsigned short)*((unsigned char *)((char *)t2 + 0x14) + 4) && a1->f02 == (unsigned short)*((unsigned char *)((char *)((char *)t2 + 0x14) + 4) + 1)) {
        operation_8c026144(t1, 0, 1, 1, 0, 0);
    }
    if (a1->f00 == (unsigned short)*((unsigned char *)((char *)t2 + 0x14) + 12) && a1->f02 == (unsigned short)*((unsigned char *)((char *)((char *)t2 + 0x14) + 12) + 1)) {
        operation_8c026144(t1, 0, 1, 3, 0, 0);
    }
    if (a1->f00 == (unsigned short)*((unsigned char *)((char *)t2 + 0x14) + 8) && a1->f02 == (unsigned short)*((unsigned char *)((char *)((char *)t2 + 0x14) + 8) + 1)) {
        operation_8c026144(t1, 0, 1, 2, 0, 0);
    }
}
