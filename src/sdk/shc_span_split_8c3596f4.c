typedef struct { int pos; int len; } Span;

void span_split_8c3596f4(Span *in, int max, Span *head, Span *tail)
{
    *head = *in;
    tail->len = head->len;
    if (head->len > max) {
        head->len = max;
    }
    tail->len -= head->len;
    if (tail->len == 0) {
        tail->pos = 0;
    } else {
        tail->pos = head->pos + head->len;
    }
}
