#define cosine_at ((float (*)(int))0x8c38c154)
#define sine_at ((float (*)(int))0x8c37eb0c)

/* Preserve both source values before either potentially aliased store. */
void rotate_scalar_pair(float *x, float *z, int angle) {
    float cosine = cosine_at(angle);
    float sine = sine_at(angle);
    float first = *x;
    float second = *z;
    *z = cosine * second - sine * first;
    *x = sine * second + cosine * first;
}
