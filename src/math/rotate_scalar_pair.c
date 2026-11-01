#define njCos_8c38c154 ((float (*)(int))0x8c38c154)
#define njSin_8c37eb0c ((float (*)(int))0x8c37eb0c)

/* Preserve both source values before either potentially aliased store. */
void rotate_scalar_pair(float *x, float *z, int angle) {
    float cosine = njCos_8c38c154(angle);
    float sine = njSin_8c37eb0c(angle);
    float first = *x;
    float second = *z;
    *z = cosine * second - sine * first;
    *x = sine * second + cosine * first;
}
