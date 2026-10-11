typedef struct Extra { short base; short values[5]; char unknownc[0x10]; int offset; } Extra;
void compose_layout_8c03bb80(short *out, int unused, short *a, short *b, Extra *extra)
{
    out[0] = a[0] + b[1];
    out[1] = a[4] + extra->offset;
    out[2] = a[1];
    out[3] = (a[5] + b[2]) * 0.1f;
    out[4] = a[2] + extra->base;
    out[5] = a[6];
    out[6] = extra->values[0];
    out[7] = extra->values[1];
    out[8] = extra->values[2];
    out[9] = extra->values[3];
    out[10] = extra->values[4];
}
