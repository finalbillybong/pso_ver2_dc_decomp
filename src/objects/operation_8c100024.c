typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
struct Object {
    Arg0_0 *tag;
    int f04;
    char unknown8[0x20];
    float f28;
    float f2c;
    float f30;
};
extern float g_8c285be4;
extern char g_8c470761;
extern void call_8c01c5f0(void *);
void operation_8c100024(Object *o)
{
    float v1;
    float v6;
    if (o->f04 != -1) {
        if (7 > o->f04) {
            call_8c01c5f0((void *)(o->tag));
            return;
        }
        if (9 > o->f04) {
            if ((o->f30 += o->f28) < (v1 = o->f2c)) {
                return;
            }
            o->f30 -= v1;
            return;
        }
        if (g_8c470761 == 0) {
            g_8c285be4 = o->f2c - 1.0f;
            g_8c470761 = 1;
        }
        if (!((o->f30 += o->f28) < (v6 = g_8c285be4))) {
            o->f30 = v6;
        }
    }
}
