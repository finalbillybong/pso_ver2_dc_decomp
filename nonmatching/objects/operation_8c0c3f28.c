/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c3f28
 * function: operation_8c0c3f28
 * language: c
 * reference size: 464 bytes
 * compiled size: 464 bytes (+0.0%)
 * differing lines: 252 of 209 reference instruction lines
 * differing bytes: 365
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Key {
    int time;
    Vector3 p;
} Key;
typedef struct Div {
    float d[2];
} Div;
extern Div g_8c305fc4;
extern int find_track_key(void *, unsigned int, unsigned int, unsigned int);
extern int call_8c18e954(int, int);
void operation_8c0c3f28(Key *o, int n, Vector3 *out, float t)
{
    Div div;
    Key *k0;
    Key *k1;
    Key *k2;
    Key *k3;
    int k;
    int ta;
    int tb;
    float s;
    float s2;
    float s3;
    float c0;
    float c1;
    float c2;
    float c3;
    div = g_8c305fc4;
    k = find_track_key(o, 0x10, n, (unsigned int)t);
    k0 = (Key *)((char *)o + (call_8c18e954(k + n - 1, n) << 4));
    k1 = (Key *)((char *)o + (k << 4));
    k2 = (Key *)((char *)o + (call_8c18e954(k + 1, n) << 4));
    k3 = (Key *)((char *)o + (call_8c18e954(k + 2, n) << 4));
    ta = k1->time;
    tb = k2->time;
    div.d[1] = (float)(unsigned int)(tb - ta);
    s = (t - (float)(unsigned int)ta) / *(float *)((char *)&div + ((tb - ta > 0) << 2));
    s2 = s * s;
    s3 = s2 * s;
    c1 = s3 * 1.5f - s2 * 2.5f + 1.0f;
    c0 = (-s3 + s2 * 2.0f - s) * 0.5f;
    c2 = s3 * -1.5f + s2 * 2.0f + s * 0.5f;
    c3 = (s3 - s2) * 0.5f;
    out->x = c0 * k0->p.x + c1 * k1->p.x + c2 * k2->p.x + c3 * k3->p.x;
    out->y = c0 * k0->p.y + c1 * k1->p.y + c2 * k2->p.y + c3 * k3->p.y;
    out->z = c0 * k0->p.z + c1 * k1->p.z + c2 * k2->p.z + c3 * k3->p.z;
}
