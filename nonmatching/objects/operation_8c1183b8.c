/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1183b8
 * function: operation_8c1183b8
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 206 of 141 reference instruction lines
 * differing bytes: 256
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills, instruction or operand
 *   order; review found and fixed behaviour defects of the generator draft; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object {
    char unknown0[0x5d0];
    float f5d0;
    float f5d4;
    float f5d8;
    float f5dc;
} Object;
typedef struct Vertex {
    float x;
    float y;
    float z;
    int c;
} Vertex;
typedef struct Frame {
    Vector3 dir;
    Vertex v[4];
} Frame;
extern float normalize_xz_checked(Vector3 *);
extern void call_8c38d81c(Vertex *, int, int);
void operation_8c1183b8(Object *o, int a1, int a2, int a3, float f0, float f1)
{
    Frame frame;
    float a;
    float step;
    float x1;
    float c;
    float d;
    float y1;
    float y2;
    float x2;
    float mx;
    float my;
    float h;
    float k;
    float u;
    float w;
    float q;
    float z;
    a = o->f5d0;
    step = (o->f5d4 - a) / 128.0f;
    c = o->f5dc;
    d = c - o->f5d8;
    x1 = (float)a1 * step + a;
    x2 = (float)a2 * step + a;
    mx = x1 + x2;
    frame.dir.z = x2 - x1;
    y1 = c - f0 * d;
    y2 = c - f1 * d;
    my = y1 + y2;
    mx *= 0.5f;
    my *= 0.5f;
    frame.dir.y = 0.0f;
    frame.dir.x = y2 - y1;
    h = normalize_xz_checked(&frame.dir) * 0.5f;
    step = frame.dir.z;
    a = frame.dir.x;
    k = a * 0.5f;
    u = step * h - k;
    frame.v[0].x = mx + u;
    w = a * h + step * 0.5f;
    frame.v[0].y = my + w;
    q = -a * h + step * 0.5f;
    z = -step * h - k;
    frame.v[0].z = 1.11f;
    frame.v[0].c = a3;
    frame.v[1].x = mx + z;
    frame.v[1].y = my + q;
    frame.v[1].z = 1.11f;
    frame.v[1].c = a3;
    frame.v[2].x = mx - z;
    frame.v[2].y = my - q;
    frame.v[2].z = 1.11f;
    frame.v[2].c = a3;
    frame.v[3].x = mx - u;
    frame.v[3].y = my - w;
    frame.v[3].z = 1.11f;
    frame.v[3].c = a3;
    call_8c38d81c(frame.v, 4, 0);
}
