/* Keep the observed signed quotient call; this runtime entry remains reference
 * backed. Names and angle interpretation are provisional. */
#define quotient_at ((int (*)(int, int))0x8c18e768)
#define njSin_8c37eb0c ((float (*)(int))0x8c37eb0c)

float scale_by_half_angle(int angle, float value) {
    float sine = njSin_8c37eb0c(quotient_at(angle, 2));
    return value * 0.5f / sine;
}
