#ifndef PSO_FLOAT_CLASSIFY_H
#define PSO_FLOAT_CLASSIFY_H
/* IEEE single-precision representation used by the fixed SH4 target. */
typedef union FloatWord { float value; unsigned int bits; } FloatWord;
typedef char check_float_word_size[sizeof(FloatWord) == 4 ? 1 : -1];
typedef char check_float_size[sizeof(float) == 4 ? 1 : -1];
typedef char check_float_bits_size[sizeof(unsigned int) == 4 ? 1 : -1];
typedef char check_float_word_value[
    (unsigned long)&((FloatWord *)0)->value == 0 ? 1 : -1];
typedef char check_float_word_bits[
    (unsigned long)&((FloatWord *)0)->bits == 0 ? 1 : -1];

static inline int float_is_nonfinite(float value) {
    FloatWord word;
    unsigned int mask = 0x7f800000;
    word.value = value;
    return (mask & word.bits) == mask;
}
#endif
