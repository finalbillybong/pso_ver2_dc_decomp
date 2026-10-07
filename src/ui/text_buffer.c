#include "src/include/text_buffer.h"

/* The stack length parameter stays in a register before stores through p. */
void initialize_text_buffer(TextBuffer *p, signed char *buffer, int a, int b,
                            register int length) {
    signed char *cursor;
    p->buffer = buffer;
    p->field04 = a;
    p->field08 = b;
    p->length = length;
    p->field10 = 0;
    p->field14 = 0;
    for (cursor = buffer + length - 1; cursor >= buffer; cursor--) {
        if (*cursor) break;
        *cursor = ' ';
    }
}

extern unsigned char key_state[];
extern const char format_base[];
static inline int key_at(unsigned char key, signed char disabled) {
    int i;
    if (disabled) return 0;
    {
        unsigned char *keys = key_state + 8;
        int limit;
        for (i = 0, limit = 6; i < limit; i++)
            if (keys[i] == key) return key;
        return 0;
    }
}
#define character_at ((int (*)(void))0x8c01e1f4)
extern void color_at(unsigned int);
extern void text_at(unsigned int, const char *, ...);

int update_text_buffer(TextBuffer *p) {
    signed char disabled = *(signed char *)0x8c41cd04;
    if (key_at(80, disabled)) p->field10--;
    else if (key_at(79, disabled)) p->field10++;
    else if (key_at(42, disabled)) {
        if (p->field10 > 0) {
            int i;
            p->field10--;
            {
                int minus_one = -1;
                for (i = p->field10; i < p->length + minus_one; i++) {
                    register signed char *next = p->buffer + 1;
                    p->buffer[i] = next[i];
                }
            }
            {
                register signed char *last = p->buffer - 1;
                last[p->length] = ' ';
            }
        }
    } else if (key_at(76, disabled)) {
        int i;
        {
            int minus_one = -1;
            for (i = p->field10; i < p->length + minus_one; i++) {
                register signed char *next = p->buffer + 1;
                p->buffer[i] = next[i];
            }
        }
        {
            register signed char *last = p->buffer - 1;
            last[p->length] = ' ';
        }
    } else {
        int c = character_at();
        if (c >= 32) {
            int i;
            /* Preserve the original inclusive shift and terminator storage. */
            for (i = p->length - 1; i >= p->field10; i--) {
                register signed char *next = p->buffer + 1;
                next[i] = p->buffer[i];
            }
            p->buffer[p->field10] = c;
            p->field10++;
        } else switch (c) {
            case 13: {
                int i, j;
                int length = p->length;
                for (i = 0; i < length; i++)
                    if (p->buffer[i] <= 32) break;
                for (j = i; j < p->length; j++) p->buffer[j] = 0;
                return i;
            }
            case 27: return 0;
            default: break;
        }
    }
    p->field10 = p->field10 < 0 ? 0 :
        (p->field10 < p->length - 1 ? p->field10 : p->length - 1);
    p->buffer[p->length] = 0;
    color_at(0xfff0f0f0);
    text_at((p->field04 << 16) | p->field08, format_base, p->buffer);
    {
        signed char c = p->buffer[p->field10];
        if (c == ' ') {
            color_at(0xfff0f0f0);
            text_at(((p->field04 + p->field10 + 1) << 16) | p->field08,
                    format_base + 4, '_');
        } else {
            color_at(0xff00ffff);
            text_at(((p->field04 + p->field10 + 1) << 16) | p->field08,
                    format_base + 4, c);
        }
    }
    color_at(0xfff0f0f0);
    return -1;
}
