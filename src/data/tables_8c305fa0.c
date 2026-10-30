/* Static data 8c305fa0-8c305fd0: float_table, function_table objects, in address order. */

typedef void (*Function)(void);

extern void fn_8c0c3d54(void);
extern void fn_8c0c3f28(void);
extern void fn_8c0c3dd0(void);
extern void interpolate_track_angles(void);
extern void interpolate_track_angle(void);

Function const d_8c305fa0[3] = {
    fn_8c0c3d54,
    fn_8c0c3f28,
    fn_8c0c3dd0
};

Function const d_8c305fac[3] = {
    interpolate_track_angles,
    interpolate_track_angles,
    interpolate_track_angles
};

Function const d_8c305fb8[3] = {
    interpolate_track_angle,
    interpolate_track_angle,
    interpolate_track_angle
};

const float d_8c305fc4[3] = {
    1.0f, 1.0f, 0.0f
};
