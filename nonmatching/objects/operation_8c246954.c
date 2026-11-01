/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c246954
 * function: operation_8c246954
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 52 of 208 reference instruction lines
 * differing bytes: 80
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Spawn {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
} Spawn;
typedef struct Frame {
    Vector3 pos;
    Spawn spawn;
} Frame;
typedef struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x1fc];
    int f264;
} Object;
typedef struct Weights {
    float count[4];
    float kind[6];
} Weights;
extern Weights g_8c33af20;
extern Spawn g_8c33af48[];
extern int g_8c418248;
extern int rand(void);
extern int lookup_low_id(int);
extern int call_8c18e768(int, int);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern int operation_8c051ff4(Object *, Frame *, void *);
extern void operation_8c073b24(Spawn *, int, Frame *);
void operation_8c246954(Object *o)
{
    Frame frame;
    float r;
    float sum;
    float *p;
    int n;
    int i;
    int live;
    int m1;
    int angle;
    int done;
    int k;
    int a;
    int b;
    int step;
    int lim;
    o->f264 = 1;
    n = 0;
    r = (float)rand() / 32768.0f;
    p = g_8c33af20.count;
    sum = *p;
    for (a = 1; a <= 4; a++) {
        if (sum != 0.0f && !(r > sum)) {
            n = a;
            break;
        }
        sum += *++p;
    }
    if (n == 0) {
        return;
    }
    live = 0;
    for (i = 0; i < 4; i++) {
        if (lookup_low_id(i) != 0) {
            live++;
        }
    }
    if (n > live) {
        n = live;
    }
    live = -1;
    r = (float)rand() / 32768.0f;
    p = g_8c33af20.kind;
    sum = *p;
    for (b = 0; b < 6; b++) {
        if (sum != 0.0f && !(r > sum)) {
            live = b;
            break;
        }
        sum += *++p;
    }
    if (live == -1) {
        return;
    }
    m1 = -1;
    angle = o->f64 - call_8c18e768(n + m1 << 13, 2);
    frame.spawn = g_8c33af48[live];
    done = 0;
    step = 0x2000;
    lim = 0x10000;
    for (k = 0; k < lim; k += step) {
        frame.pos = o->f3c;
        frame.pos.x += njCos_8c38c154(angle) * 7.5f;
        frame.pos.z += njSin_8c37eb0c(angle) * 7.5f;
        frame.pos.y += 10.0f;
        if (operation_8c051ff4(o, &frame, 0) != 0) {
            frame.pos.y += 10.0f;
            frame.spawn.f0c = -1;
            operation_8c073b24(&frame.spawn, g_8c418248, &frame);
            if (++done >= n) {
                return;
            }
        }
        angle += step;
    }
}
