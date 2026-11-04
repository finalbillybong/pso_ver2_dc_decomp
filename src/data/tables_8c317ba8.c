/* Static data 8c317ba8-8c318ba8: record_table objects, in address order. */

typedef struct { const void *decode_args; const void *handler; } QuestOpcode;

extern void quest_args_none_8c16c314(void);
extern void quest_op_nop_8c16ca58(void);
extern void quest_op_ret_8c16ca5c(void);
extern void quest_op_sync_8c16ca98(void);
extern void operation_8c16c3ec(void);
extern void quest_op_exit_8c16ca8c(void);
extern void operation_8c16c5a0(void);
extern void quest_op_thread_8c16caa4(void);
extern void operation_8c16c354(void);
extern void quest_op_let_8c16cabc(void);
extern void operation_8c16c394(void);
extern void quest_op_leti_8c16cad4(void);
extern void operation_8c16c5ec(void);
extern void quest_op_leta_8c16cae4(void);
extern void operation_8c16c328(void);
extern void quest_op_set_8c16cafc(void);
extern void quest_op_clear_8c16cb10(void);
extern void quest_op_rev_8c16cb24(void);
extern void operation_8c16c9b4(void);
extern void quest_op_gset_8c16cb3c(void);
extern void quest_op_gclear_8c16cb48(void);
extern void quest_op_grev_8c16cb54(void);
extern void operation_8c16ca00(void);
extern void quest_op_glet_8c16cb88(void);
extern void quest_op_gget_8c16cbbc(void);
extern void quest_op_add_8c16cbf4(void);
extern void quest_op_addi_8c16cc14(void);
extern void quest_op_sub_8c16cc2c(void);
extern void quest_op_subi_8c16cc4c(void);
extern void quest_op_mul_8c16cc64(void);
extern void quest_op_muli_8c16cc84(void);
extern void quest_op_div_8c16cc9c(void);
extern void quest_op_divi_8c16ccc8(void);
extern void quest_op_and_8c16ccec(void);
extern void quest_op_andi_8c16cd0c(void);
extern void quest_op_or_8c16cd24(void);
extern void quest_op_ori_8c16cd44(void);
extern void quest_op_xor_8c16cd5c(void);
extern void quest_op_xori_8c16cd7c(void);
extern void quest_op_jmp_8c16cd94(void);
extern void quest_op_call_8c16cdfc(void);
extern void fn_8c16c730(void);
extern void quest_op_jmp_on_8c16ce30(void);
extern void quest_op_jmp_off_8c16ce78(void);
extern void fn_8c16c648(void);
extern void quest_op_jmp_eq_8c16cebc(void);
extern void fn_8c16c6b4(void);
extern void quest_op_jmpi_eq_8c16cef0(void);
extern void quest_op_jmp_ne_8c16cf1c(void);
extern void quest_op_jmpi_ne_8c16cf50(void);
extern void quest_op_ujmp_gt_8c16cf7c(void);
extern void quest_op_ujmpi_gt_8c16cfb0(void);
extern void quest_op_jmp_gt_8c16cfdc(void);
extern void quest_op_jmpi_gt_8c16d010(void);
extern void quest_op_ujmp_lt_8c16d03c(void);
extern void quest_op_ujmpi_lt_8c16d070(void);
extern void quest_op_jmp_lt_8c16d09c(void);
extern void quest_op_jmpi_lt_8c16d0d0(void);
extern void quest_op_ujmp_ge_8c16d0fc(void);
extern void quest_op_ujmpi_ge_8c16d130(void);
extern void quest_op_jmp_ge_8c16d15c(void);
extern void quest_op_jmpi_ge_8c16d190(void);
extern void quest_op_ujmp_le_8c16d1bc(void);
extern void quest_op_ujmpi_le_8c16d1f0(void);
extern void quest_op_jmp_le_8c16d21c(void);
extern void quest_op_jmpi_le_8c16d250(void);
extern void fn_8c16c7b0(void);
extern void quest_op_switch_jmp_8c16d27c(void);
extern void quest_op_switch_call_8c16d2b4(void);
extern void quest_op_nop_42_8c16d308(void);
extern void fn_8c16c8ac(void);
extern void quest_op_message_8c16d30c(void);
extern void fn_8c16c93c(void);
extern void quest_op_list_8c16d418(void);
extern void quest_op_fadein_8c16d56c(void);
extern void quest_op_fadeout_8c16d588(void);
extern void quest_op_sound_effect_8c16d5a4(void);
extern void quest_op_bgm_8c16d5bc(void);
extern void quest_op_nop_56_8c16d5d0(void);
extern void quest_op_nop_57_8c16d5d4(void);
extern void quest_op_nop_58_8c16d5d8(void);
extern void quest_op_nop_59_8c16d5dc(void);
extern void operation_8c16c844(void);
extern void quest_op_window_msg_8c16d5e0(void);
extern void quest_op_add_msg_8c16d748(void);
extern void quest_op_message_end_8c16d7ac(void);
extern void quest_op_gettime_8c16e674(void);
extern void quest_op_window_msg_end_8c16d88c(void);
extern void fn_8c16c434(void);
extern void quest_op_npc_crt_8c16d918(void);
extern void quest_op_npc_stop_8c16dfd8(void);
extern void quest_op_npc_play_8c16dfe4(void);
extern void quest_op_npc_kill_8c16e09c(void);
extern void quest_op_npc_talk_off_8c16e0a8(void);
extern void quest_op_npc_talk_on_8c16e0b4(void);
extern void quest_op_npc_crp_8c16de70(void);
extern void quest_op_create_pipe_8c16e4e0(void);
extern void quest_op_p_hpstat_8c16e318(void);
extern void quest_op_p_dead_8c16e394(void);
extern void quest_op_p_disablewarp_8c16e414(void);
extern void quest_op_p_enablewarp_8c16e430(void);
extern void quest_op_p_move_8c16e298(void);
extern void quest_op_p_look_8c16e0f0(void);
extern void quest_op_p_action_disable_8c16e548(void);
extern void quest_op_p_action_enable_8c16e57c(void);
extern void quest_op_disable_movement1_8c16e0c0(void);
extern void quest_op_enable_movement1_8c16e0cc(void);
extern void quest_op_clear_unused_flag_74_8c16e0d8(void);
extern void quest_op_set_unused_flag_75_8c16e0e4(void);
extern void operation_8c16c54c(void);
extern void quest_op_set_player_start_position_8c16e43c(void);
extern void quest_op_p_return_guild_8c16edac(void);
extern void quest_op_p_talk_guild_8c16edb8(void);
extern void quest_op_npc_talk_pl_8c16eddc(void);
extern void quest_op_npc_talk_kill_8c16ee98(void);
extern void quest_op_npc_crtpk_8c16dac8(void);
extern void quest_op_npc_crppk_8c16db00(void);
extern void quest_op_npc_crptalk_8c16dbbc(void);
extern void quest_op_p_look_at_8c16e28c(void);
extern void quest_op_npc_crp_id_8c16df1c(void);
extern void quest_op_cam_quake_8c16dff0(void);
extern void quest_op_cam_adj_8c16e090(void);
extern void quest_op_cam_zmin_8c16dffc(void);
extern void quest_op_cam_zmout_8c16e008(void);
extern void quest_op_cam_pan_8c16e02c(void);
extern void quest_op_game_lev_super_8c16e014(void);
extern void quest_op_game_lev_reset_8c16e020(void);
extern void quest_op_pos_pipe_8c16e4ec(void);
extern void quest_op_if_zone_clear_8c16e5b0(void);
extern void quest_op_chk_ene_num_8c16e5fc(void);
extern void quest_op_construct_delayed_object_8c16e624(void);
extern void quest_op_construct_delayed_enemy_8c16e64c(void);
extern void quest_op_at_coords_call_8c16e6b0(void);
extern void quest_op_at_coords_talk_8c16e770(void);
extern void quest_op_npc_coords_call_8c16e830(void);
extern void quest_op_party_coords_call_8c16e8f0(void);
extern void quest_op_switch_on_8c16eea4(void);
extern void quest_op_switch_off_8c16eeb0(void);
extern void quest_op_playbgm_epi_8c16eebc(void);
extern void quest_op_set_mainwarp_8c16eed4(void);
extern void quest_op_set_obj_param_8c16e9c4(void);
extern void quest_op_set_floor_handler_8c16ef98(void);
extern void quest_op_clr_floor_handler_8c16efa4(void);
extern void quest_op_check_npc_straggle_8c16ea9c(void);
extern void quest_op_hud_hide_8c16ebf4(void);
extern void quest_op_hud_show_8c16ec34(void);
extern void quest_op_cine_enable_8c16ec78(void);
extern void quest_op_cine_disable_8c16ec84(void);
extern void quest_op_nop_A0_debug_8c16ec90(void);
extern void quest_op_set_qt_failure_8c16efb0(void);
extern void quest_op_set_qt_success_8c16efbc(void);
extern void quest_op_clr_qt_failure_8c16efd4(void);
extern void quest_op_clr_qt_success_8c16efe0(void);
extern void quest_op_set_qt_cancel_8c16efc8(void);
extern void quest_op_clr_qt_cancel_8c16efec(void);
extern void quest_op_pl_add_meseta_8c16eff8(void);
extern void quest_op_thread_stg_8c16cab0(void);
extern void quest_op_del_obj_param_8c16f050(void);
extern void quest_op_item_create_8c16f068(void);
extern void quest_op_item_create2_8c16f11c(void);
extern void quest_op_item_delete_8c16f240(void);
extern void quest_op_item_delete_by_type_8c16f3e0(void);
extern void quest_op_find_inventory_item_8c16f5a0(void);
extern void quest_op_setevt_8c16f88c(void);
extern void quest_op_get_difficulty_level_v1_8c16f8bc(void);
extern void quest_op_set_qt_exit_8c16f8e4(void);
extern void quest_op_clr_qt_exit_8c16f8f0(void);
extern void quest_op_nop_BC_8c16f8fc(void);
extern void quest_op_particle_8c16e1a8(void);
extern void quest_op_npc_text_8c16ed2c(void);
extern void quest_op_npc_chkwarp_8c16ebd0(void);
extern void quest_op_pl_pkoff_8c16ebdc(void);
extern void quest_op_map_designate_8c16f73c(void);
extern void quest_op_masterkey_on_8c16f770(void);
extern void quest_op_masterkey_off_8c16f784(void);
extern void quest_op_show_timer_8c16f798(void);
extern void quest_op_hide_timer_8c16f7c8(void);
extern void quest_op_winset_time_8c16f7f8(void);
extern void quest_op_getmtime_8c16f810(void);
extern void fn_8c16c49c(void);
extern void quest_op_set_quest_board_handler_8c16f838(void);
extern void quest_op_clear_quest_board_handler_8c16f864(void);
extern void quest_op_particle_id_8c16e210(void);
extern void quest_op_npc_crptalk_id_8c16dd10(void);
extern void quest_op_npc_text_clear_all_8c16eda0(void);
extern void quest_op_pl_pkon_8c16ebe8(void);
extern void quest_op_find_inventory_item_ex_8c16f668(void);
extern void quest_op_enable_mainmenu_8c16f900(void);
extern void quest_op_disable_mainmenu_8c16f920(void);
extern void quest_op_start_battlebgm_8c16f940(void);
extern void quest_op_end_battlebgm_8c16f978(void);
extern void quest_op_disp_msg_qb_8c16d698(void);
extern void quest_op_close_msg_qb_8c16d724(void);
extern void quest_op_set_eventflag_8c16f9b0(void);
extern void quest_op_sync_register_8c16fa0c(void);
extern void quest_op_set_returnhunter_8c16fb30(void);
extern void quest_op_set_returncity_8c16fb3c(void);
extern void quest_op_load_pvr_8c16ed38(void);
extern void quest_op_load_midi_8c16ed6c(void);
extern void quest_op_delete_bank_item_8c16fb48(void);
extern void quest_op_npc_param_8c16d94c(void);
extern void quest_op_pad_dragon_8c16fbdc(void);
extern void quest_op_clear_mainwarp_8c16eef4(void);
extern void quest_op_pcam_param_8c16ef0c(void);
extern void quest_op_start_setevt_8c16fbe8(void);
extern void quest_op_warp_on_8c16fc10(void);
extern void quest_op_warp_off_8c16fc1c(void);
extern void quest_op_get_client_id_8c16fc28(void);
extern void quest_op_get_leader_id_8c16fc40(void);
extern void quest_op_set_eventflag2_8c16f9d8(void);
extern void quest_op_mod2_8c16cdac(void);
extern void quest_op_modi2_8c16cdd8(void);
extern void quest_op_set_bgm_8c16eec8(void);
extern void quest_op_update_switch_flag_8c16fc58(void);
extern void quest_op_create_bgmctrl_8c16fcb8(void);
extern void quest_op_pl_add_meseta2_8c16f020(void);
extern void quest_op_sync_register2_8c16fa30(void);
extern void quest_op_sync_register2_udp_8c16fa64(void);
extern void quest_op_leti_fixed_camera_8c16fa98(void);
extern void quest_op_default_camera_pos1_8c16fb24(void);
extern void quest_op_debug_F800_8c16fce8(void);
extern void quest_op_set_chat_callback_8c171a60(void);
extern void quest_op_get_difficulty_level_v2_8c16fd18(void);
extern void quest_op_get_number_of_players_8c16fd40(void);
extern void quest_op_get_coord_of_player_8c16fd68(void);
extern void quest_op_enable_map_8c16fdd0(void);
extern void quest_op_disable_map_8c16fddc(void);
extern void quest_op_map_designate_ex_8c16fde8(void);
extern void quest_op_disable_weapon_drop_8c16fe30(void);
extern void quest_op_enable_weapon_drop_8c16fe54(void);
extern void quest_op_ba_initial_floor_8c16fe78(void);
extern void quest_op_clear_ba_rules_8c16fec0(void);
extern void quest_op_ba_set_tech_disk_mode_8c16fed4(void);
extern void quest_op_ba_set_weapon_and_armor_mode_8c16fef8(void);
extern void quest_op_ba_set_forbid_mags_8c16ff1c(void);
extern void quest_op_ba_set_tool_mode_8c16ff40(void);
extern void quest_op_ba_set_trap_mode_8c16ff64(void);
extern void quest_op_ba_set_unused_F817_8c16ff88(void);
extern void quest_op_ba_set_respawn_8c16ffac(void);
extern void quest_op_ba_set_replace_char_8c16ffd0(void);
extern void quest_op_ba_dropwep_8c16fff4(void);
extern void quest_op_ba_teams_8c170018(void);
extern void quest_op_ba_start_8c17003c(void);
extern void quest_op_ba_death_lvl_up_8c17086c(void);
extern void quest_op_ba_set_meseta_drop_mode_8c170878(void);
extern void quest_op_cmode_stage_8c170050(void);
extern void quest_op_nop_F821_8c170074(void);
extern void quest_op_nop_F822_8c1700ec(void);
extern void quest_op_set_cmode_char_template_8c1700f0(void);
extern void quest_op_set_cmode_difficulty_8c1700fc(void);
extern void quest_op_exp_multiplication_8c170108(void);
extern void quest_op_cmode_check_all_players_dead_8c170140(void);
extern void quest_op_cmode_check_any_player_dead_8c170168(void);
extern void quest_op_go_floor_8c1701b4(void);
extern void quest_op_get_num_kills_8c170244(void);
extern void quest_op_reset_kills_8c170290(void);
extern void quest_op_set_switch_flag_sync_8c1702c0(void);
extern void quest_op_clear_switch_flag_sync_8c170304(void);
extern void quest_op_read_switch_flag_8c170348(void);
extern void quest_op_read_switch_flag_on_floor_8c17037c(void);
extern void quest_op_control_dragon_8c170190(void);
extern void quest_op_release_dragon_8c1701a8(void);
extern void quest_op_shrink_8c1703b0(void);
extern void quest_op_unshrink_8c1703fc(void);
extern void quest_op_set_shrink_cam1_8c170448(void);
extern void quest_op_set_shrink_cam2_8c1704dc(void);
extern void quest_op_disp_time_cmode_8c1705b4(void);
extern void quest_op_set_area_total_8c170894(void);
extern void quest_op_set_current_area_number_8c1708a0(void);
extern void quest_op_enable_npc_visual_8c170570(void);
extern void quest_op_prepare_npc_visual_8c17057c(void);
extern void quest_op_ba_player_give_damage_score_8c1705cc(void);
extern void quest_op_ba_player_take_damage_score_8c170604(void);
extern void quest_op_ba_enemy_give_damage_score_8c17063c(void);
extern void quest_op_ba_enemy_take_damage_score_8c170674(void);
extern void quest_op_ba_player_kill_score_8c1706ac(void);
extern void quest_op_ba_player_death_score_8c1706e4(void);
extern void quest_op_ba_enemy_kill_score_8c17071c(void);
extern void quest_op_ba_enemy_death_score_8c170754(void);
extern void quest_op_ba_meseta_score_8c17078c(void);
extern void quest_op_ba_set_trap_count_8c1707c4(void);
extern void quest_op_ba_hide_target_reticle_8c1707fc(void);
extern void quest_op_override_warp_dest_floor_8c1708ac(void);
extern void quest_op_restore_warp_dest_floor_8c1708b8(void);
extern void quest_op_set_ult_map_8c1708c4(void);
extern void quest_op_unset_ult_map_8c1708d0(void);
extern void quest_op_set_area_title_8c1708dc(void);
extern void quest_op_ba_show_self_traps_8c1708e8(void);
extern void quest_op_ba_hide_self_traps_8c1708f4(void);
extern void quest_op_equip_item_8c170900(void);
extern void quest_op_unequip_item_8c170960(void);
extern void quest_op_p_talk_guild_local_8c170978(void);
extern void quest_op_set_allow_item_flags_8c1709a4(void);
extern void quest_op_ba_enable_sonar_8c1709b0(void);
extern void quest_op_ba_sonar_count_8c1709d0(void);
extern void quest_op_clear_score_announce_8c1709dc(void);
extern void quest_op_set_score_announce_8c1709fc(void);
extern void quest_op_give_s_rank_weapon_8c170a24(void);
extern void quest_op_get_mag_levels_8c170aac(void);
extern void quest_op_set_cmode_rank_result_8c170b74(void);
extern void quest_op_award_item_name_8c170b84(void);
extern void quest_op_award_item_select_8c170bb0(void);
extern void quest_op_award_item_give_8c170bdc(void);
extern void quest_op_set_cmode_rank_threshold_8c170c30(void);
extern void quest_op_check_rank_time_8c170d28(void);
extern void quest_op_item_create_cmode_8c170de4(void);
extern void quest_op_ba_set_box_drop_area_8c170e88(void);
extern void quest_op_award_item_ok_8c170ea0(void);
extern void quest_op_ba_set_trapself_8c170ee8(void);
extern void quest_op_ba_clear_trapself_8c170ef4(void);
extern void quest_op_ba_set_lives_8c170810(void);
extern void quest_op_ba_set_max_tech_level_8c170824(void);
extern void quest_op_ba_set_char_level_8c17083c(void);
extern void quest_op_ba_set_time_limit_8c170854(void);
extern void quest_op_dark_falz_is_dead_8c170f00(void);
extern void quest_op_set_cmode_rank_override_8c170f38(void);
extern void quest_op_enable_stealth_suit_effect_8c170fe0(void);
extern void quest_op_disable_stealth_suit_effect_8c171028(void);
extern void quest_op_enable_techs_8c171070(void);
extern void quest_op_disable_techs_8c1710a4(void);
extern void quest_op_get_gender_8c1710dc(void);
extern void quest_op_get_chara_class_8c171154(void);
extern void quest_op_take_slot_meseta_8c171248(void);
extern void quest_op_get_guild_card_file_creation_time_8c1712bc(void);
extern void quest_op_kill_player_8c1712f0(void);
extern void quest_op_get_serial_number_8c171320(void);
extern void quest_op_get_eventflag_8c171364(void);
extern void quest_op_set_trap_damage_8c1713a4(void);
extern void quest_op_get_pl_name_8c1713e0(void);
extern void quest_op_get_pl_job_8c171440(void);
extern void quest_op_get_player_proximity_8c170c84(void);
extern void quest_op_set_eventflag16_8c1714a8(void);
extern void quest_op_set_eventflag32_8c1714f4(void);
extern void quest_op_ba_get_place_8c171540(void);
extern void quest_op_ba_get_score_8c171578(void);
extern void quest_op_enable_win_pfx_8c1715ac(void);
extern void quest_op_disable_win_pfx_8c1715b8(void);
extern void quest_op_get_player_state_8c1715c4(void);
extern void quest_op_send_mail_8c1717d4(void);
extern void quest_op_get_game_version_8c1718e4(void);
extern void quest_op_chl_set_timerecord_8c1718f8(void);
extern void quest_op_chl_get_timerecord_8c171910(void);
extern void quest_op_set_cmode_grave_rates_8c171938(void);
extern void quest_op_clear_mainwarp_all_8c16ef00(void);
extern void quest_op_set_override_enemy_bp_index_8c171af4(void);
extern void quest_op_set_enemy_physical_data_8c171b00(void);
extern void quest_op_set_enemy_attack_data_8c171b30(void);
extern void quest_op_set_enemy_resist_data_8c171b60(void);
extern void quest_op_set_enemy_movement_data_8c171b90(void);
extern void quest_op_get_eventflag16_8c171bc0(void);
extern void quest_op_get_eventflag32_8c171c24(void);
extern void quest_op_shift_left_8c171c88(void);
extern void quest_op_shift_right_8c171ca8(void);
extern void quest_op_get_random_8c171cc8(void);
extern void quest_op_reset_map_8c171d24(void);
extern void quest_op_get_chl_retry_choice_8c171d9c(void);
extern void quest_op_chl_create_retry_menu_8c171df0(void);
extern void quest_op_ba_forbid_scape_dolls_8c171dfc(void);
extern void quest_op_player_recovery_8c171e1c(void);
extern void quest_op_disable_bosswarp_option_8c171e58(void);
extern void quest_op_enable_bosswarp_option_8c171e64(void);
extern void quest_op_is_bosswarp_opt_disabled_8c171e70(void);
extern void quest_op_load_serial_number_to_flag_buf_8c171ea8(void);
extern void quest_op_write_flag_buf_to_event_flags_8c171ed4(void);
extern void quest_op_set_chat_callback_no_filter_8c171f20(void);
extern void quest_op_set_symbol_chat_collision_8c171fac(void);
extern void quest_op_set_shrink_size_8c1720a0(void);
extern void quest_op_ba_death_tech_level_up_8c172140(void);
extern void quest_op_vol_opt_is_dead_8c172154(void);
extern void quest_op_is_there_grave_message_8c172180(void);
extern void quest_op_get_ba_record_8c1721e4(void);
extern void quest_op_get_cmode_prize_rank_8c1722a0(void);
extern void quest_op_get_number_of_players2_8c1722dc(void);
extern void quest_op_party_has_name_8c1722f4(void);
extern void quest_op_someone_has_spoken_8c172348(void);
extern void quest_op_read1_8c1723a0(void);
extern void quest_op_read2_8c1723bc(void);
extern void quest_op_read4_8c1723d8(void);
extern void quest_op_write1_8c1723f0(void);
extern void quest_op_write2_8c172404(void);
extern void quest_op_write4_8c172418(void);
extern void quest_op_check_for_hacking_8c17242c(void);
extern void quest_op_chl_set_min_time_online_8c1724f0(void);
extern void quest_op_disable_retry_menu_8c172508(void);
extern void quest_op_chl_show_dead_player_list_8c172514(void);
extern void quest_op_load_guild_card_file_creation_time_to_flag_buf_8c172520(void);
extern void quest_op_write_flag_buf_to_event_flags2_8c172548(void);
extern const char quest_op_pl_walk_8c16e0fc[];

