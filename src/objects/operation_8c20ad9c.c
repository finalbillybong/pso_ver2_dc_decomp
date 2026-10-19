typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c5051e4 S_g8c5051e4;
typedef struct S_g8c5051e8 S_g8c5051e8;
typedef struct S_g8c5051ec S_g8c5051ec;
typedef struct S_g8c5051f0 S_g8c5051f0;
typedef struct S_g8c5051f4 S_g8c5051f4;
typedef struct S_g8c5051f8 S_g8c5051f8;
typedef struct S_g8c505228 S_g8c505228;
typedef struct S_g8c50522c S_g8c50522c;
typedef struct S_g8c505230 S_g8c505230;
typedef struct S_g8c505234 S_g8c505234;
typedef struct S_g8c505238 S_g8c505238;
extern S_g8c5051e4 *g_8c5051e4;
extern S_g8c5051e8 *g_8c5051e8;
extern S_g8c5051ec *g_8c5051ec;
extern S_g8c5051f0 *g_8c5051f0;
extern S_g8c5051f4 *g_8c5051f4;
extern S_g8c5051f8 *g_8c5051f8;
extern S_g8c505228 *g_8c505228;
extern S_g8c50522c *g_8c50522c;
extern S_g8c505230 *g_8c505230;
extern S_g8c505234 *g_8c505234;
extern S_g8c505238 *g_8c505238;
extern void call_8c18de08(void *);
extern void operation_8c105320(int);
void operation_8c20ad9c(void)
{
    if (g_8c5051f4 != 0) {
        call_8c18de08(g_8c5051f4);
        g_8c5051f4 = (S_g8c5051f4 *)0;
    }
    if (g_8c5051f8 != 0) {
        call_8c18de08(g_8c5051f8);
        g_8c5051f8 = (S_g8c5051f8 *)0;
    }
    if (g_8c5051f0 != 0) {
        call_8c18de08(g_8c5051f0);
        g_8c5051f0 = (S_g8c5051f0 *)0;
    }
    if (g_8c5051ec != 0) {
        call_8c18de08(g_8c5051ec);
        g_8c5051ec = (S_g8c5051ec *)0;
    }
    if (g_8c5051e8 != 0) {
        call_8c18de08(g_8c5051e8);
        g_8c5051e8 = (S_g8c5051e8 *)0;
    }
    if (g_8c5051e4 != 0) {
        call_8c18de08(g_8c5051e4);
        g_8c5051e4 = (S_g8c5051e4 *)0;
    }
    if (g_8c505238 != 0) {
        operation_8c105320((int)g_8c505238);
        g_8c505238 = (S_g8c505238 *)0;
    }
    if (g_8c505234 != 0) {
        operation_8c105320((int)g_8c505234);
        g_8c505234 = (S_g8c505234 *)0;
    }
    if (g_8c505230 != 0) {
        operation_8c105320((int)g_8c505230);
        g_8c505230 = (S_g8c505230 *)0;
    }
    if (g_8c50522c != 0) {
        operation_8c105320((int)g_8c50522c);
        g_8c50522c = (S_g8c50522c *)0;
    }
    if (g_8c505228 != 0) {
        operation_8c105320((int)g_8c505228);
        g_8c505228 = (S_g8c505228 *)0;
    }
}
