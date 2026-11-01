/* Matrix entry names and frame interpretation remain provisional. */
#define njPushMatrixEx_8c38ae68 ((void (*)(void))0x8c38ae68)
#define frame_at ((void (*)(void *))0x8c041de8)
#define njPopMatrixEx_8c38ad10 ((void (*)(void))0x8c38ad10)
#define submit_at ((void (*)(void *))0x8c3843a8)

void submit_in_vector_frame(void *frame, void *object) {
    njPushMatrixEx_8c38ae68();
    frame_at(frame);
    submit_at(object);
    njPopMatrixEx_8c38ad10();
}
