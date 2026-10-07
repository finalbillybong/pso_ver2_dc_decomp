#define delta_at ((int (*)(int, int))0x8c0c52e4)
#define step_at ((int (*)(int, int, int))0x8c0c4f90)

/* Preserve the observed signed products and final signed 16-bit wrapping. */
int step_clamped_angle_velocity(int orientation, int velocity, int desired,
                                int step, int limit) {
    desired = delta_at(orientation, desired);
    if (desired > limit) desired = limit;
    else if (desired < -limit) desired = -limit;
    if (velocity * desired >= 0) velocity = step_at(velocity, desired, step);
    else {
        if (velocity * delta_at(velocity, desired) >= 0) {
            if (velocity >= 0) velocity -= step;
            else velocity += step;
        } else velocity = step_at(velocity, desired, step);
    }
    return (short)velocity;
}
