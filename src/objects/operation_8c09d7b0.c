typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46ec44 S_g8c46ec44;
typedef struct S_g8c46ed40 S_g8c46ed40;
typedef struct S_g8c46ed44 S_g8c46ed44;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern int g_8c44be04;
extern S_g8c46ec44 *g_8c46ec44;
extern short g_8c46ec4c;
extern S_g8c46ed40 *g_8c46ed40;
extern S_g8c46ed44 *g_8c46ed44;
extern void call_8c09d9f4(void);
extern void call_8c09db50(void);
extern void call_8c09dcc8(void *);
extern void call_8c09dea8(void *);
extern void call_8c09dad4(void *, void *);
extern void call_8c09d9a8(Object *, void *, void *);
void operation_8c09d7b0(Object *o)
{
    g_8c46ec44 = (S_g8c46ec44 *)(int)(g_8c44be04);
    if (((g_8c46ec4c & 1)) != 0) {
        call_8c09d9f4();
        call_8c09db50();
        call_8c09dcc8(g_8c46ec44);
        call_8c09dea8(g_8c46ec44);
    }
    if (((g_8c46ec4c & 8)) == 0) {
        call_8c09dad4(g_8c46ed40, g_8c46ed44);
        g_8c46ec4c |= 8;
    }
    if (((g_8c46ec4c & 0x10)) == 0) {
        call_8c09d9a8(o, g_8c46ed40, g_8c46ed44);
        g_8c46ec4c |= 0x10;
    }
    o->f20 = 1;
}
