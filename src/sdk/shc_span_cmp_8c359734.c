typedef struct { unsigned int pos; unsigned int len; } Span;

int span_eq_8c359734(Span *a, Span *b)
{
    int r;
    if (a->pos == b->pos && a->len == b->len) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

int span_eq2_8c35974e(Span *a, Span *b)
{
    int r;
    if (a->pos == b->pos && a->len == b->len) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}

int span_le_8c359768(Span *a, Span *b)
{
    int r;
    if (a->pos == b->pos) {
        if (a->len <= b->len) {
            goto yes;
        }
        goto no;
    }
    if (a->pos > b->pos) {
        goto no;
    }
yes:
    r = 1;
    goto out;
no:
    r = 0;
out:
    return r;
}
