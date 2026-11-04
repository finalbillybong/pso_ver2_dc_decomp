/* Static data 8c2e3258-8c2e33fc: record_table objects, in address order. */

typedef struct { const void *init; const void *frame; const void *exit; } GameMode;

extern void mode_sega_logo_init_8c1e653c(void);
extern void mode_sega_logo_frame_8c1e6690(void);
extern void mode_sega_logo_exit_8c1e679c(void);
extern void operation_8c1cbb20(void);
extern void mode_main_frame_8c1cbc88(void);
extern void mode_main_exit_8c1cbf08(void);
extern void operation_8c013688(void);
extern void operation_8c0136f0(void);
extern void operation_8c0e97a8(void);
extern void operation_8c0e97ac(void);
extern void operation_8c0e97b0(void);
extern void operation_8c0ed5c0(void);
extern void operation_8c0ed62c(void);
extern void operation_8c0ed6e0(void);
extern void mode_opening_movie_init_8c0e9930(void);
extern void operation_8c0e99c4(void);
extern void operation_8c0e9a88(void);
extern void operation_8c1cbc60(void);
extern void operation_8c0ed70c(void);
extern void operation_8c0ed758(void);
extern void operation_8c0ed80c(void);
extern void operation_8c1cbb70(void);
extern void operation_8c1cbb98(void);
extern void operation_8c1cbbc0(void);
extern void operation_8c1cbbe8(void);
extern void operation_8c0eaa6c(void);
extern void operation_8c0eaae8(void);
extern void operation_8c0eaba8(void);
extern void operation_8c0e7750(void);
extern void operation_8c0e790c(void);
extern void operation_8c0e7be8(void);
extern void initialize_scene_transition(void);
extern void dispatch_scene_transition(void);
extern void finish_scene_transition(void);
extern void mode_ending_init_8c0e9e0c(void);
extern void mode_ending_frame_8c0e9f68(void);
extern void mode_ending_exit_8c0ea014(void);
extern void mode_movie0_init_8c0c548c(void);
extern void mode_movie_frame_8c0c5508(void);
extern void operation_0c55b4(void);
extern void operation_8c17b8f8(void);
extern void operation_8c17b9ac(void);
extern void operation_8c17bae4(void);
extern void fn_8c0c55f8(void);
extern void operation_0c56b0(void);
extern void fn_8c0c56d8(void);
extern void operation_0c5750(void);
extern void operation_8c0c5774(void);
extern void operation_0c57ec(void);
extern void operation_8c0c5810(void);
extern void operation_0c5888(void);
extern void operation_8c0c58e4(void);
extern void operation_8c0c5954(void);
extern void operation_8c0c598c(void);
extern void reconstruct_8c0c5a08(void);
extern void operation_8c0c5a64(void);
extern void operation_8c0c5aa0(void);
extern void operation_8c0c5b38(void);
extern void mode_title_init_8c184138(void);
extern void mode_title_frame_8c184390(void);
extern void mode_title_exit_8c184498(void);
extern void operation_8c1cbb48(void);
extern void operation_8c03f494(void);
extern void operation_8c230308(void);
extern void operation_8c230418(void);
extern void operation_8c2304cc(void);
extern void operation_8c1e6a9c(void);
extern void operation_8c25c8f4(void);
extern void operation_8c25ca84(void);
extern void operation_8c25ca3c(void);
extern void operation_8c1cbc38(void);
extern void operation_8c1cbc10(void);

/* Game modes: 35 {init, frame, exit} function triples indexed by g_game_mode_state.current
   (0x8c41cb00) in game_main; mode 0 is empty. */
const GameMode g_game_mode_table_8c2e3258[35] = {
    { 0, 0, 0 },
    { (void *)mode_sega_logo_init_8c1e653c, (void *)mode_sega_logo_frame_8c1e6690, (void *)mode_sega_logo_exit_8c1e679c },
    { (void *)operation_8c1cbb20, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 },
    { (void *)operation_8c013688, (void *)mode_main_frame_8c1cbc88, (void *)operation_8c0136f0 },
    { (void *)operation_8c0e97a8, (void *)operation_8c0e97ac, (void *)operation_8c0e97b0 },
    { (void *)operation_8c0ed5c0, (void *)operation_8c0ed62c, (void *)operation_8c0ed6e0 },
    { (void *)mode_opening_movie_init_8c0e9930, (void *)operation_8c0e99c4, (void *)operation_8c0e9a88 },
    { (void *)operation_8c0e97a8, (void *)operation_8c0e97ac, (void *)operation_8c0e97b0 },
    { (void *)operation_8c1cbc60, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 },
    { (void *)operation_8c0ed70c, (void *)operation_8c0ed758, (void *)operation_8c0ed80c },
    { (void *)operation_8c1cbb70, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 },
    { (void *)operation_8c1cbb98, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 },
    { (void *)operation_8c1cbbc0, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 },
    { (void *)operation_8c1cbbe8, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 },
    { (void *)operation_8c0eaa6c, (void *)operation_8c0eaae8, (void *)operation_8c0eaba8 },
    { (void *)operation_8c0e7750, (void *)operation_8c0e790c, (void *)operation_8c0e7be8 },
    { (void *)initialize_scene_transition, (void *)dispatch_scene_transition, (void *)finish_scene_transition },
    { (void *)mode_ending_init_8c0e9e0c, (void *)mode_ending_frame_8c0e9f68, (void *)mode_ending_exit_8c0ea014 },
    { (void *)mode_movie0_init_8c0c548c, (void *)mode_movie_frame_8c0c5508, (void *)operation_0c55b4 },
    { (void *)operation_8c17b8f8, (void *)operation_8c17b9ac, (void *)operation_8c17bae4 },
    { (void *)fn_8c0c55f8, (void *)mode_movie_frame_8c0c5508, (void *)operation_0c56b0 },
    { (void *)fn_8c0c56d8, (void *)mode_movie_frame_8c0c5508, (void *)operation_0c5750 },
    { (void *)operation_8c0c5774, (void *)mode_movie_frame_8c0c5508, (void *)operation_0c57ec },
    { (void *)operation_8c0c5810, (void *)mode_movie_frame_8c0c5508, (void *)operation_0c5888 },
    { (void *)operation_8c0c58e4, (void *)mode_movie_frame_8c0c5508, (void *)operation_8c0c5954 },
    { (void *)operation_8c0c598c, (void *)mode_movie_frame_8c0c5508, (void *)reconstruct_8c0c5a08 },
    { (void *)operation_8c0c5a64, (void *)operation_8c0c5aa0, (void *)operation_8c0c5b38 },
    { (void *)mode_title_init_8c184138, (void *)mode_title_frame_8c184390, (void *)mode_title_exit_8c184498 },
    { (void *)operation_8c1cbb48, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 },
    { 0, (void *)operation_8c03f494, 0 },
    { (void *)operation_8c230308, (void *)operation_8c230418, (void *)operation_8c2304cc },
    { 0, (void *)operation_8c1e6a9c, 0 },
    { (void *)operation_8c25c8f4, (void *)operation_8c25ca84, (void *)operation_8c25ca3c },
    { (void *)operation_8c1cbc38, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 },
    { (void *)operation_8c1cbc10, (void *)mode_main_frame_8c1cbc88, (void *)mode_main_exit_8c1cbf08 }
};