/* Quest script opcodes: 512 {argument decoder, handler} pairs, opcodes 0x00-0xFF then
   0xF800-0xF8FF, run by the interpreter at 0x8c16c27c. The DC v2 opcodes newserv
   QuestScript.cc marks valid have non-null handlers. */
const QuestOpcode g_quest_opcode_table_8c317ba8[512] = {
    { (void *)quest_args_none_8c16c314, (void *)quest_op_nop_8c16ca58 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_ret_8c16ca5c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_sync_8c16ca98 },
    { (void *)operation_8c16c3ec, (void *)quest_op_exit_8c16ca8c },
    { (void *)operation_8c16c5a0, (void *)quest_op_thread_8c16caa4 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)operation_8c16c354, (void *)quest_op_let_8c16cabc },
    { (void *)operation_8c16c394, (void *)quest_op_leti_8c16cad4 },
    { (void *)operation_8c16c5ec, (void *)quest_op_leta_8c16cae4 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)operation_8c16c328, (void *)quest_op_set_8c16cafc },
    { (void *)operation_8c16c328, (void *)quest_op_clear_8c16cb10 },
    { (void *)operation_8c16c328, (void *)quest_op_rev_8c16cb24 },
    { (void *)operation_8c16c9b4, (void *)quest_op_gset_8c16cb3c },
    { (void *)operation_8c16c9b4, (void *)quest_op_gclear_8c16cb48 },
    { (void *)operation_8c16c9b4, (void *)quest_op_grev_8c16cb54 },
    { (void *)operation_8c16ca00, (void *)quest_op_glet_8c16cb88 },
    { (void *)operation_8c16ca00, (void *)quest_op_gget_8c16cbbc },
    { (void *)operation_8c16c354, (void *)quest_op_add_8c16cbf4 },
    { (void *)operation_8c16c394, (void *)quest_op_addi_8c16cc14 },
    { (void *)operation_8c16c354, (void *)quest_op_sub_8c16cc2c },
    { (void *)operation_8c16c394, (void *)quest_op_subi_8c16cc4c },
    { (void *)operation_8c16c354, (void *)quest_op_mul_8c16cc64 },
    { (void *)operation_8c16c394, (void *)quest_op_muli_8c16cc84 },
    { (void *)operation_8c16c354, (void *)quest_op_div_8c16cc9c },
    { (void *)operation_8c16c394, (void *)quest_op_divi_8c16ccc8 },
    { (void *)operation_8c16c354, (void *)quest_op_and_8c16ccec },
    { (void *)operation_8c16c394, (void *)quest_op_andi_8c16cd0c },
    { (void *)operation_8c16c354, (void *)quest_op_or_8c16cd24 },
    { (void *)operation_8c16c394, (void *)quest_op_ori_8c16cd44 },
    { (void *)operation_8c16c354, (void *)quest_op_xor_8c16cd5c },
    { (void *)operation_8c16c394, (void *)quest_op_xori_8c16cd7c },
    { 0, 0 },
    { 0, 0 },
    { (void *)operation_8c16c5a0, (void *)quest_op_jmp_8c16cd94 },
    { (void *)operation_8c16c5a0, (void *)quest_op_call_8c16cdfc },
    { (void *)fn_8c16c730, (void *)quest_op_jmp_on_8c16ce30 },
    { (void *)fn_8c16c730, (void *)quest_op_jmp_off_8c16ce78 },
    { (void *)fn_8c16c648, (void *)quest_op_jmp_eq_8c16cebc },
    { (void *)fn_8c16c6b4, (void *)quest_op_jmpi_eq_8c16cef0 },
    { (void *)fn_8c16c648, (void *)quest_op_jmp_ne_8c16cf1c },
    { (void *)fn_8c16c6b4, (void *)quest_op_jmpi_ne_8c16cf50 },
    { (void *)fn_8c16c648, (void *)quest_op_ujmp_gt_8c16cf7c },
    { (void *)fn_8c16c6b4, (void *)quest_op_ujmpi_gt_8c16cfb0 },
    { (void *)fn_8c16c648, (void *)quest_op_jmp_gt_8c16cfdc },
    { (void *)fn_8c16c6b4, (void *)quest_op_jmpi_gt_8c16d010 },
    { (void *)fn_8c16c648, (void *)quest_op_ujmp_lt_8c16d03c },
    { (void *)fn_8c16c6b4, (void *)quest_op_ujmpi_lt_8c16d070 },
    { (void *)fn_8c16c648, (void *)quest_op_jmp_lt_8c16d09c },
    { (void *)fn_8c16c6b4, (void *)quest_op_jmpi_lt_8c16d0d0 },
    { (void *)fn_8c16c648, (void *)quest_op_ujmp_ge_8c16d0fc },
    { (void *)fn_8c16c6b4, (void *)quest_op_ujmpi_ge_8c16d130 },
    { (void *)fn_8c16c648, (void *)quest_op_jmp_ge_8c16d15c },
    { (void *)fn_8c16c6b4, (void *)quest_op_jmpi_ge_8c16d190 },
    { (void *)fn_8c16c648, (void *)quest_op_ujmp_le_8c16d1bc },
    { (void *)fn_8c16c6b4, (void *)quest_op_ujmpi_le_8c16d1f0 },
    { (void *)fn_8c16c648, (void *)quest_op_jmp_le_8c16d21c },
    { (void *)fn_8c16c6b4, (void *)quest_op_jmpi_le_8c16d250 },
    { (void *)fn_8c16c7b0, (void *)quest_op_switch_jmp_8c16d27c },
    { (void *)fn_8c16c7b0, (void *)quest_op_switch_call_8c16d2b4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_nop_42_8c16d308 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)fn_8c16c8ac, (void *)quest_op_message_8c16d30c },
    { (void *)fn_8c16c93c, (void *)quest_op_list_8c16d418 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_fadein_8c16d56c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_fadeout_8c16d588 },
    { (void *)operation_8c16c3ec, (void *)quest_op_sound_effect_8c16d5a4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_bgm_8c16d5bc },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_nop_56_8c16d5d0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_nop_57_8c16d5d4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_nop_58_8c16d5d8 },
    { (void *)operation_8c16c3ec, (void *)quest_op_nop_59_8c16d5dc },
    { (void *)operation_8c16c844, (void *)quest_op_window_msg_8c16d5e0 },
    { (void *)operation_8c16c844, (void *)quest_op_add_msg_8c16d748 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_message_end_8c16d7ac },
    { (void *)operation_8c16c328, (void *)quest_op_gettime_8c16e674 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_window_msg_end_8c16d88c },
    { 0, 0 },
    { (void *)fn_8c16c434, (void *)quest_op_npc_crt_8c16d918 },
    { (void *)operation_8c16c3ec, (void *)quest_op_npc_stop_8c16dfd8 },
    { (void *)operation_8c16c3ec, (void *)quest_op_npc_play_8c16dfe4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_npc_kill_8c16e09c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_npc_talk_off_8c16e0a8 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_npc_talk_on_8c16e0b4 },
    { (void *)fn_8c16c434, (void *)quest_op_npc_crp_8c16de70 },
    { 0, 0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_create_pipe_8c16e4e0 },
    { (void *)fn_8c16c434, (void *)quest_op_p_hpstat_8c16e318 },
    { (void *)fn_8c16c434, (void *)quest_op_p_dead_8c16e394 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_p_disablewarp_8c16e414 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_p_enablewarp_8c16e430 },
    { (void *)fn_8c16c434, (void *)quest_op_p_move_8c16e298 },
    { (void *)operation_8c16c3ec, (void *)quest_op_p_look_8c16e0f0 },
    { 0, 0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_p_action_disable_8c16e548 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_p_action_enable_8c16e57c },
    { (void *)operation_8c16c3ec, (void *)quest_op_disable_movement1_8c16e0c0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_enable_movement1_8c16e0cc },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_clear_unused_flag_74_8c16e0d8 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_set_unused_flag_75_8c16e0e4 },
    { (void *)operation_8c16c54c, (void *)quest_op_set_player_start_position_8c16e43c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_p_return_guild_8c16edac },
    { (void *)operation_8c16c3ec, (void *)quest_op_p_talk_guild_8c16edb8 },
    { (void *)operation_8c16c3ec, (void *)quest_op_npc_talk_pl_8c16eddc },
    { (void *)operation_8c16c3ec, (void *)quest_op_npc_talk_kill_8c16ee98 },
    { (void *)fn_8c16c434, (void *)quest_op_npc_crtpk_8c16dac8 },
    { (void *)fn_8c16c434, (void *)quest_op_npc_crppk_8c16db00 },
    { (void *)fn_8c16c434, (void *)quest_op_npc_crptalk_8c16dbbc },
    { (void *)fn_8c16c434, (void *)quest_op_p_look_at_8c16e28c },
    { (void *)fn_8c16c434, (void *)quest_op_npc_crp_id_8c16df1c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_cam_quake_8c16dff0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_cam_adj_8c16e090 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_cam_zmin_8c16dffc },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_cam_zmout_8c16e008 },
    { (void *)fn_8c16c434, (void *)quest_op_cam_pan_8c16e02c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_game_lev_super_8c16e014 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_game_lev_reset_8c16e020 },
    { (void *)fn_8c16c434, (void *)quest_op_pos_pipe_8c16e4ec },
    { (void *)operation_8c16c354, (void *)quest_op_if_zone_clear_8c16e5b0 },
    { (void *)operation_8c16c328, (void *)quest_op_chk_ene_num_8c16e5fc },
    { (void *)operation_8c16c328, (void *)quest_op_construct_delayed_object_8c16e624 },
    { (void *)operation_8c16c328, (void *)quest_op_construct_delayed_enemy_8c16e64c },
    { (void *)operation_8c16c328, (void *)quest_op_at_coords_call_8c16e6b0 },
    { (void *)operation_8c16c328, (void *)quest_op_at_coords_talk_8c16e770 },
    { (void *)operation_8c16c328, (void *)quest_op_npc_coords_call_8c16e830 },
    { (void *)operation_8c16c328, (void *)quest_op_party_coords_call_8c16e8f0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_switch_on_8c16eea4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_switch_off_8c16eeb0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_playbgm_epi_8c16eebc },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_mainwarp_8c16eed4 },
    { (void *)operation_8c16c354, (void *)quest_op_set_obj_param_8c16e9c4 },
    { (void *)fn_8c16c434, (void *)quest_op_set_floor_handler_8c16ef98 },
    { (void *)operation_8c16c3ec, (void *)quest_op_clr_floor_handler_8c16efa4 },
    { (void *)operation_8c16c328, (void *)quest_op_check_npc_straggle_8c16ea9c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_hud_hide_8c16ebf4 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_hud_show_8c16ec34 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_cine_enable_8c16ec78 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_cine_disable_8c16ec84 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)fn_8c16c8ac, (void *)quest_op_nop_A0_debug_8c16ec90 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_qt_failure_8c16efb0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_qt_success_8c16efbc },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_clr_qt_failure_8c16efd4 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_clr_qt_success_8c16efe0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_qt_cancel_8c16efc8 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_clr_qt_cancel_8c16efec },
    { 0, 0 },
    { (void *)fn_8c16c434, quest_op_pl_walk_8c16e0fc },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)fn_8c16c434, (void *)quest_op_pl_add_meseta_8c16eff8 },
    { (void *)operation_8c16c5a0, (void *)quest_op_thread_stg_8c16cab0 },
    { (void *)operation_8c16c328, (void *)quest_op_del_obj_param_8c16f050 },
    { (void *)operation_8c16c354, (void *)quest_op_item_create_8c16f068 },
    { (void *)operation_8c16c354, (void *)quest_op_item_create2_8c16f11c },
    { (void *)operation_8c16c354, (void *)quest_op_item_delete_8c16f240 },
    { (void *)operation_8c16c354, (void *)quest_op_item_delete_by_type_8c16f3e0 },
    { (void *)operation_8c16c354, (void *)quest_op_find_inventory_item_8c16f5a0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_setevt_8c16f88c },
    { (void *)operation_8c16c328, (void *)quest_op_get_difficulty_level_v1_8c16f8bc },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_qt_exit_8c16f8e4 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_clr_qt_exit_8c16f8f0 },
    { (void *)operation_8c16c844, (void *)quest_op_nop_BC_8c16f8fc },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)fn_8c16c434, (void *)quest_op_particle_8c16e1a8 },
    { (void *)fn_8c16c8ac, (void *)quest_op_npc_text_8c16ed2c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_npc_chkwarp_8c16ebd0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_pl_pkoff_8c16ebdc },
    { (void *)operation_8c16c328, (void *)quest_op_map_designate_8c16f73c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_masterkey_on_8c16f770 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_masterkey_off_8c16f784 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_show_timer_8c16f798 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_hide_timer_8c16f7c8 },
    { (void *)operation_8c16c328, (void *)quest_op_winset_time_8c16f7f8 },
    { (void *)operation_8c16c328, (void *)quest_op_getmtime_8c16f810 },
    { (void *)fn_8c16c49c, (void *)quest_op_set_quest_board_handler_8c16f838 },
    { (void *)operation_8c16c3ec, (void *)quest_op_clear_quest_board_handler_8c16f864 },
    { (void *)fn_8c16c434, (void *)quest_op_particle_id_8c16e210 },
    { (void *)fn_8c16c434, (void *)quest_op_npc_crptalk_id_8c16dd10 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_npc_text_clear_all_8c16eda0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_pl_pkon_8c16ebe8 },
    { (void *)operation_8c16c354, (void *)quest_op_find_inventory_item_ex_8c16f668 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_enable_mainmenu_8c16f900 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_disable_mainmenu_8c16f920 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_start_battlebgm_8c16f940 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_end_battlebgm_8c16f978 },
    { (void *)operation_8c16c844, (void *)quest_op_disp_msg_qb_8c16d698 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_close_msg_qb_8c16d724 },
    { (void *)fn_8c16c434, (void *)quest_op_set_eventflag_8c16f9b0 },
    { (void *)fn_8c16c434, (void *)quest_op_sync_register_8c16fa0c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_set_returnhunter_8c16fb30 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_set_returncity_8c16fb3c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_load_pvr_8c16ed38 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_load_midi_8c16ed6c },
    { (void *)operation_8c16c328, (void *)quest_op_delete_bank_item_8c16fb48 },
    { (void *)fn_8c16c434, (void *)quest_op_npc_param_8c16d94c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_pad_dragon_8c16fbdc },
    { (void *)operation_8c16c3ec, (void *)quest_op_clear_mainwarp_8c16eef4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_pcam_param_8c16ef0c },
    { (void *)fn_8c16c434, (void *)quest_op_start_setevt_8c16fbe8 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_warp_on_8c16fc10 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_warp_off_8c16fc1c },
    { (void *)operation_8c16c328, (void *)quest_op_get_client_id_8c16fc28 },
    { (void *)operation_8c16c328, (void *)quest_op_get_leader_id_8c16fc40 },
    { (void *)operation_8c16c54c, (void *)quest_op_set_eventflag2_8c16f9d8 },
    { (void *)operation_8c16c354, (void *)quest_op_mod2_8c16cdac },
    { (void *)operation_8c16c394, (void *)quest_op_modi2_8c16cdd8 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_bgm_8c16eec8 },
    { (void *)operation_8c16c328, (void *)quest_op_update_switch_flag_8c16fc58 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_create_bgmctrl_8c16fcb8 },
    { (void *)operation_8c16c3ec, (void *)quest_op_pl_add_meseta2_8c16f020 },
    { (void *)fn_8c16c434, (void *)quest_op_sync_register2_8c16fa30 },
    { (void *)fn_8c16c434, (void *)quest_op_sync_register2_udp_8c16fa64 },
    { (void *)operation_8c16c3ec, (void *)quest_op_leti_fixed_camera_8c16fa98 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_default_camera_pos1_8c16fb24 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_debug_F800_8c16fce8 },
    { (void *)fn_8c16c93c, (void *)quest_op_set_chat_callback_8c171a60 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)operation_8c16c328, (void *)quest_op_get_difficulty_level_v2_8c16fd18 },
    { (void *)operation_8c16c328, (void *)quest_op_get_number_of_players_8c16fd40 },
    { (void *)operation_8c16c354, (void *)quest_op_get_coord_of_player_8c16fd68 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_enable_map_8c16fdd0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_disable_map_8c16fddc },
    { (void *)operation_8c16c328, (void *)quest_op_map_designate_ex_8c16fde8 },
    { (void *)operation_8c16c3ec, (void *)quest_op_disable_weapon_drop_8c16fe30 },
    { (void *)operation_8c16c3ec, (void *)quest_op_enable_weapon_drop_8c16fe54 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_initial_floor_8c16fe78 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_clear_ba_rules_8c16fec0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_tech_disk_mode_8c16fed4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_weapon_and_armor_mode_8c16fef8 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_forbid_mags_8c16ff1c },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_tool_mode_8c16ff40 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_trap_mode_8c16ff64 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_unused_F817_8c16ff88 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_respawn_8c16ffac },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_replace_char_8c16ffd0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_dropwep_8c16fff4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_teams_8c170018 },
    { (void *)operation_8c16c844, (void *)quest_op_ba_start_8c17003c },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_death_lvl_up_8c17086c },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_meseta_drop_mode_8c170878 },
    { 0, 0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_cmode_stage_8c170050 },
    { (void *)operation_8c16c328, (void *)quest_op_nop_F821_8c170074 },
    { (void *)operation_8c16c328, (void *)quest_op_nop_F822_8c1700ec },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_cmode_char_template_8c1700f0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_cmode_difficulty_8c1700fc },
    { (void *)operation_8c16c328, (void *)quest_op_exp_multiplication_8c170108 },
    { (void *)operation_8c16c328, (void *)quest_op_cmode_check_all_players_dead_8c170140 },
    { (void *)operation_8c16c328, (void *)quest_op_cmode_check_any_player_dead_8c170168 },
    { (void *)operation_8c16c354, (void *)quest_op_go_floor_8c1701b4 },
    { (void *)operation_8c16c354, (void *)quest_op_get_num_kills_8c170244 },
    { (void *)operation_8c16c328, (void *)quest_op_reset_kills_8c170290 },
    { (void *)fn_8c16c434, (void *)quest_op_set_switch_flag_sync_8c1702c0 },
    { (void *)fn_8c16c434, (void *)quest_op_clear_switch_flag_sync_8c170304 },
    { (void *)operation_8c16c328, (void *)quest_op_read_switch_flag_8c170348 },
    { (void *)operation_8c16c328, (void *)quest_op_read_switch_flag_on_floor_8c17037c },
    { 0, 0 },
    { (void *)operation_8c16c328, (void *)quest_op_control_dragon_8c170190 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_release_dragon_8c1701a8 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)operation_8c16c328, (void *)quest_op_shrink_8c1703b0 },
    { (void *)operation_8c16c328, (void *)quest_op_unshrink_8c1703fc },
    { (void *)operation_8c16c328, (void *)quest_op_set_shrink_cam1_8c170448 },
    { (void *)operation_8c16c328, (void *)quest_op_set_shrink_cam2_8c1704dc },
    { (void *)operation_8c16c328, (void *)quest_op_disp_time_cmode_8c1705b4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_area_total_8c170894 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_current_area_number_8c1708a0 },
    { 0, 0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_enable_npc_visual_8c170570 },
    { (void *)operation_8c16c5a0, (void *)quest_op_prepare_npc_visual_8c17057c },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { (void *)operation_8c16c328, (void *)quest_op_ba_player_give_damage_score_8c1705cc },
    { (void *)operation_8c16c328, (void *)quest_op_ba_player_take_damage_score_8c170604 },
    { (void *)operation_8c16c328, (void *)quest_op_ba_enemy_give_damage_score_8c17063c },
    { (void *)operation_8c16c328, (void *)quest_op_ba_enemy_take_damage_score_8c170674 },
    { (void *)operation_8c16c328, (void *)quest_op_ba_player_kill_score_8c1706ac },
    { (void *)operation_8c16c328, (void *)quest_op_ba_player_death_score_8c1706e4 },
    { (void *)operation_8c16c328, (void *)quest_op_ba_enemy_kill_score_8c17071c },
    { (void *)operation_8c16c328, (void *)quest_op_ba_enemy_death_score_8c170754 },
    { (void *)operation_8c16c328, (void *)quest_op_ba_meseta_score_8c17078c },
    { (void *)operation_8c16c328, (void *)quest_op_ba_set_trap_count_8c1707c4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_hide_target_reticle_8c1707fc },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_override_warp_dest_floor_8c1708ac },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_restore_warp_dest_floor_8c1708b8 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_set_ult_map_8c1708c4 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_unset_ult_map_8c1708d0 },
    { (void *)operation_8c16c844, (void *)quest_op_set_area_title_8c1708dc },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_ba_show_self_traps_8c1708e8 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_ba_hide_self_traps_8c1708f4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_equip_item_8c170900 },
    { (void *)fn_8c16c434, (void *)quest_op_unequip_item_8c170960 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_p_talk_guild_local_8c170978 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_allow_item_flags_8c1709a4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_enable_sonar_8c1709b0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_sonar_count_8c1709d0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_clear_score_announce_8c1709dc },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_score_announce_8c1709fc },
    { (void *)fn_8c16c49c, (void *)quest_op_give_s_rank_weapon_8c170a24 },
    { (void *)operation_8c16c3ec, (void *)quest_op_get_mag_levels_8c170aac },
    { (void *)fn_8c16c8ac, (void *)quest_op_set_cmode_rank_result_8c170b74 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_award_item_name_8c170b84 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_award_item_select_8c170bb0 },
    { (void *)operation_8c16c328, (void *)quest_op_award_item_give_8c170bdc },
    { (void *)operation_8c16c354, (void *)quest_op_set_cmode_rank_threshold_8c170c30 },
    { (void *)operation_8c16c354, (void *)quest_op_check_rank_time_8c170d28 },
    { (void *)operation_8c16c354, (void *)quest_op_item_create_cmode_8c170de4 },
    { (void *)operation_8c16c328, (void *)quest_op_ba_set_box_drop_area_8c170e88 },
    { (void *)operation_8c16c328, (void *)quest_op_award_item_ok_8c170ea0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_ba_set_trapself_8c170ee8 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_ba_clear_trapself_8c170ef4 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_lives_8c170810 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_max_tech_level_8c170824 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_char_level_8c17083c },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_set_time_limit_8c170854 },
    { (void *)operation_8c16c328, (void *)quest_op_dark_falz_is_dead_8c170f00 },
    { (void *)fn_8c16c8ac, (void *)quest_op_set_cmode_rank_override_8c170f38 },
    { (void *)operation_8c16c328, (void *)quest_op_enable_stealth_suit_effect_8c170fe0 },
    { (void *)operation_8c16c328, (void *)quest_op_disable_stealth_suit_effect_8c171028 },
    { (void *)operation_8c16c328, (void *)quest_op_enable_techs_8c171070 },
    { (void *)operation_8c16c328, (void *)quest_op_disable_techs_8c1710a4 },
    { (void *)operation_8c16c354, (void *)quest_op_get_gender_8c1710dc },
    { (void *)operation_8c16c354, (void *)quest_op_get_chara_class_8c171154 },
    { (void *)operation_8c16c354, (void *)quest_op_take_slot_meseta_8c171248 },
    { (void *)operation_8c16c328, (void *)quest_op_get_guild_card_file_creation_time_8c1712bc },
    { (void *)operation_8c16c328, (void *)quest_op_kill_player_8c1712f0 },
    { (void *)operation_8c16c328, (void *)quest_op_get_serial_number_8c171320 },
    { (void *)operation_8c16c354, (void *)quest_op_get_eventflag_8c171364 },
    { (void *)operation_8c16c328, (void *)quest_op_set_trap_damage_8c1713a4 },
    { (void *)operation_8c16c328, (void *)quest_op_get_pl_name_8c1713e0 },
    { (void *)operation_8c16c328, (void *)quest_op_get_pl_job_8c171440 },
    { (void *)operation_8c16c354, (void *)quest_op_get_player_proximity_8c170c84 },
    { (void *)operation_8c16c54c, (void *)quest_op_set_eventflag16_8c1714a8 },
    { (void *)operation_8c16c54c, (void *)quest_op_set_eventflag32_8c1714f4 },
    { (void *)operation_8c16c354, (void *)quest_op_ba_get_place_8c171540 },
    { (void *)operation_8c16c354, (void *)quest_op_ba_get_score_8c171578 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_enable_win_pfx_8c1715ac },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_disable_win_pfx_8c1715b8 },
    { (void *)operation_8c16c354, (void *)quest_op_get_player_state_8c1715c4 },
    { (void *)fn_8c16c93c, (void *)quest_op_send_mail_8c1717d4 },
    { (void *)operation_8c16c328, (void *)quest_op_get_game_version_8c1718e4 },
    { (void *)operation_8c16c328, (void *)quest_op_chl_set_timerecord_8c1718f8 },
    { (void *)operation_8c16c328, (void *)quest_op_chl_get_timerecord_8c171910 },
    { (void *)operation_8c16c328, (void *)quest_op_set_cmode_grave_rates_8c171938 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_clear_mainwarp_all_8c16ef00 },
    { (void *)operation_8c16c3ec, (void *)quest_op_set_override_enemy_bp_index_8c171af4 },
    { (void *)operation_8c16c5a0, (void *)quest_op_set_enemy_physical_data_8c171b00 },
    { (void *)operation_8c16c5a0, (void *)quest_op_set_enemy_attack_data_8c171b30 },
    { (void *)operation_8c16c5a0, (void *)quest_op_set_enemy_resist_data_8c171b60 },
    { (void *)operation_8c16c5a0, (void *)quest_op_set_enemy_movement_data_8c171b90 },
    { (void *)operation_8c16c354, (void *)quest_op_get_eventflag16_8c171bc0 },
    { (void *)operation_8c16c354, (void *)quest_op_get_eventflag32_8c171c24 },
    { (void *)operation_8c16c354, (void *)quest_op_shift_left_8c171c88 },
    { (void *)operation_8c16c354, (void *)quest_op_shift_right_8c171ca8 },
    { (void *)operation_8c16c354, (void *)quest_op_get_random_8c171cc8 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_reset_map_8c171d24 },
    { (void *)operation_8c16c328, (void *)quest_op_get_chl_retry_choice_8c171d9c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_chl_create_retry_menu_8c171df0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_forbid_scape_dolls_8c171dfc },
    { (void *)operation_8c16c328, (void *)quest_op_player_recovery_8c171e1c },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_disable_bosswarp_option_8c171e58 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_enable_bosswarp_option_8c171e64 },
    { (void *)operation_8c16c328, (void *)quest_op_is_bosswarp_opt_disabled_8c171e70 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_load_serial_number_to_flag_buf_8c171ea8 },
    { (void *)operation_8c16c328, (void *)quest_op_write_flag_buf_to_event_flags_8c171ed4 },
    { (void *)operation_8c16c328, (void *)quest_op_set_chat_callback_no_filter_8c171f20 },
    { (void *)operation_8c16c328, (void *)quest_op_set_symbol_chat_collision_8c171fac },
    { (void *)operation_8c16c354, (void *)quest_op_set_shrink_size_8c1720a0 },
    { (void *)operation_8c16c3ec, (void *)quest_op_ba_death_tech_level_up_8c172140 },
    { (void *)operation_8c16c328, (void *)quest_op_vol_opt_is_dead_8c172154 },
    { (void *)operation_8c16c328, (void *)quest_op_is_there_grave_message_8c172180 },
    { (void *)operation_8c16c328, (void *)quest_op_get_ba_record_8c1721e4 },
    { (void *)operation_8c16c328, (void *)quest_op_get_cmode_prize_rank_8c1722a0 },
    { (void *)operation_8c16c328, (void *)quest_op_get_number_of_players2_8c1722dc },
    { (void *)operation_8c16c328, (void *)quest_op_party_has_name_8c1722f4 },
    { (void *)operation_8c16c328, (void *)quest_op_someone_has_spoken_8c172348 },
    { (void *)operation_8c16c354, (void *)quest_op_read1_8c1723a0 },
    { (void *)operation_8c16c354, (void *)quest_op_read2_8c1723bc },
    { (void *)operation_8c16c354, (void *)quest_op_read4_8c1723d8 },
    { (void *)operation_8c16c354, (void *)quest_op_write1_8c1723f0 },
    { (void *)operation_8c16c354, (void *)quest_op_write2_8c172404 },
    { (void *)operation_8c16c354, (void *)quest_op_write4_8c172418 },
    { (void *)operation_8c16c328, (void *)quest_op_check_for_hacking_8c17242c },
    { (void *)operation_8c16c328, (void *)quest_op_chl_set_min_time_online_8c1724f0 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_disable_retry_menu_8c172508 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_chl_show_dead_player_list_8c172514 },
    { (void *)quest_args_none_8c16c314, (void *)quest_op_load_guild_card_file_creation_time_to_flag_buf_8c172520 },
    { (void *)operation_8c16c328, (void *)quest_op_write_flag_buf_to_event_flags2_8c172548 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 },
    { 0, 0 }
};
