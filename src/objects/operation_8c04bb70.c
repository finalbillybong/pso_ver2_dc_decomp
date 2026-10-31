typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467124 S_g8c467124;
typedef struct S_g8c467128 S_g8c467128;
extern S_g8c467124 *g_8c467124;
extern S_g8c467128 *g_8c467128;
extern int g_8c46712c;
extern unsigned char g_8c467134;
extern void call_8c38aa5c(int, int, void *);
extern void call_8c3827d8(void *);
extern void call_8c38b6f4(int, void *, int, int);
void operation_8c04bb70(void)
{
    if (((g_8c46712c & 2)) != 0) {
        call_8c38aa5c(0x80, 0x80, g_8c467128);
        g_8c46712c &= -3;
    }
    if (((g_8c46712c & 1)) != 0) {
        call_8c3827d8((void *)0x8c2f1bf0);
        call_8c38b6f4(0, g_8c467124, 0x40000000, 0);
        g_8c46712c = (unsigned int)g_8c46712c >> 1 << 1;
        g_8c467134++;
    }
}
