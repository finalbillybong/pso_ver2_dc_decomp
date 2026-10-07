#ifndef PSO_ANGLE_SAMPLE_RECORD_H
#define PSO_ANGLE_SAMPLE_RECORD_H
/* Provisional sample view and 12-byte record from 0x8c01e5c0..0x8c01e648.
 * The sample view covers accessed fields, not a known complete object. */
typedef struct AngleSampleView {
    unsigned char unknown00[24];
    int angle;
    float magnitude;
} AngleSampleView;
typedef struct AngleSampleRecord {
    int last_angle, last_tick;
    AngleSampleView *sample;
} AngleSampleRecord;
typedef char check_angle_sample_view_size[sizeof(AngleSampleView)==32?1:-1];
typedef char check_angle_sample_record_size[sizeof(AngleSampleRecord)==12?1:-1];
typedef char check_AngleSampleView_angle[((unsigned long)&((AngleSampleView *)0)->angle)==24?1:-1];
typedef char check_AngleSampleView_magnitude[((unsigned long)&((AngleSampleView *)0)->magnitude)==28?1:-1];
typedef char check_AngleSampleRecord_last_angle[((unsigned long)&((AngleSampleRecord *)0)->last_angle)==0?1:-1];
typedef char check_AngleSampleRecord_last_tick[((unsigned long)&((AngleSampleRecord *)0)->last_tick)==4?1:-1];
typedef char check_AngleSampleRecord_sample[((unsigned long)&((AngleSampleRecord *)0)->sample)==8?1:-1];
#endif
