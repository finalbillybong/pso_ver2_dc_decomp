/* Matrix entry names and frame interpretation remain provisional. */
#define push_at ((void (*)(void))0x8c38ae68)
#define frame_at ((void (*)(void *))0x8c041de8)
#define pop_at ((void (*)(void))0x8c38ad10)
#define submit_at ((void (*)(void *))0x8c3843a8)

void submit_in_vector_frame(void *frame, void *object) {
    push_at();
    frame_at(frame);
    submit_at(object);
    pop_at();
}
