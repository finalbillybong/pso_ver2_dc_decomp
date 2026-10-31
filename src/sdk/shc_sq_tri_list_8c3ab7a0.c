/* Indexed triangle list output through the store queues (Hitachi SHC; _builtin_prefetch flushes each 32-byte block). */
void _builtin_prefetch(void *);
extern int c_8c5755a0;
extern int c_8c57559c;
extern unsigned int *func_8c37b038(unsigned int *);

unsigned int *sq_tri_list_8c3ab7a0(short *idx, float *verts, unsigned int n, unsigned int *p)
{
    register int skip;
    register float *a;
    register float *b;
    register float *c;
    register float x;
    register float y;
    register float z;

    _builtin_prefetch(idx + 3);
    skip = n >> 14 & 3;
    n &= 0x3fff;
    c_8c5755a0 += n * 3;
    c_8c57559c += n * 3;
    do {
        a = verts + *idx++ * 4;
        _builtin_prefetch(a);
        *p = 0xf0000000;
        p += 4;
        b = verts + *idx++ * 4;
        c = verts + *idx++ * 4;
        _builtin_prefetch(b);
        x = *a++; y = *a++; z = *a;
        *(float *)--p = z; *(float *)--p = y; *(float *)--p = x;
        p += 6;
        _builtin_prefetch(c);
        x = *b++; y = *b++; z = *b;
        *(float *)--p = z; *(float *)--p = y; *(float *)--p = x;
        x = *c++;
        p += 4;
        *(float *)--p = x;
        _builtin_prefetch(p);
        y = *c++; z = *c;
        p += 3;
        *(float *)--p = z; *(float *)--p = y;
        _builtin_prefetch(p);
        p += 8;
        idx += skip;
        if (n == 2) p = func_8c37b038(p);
        _builtin_prefetch(idx + 3);
    } while (--n);
    return p;
}
