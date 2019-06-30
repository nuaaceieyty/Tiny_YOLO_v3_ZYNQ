// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _out_stream_merge_HH_
#define _out_stream_merge_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct out_stream_merge : public sc_module {
    // Port declarations 87
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<16> > out_stream_group_8_V_V_dout;
    sc_in< sc_logic > out_stream_group_8_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_8_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_13_V_V_dout;
    sc_in< sc_logic > out_stream_group_13_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_13_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_14_V_V_dout;
    sc_in< sc_logic > out_stream_group_14_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_14_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_15_V_V_dout;
    sc_in< sc_logic > out_stream_group_15_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_15_V_V_read;
    sc_in< sc_logic > outStream_TREADY;
    sc_in< sc_logic > ap_ce;
    sc_in< sc_lv<16> > out_stream_group_0_V_V_dout;
    sc_in< sc_logic > out_stream_group_0_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_0_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_1_V_V_dout;
    sc_in< sc_logic > out_stream_group_1_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_1_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_2_V_V_dout;
    sc_in< sc_logic > out_stream_group_2_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_2_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_3_V_V_dout;
    sc_in< sc_logic > out_stream_group_3_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_3_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_4_V_V_dout;
    sc_in< sc_logic > out_stream_group_4_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_4_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_5_V_V_dout;
    sc_in< sc_logic > out_stream_group_5_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_5_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_6_V_V_dout;
    sc_in< sc_logic > out_stream_group_6_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_6_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_7_V_V_dout;
    sc_in< sc_logic > out_stream_group_7_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_7_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_9_V_V_dout;
    sc_in< sc_logic > out_stream_group_9_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_9_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_10_V_V_dout;
    sc_in< sc_logic > out_stream_group_10_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_10_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_11_V_V_dout;
    sc_in< sc_logic > out_stream_group_11_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_11_V_V_read;
    sc_in< sc_lv<16> > out_stream_group_12_V_V_dout;
    sc_in< sc_logic > out_stream_group_12_V_V_empty_n;
    sc_out< sc_logic > out_stream_group_12_V_V_read;
    sc_out< sc_lv<64> > outStream_TDATA;
    sc_out< sc_logic > outStream_TVALID;
    sc_out< sc_lv<8> > outStream_TKEEP;
    sc_out< sc_lv<8> > outStream_TSTRB;
    sc_out< sc_lv<2> > outStream_TUSER;
    sc_out< sc_lv<1> > outStream_TLAST;
    sc_out< sc_lv<5> > outStream_TID;
    sc_out< sc_lv<6> > outStream_TDEST;
    sc_in< sc_lv<8> > curr_input_keep_V;
    sc_in< sc_lv<8> > curr_input_strb_V;
    sc_in< sc_lv<2> > curr_input_user_V;
    sc_in< sc_lv<5> > curr_input_id_V;
    sc_in< sc_lv<6> > curr_input_dest_V;
    sc_in< sc_lv<1> > last_V;
    sc_out< sc_logic > out_stream_group_0_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_1_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_2_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_3_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_4_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_5_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_6_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_7_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_8_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_9_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_10_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_11_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_12_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_13_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_14_V_V_blk_n;
    sc_out< sc_logic > out_stream_group_15_V_V_blk_n;
    sc_out< sc_logic > outStream_TDATA_blk_n;


    // Module declarations
    out_stream_merge(sc_module_name name);
    SC_HAS_PROCESS(out_stream_merge);

    ~out_stream_merge();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_lv<1> > tmp_2_reg_908;
    sc_signal< sc_lv<1> > tmp_3_reg_964;
    sc_signal< sc_lv<1> > tmp_1_3_reg_968;
    sc_signal< bool > ap_predicate_op86_read_state4;
    sc_signal< sc_lv<1> > tmp_2_3_reg_972;
    sc_signal< bool > ap_predicate_op88_read_state4;
    sc_signal< sc_lv<1> > tmp_3_3_reg_976;
    sc_signal< bool > ap_predicate_op90_read_state4;
    sc_signal< bool > ap_block_state4_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state4_io;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<1> > tmp_s_reg_876;
    sc_signal< sc_lv<1> > tmp_1_s_reg_880;
    sc_signal< sc_lv<1> > tmp_2_s_reg_884;
    sc_signal< sc_lv<1> > tmp_3_s_reg_888;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<1> > tmp_1_reg_892;
    sc_signal< sc_lv<1> > tmp_1_1_reg_896;
    sc_signal< sc_lv<1> > tmp_2_1_reg_900;
    sc_signal< sc_lv<1> > tmp_3_1_reg_904;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<1> > tmp_1_2_reg_912;
    sc_signal< sc_lv<1> > tmp_2_2_reg_916;
    sc_signal< sc_lv<1> > tmp_3_2_reg_920;
    sc_signal< sc_lv<1> > tmp_s_nbreadreq_fu_290_p3;
    sc_signal< bool > ap_block_state1_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state5_io;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > tmp_1_s_nbreadreq_fu_298_p3;
    sc_signal< sc_lv<1> > tmp_2_s_nbreadreq_fu_306_p3;
    sc_signal< sc_lv<1> > tmp_3_s_nbreadreq_fu_314_p3;
    sc_signal< sc_lv<1> > tmp_1_nbreadreq_fu_322_p3;
    sc_signal< sc_lv<1> > tmp_1_1_nbreadreq_fu_330_p3;
    sc_signal< sc_lv<1> > tmp_2_1_nbreadreq_fu_338_p3;
    sc_signal< sc_lv<1> > tmp_3_1_nbreadreq_fu_346_p3;
    sc_signal< sc_lv<1> > tmp_2_nbreadreq_fu_354_p3;
    sc_signal< sc_lv<1> > tmp_1_2_nbreadreq_fu_362_p3;
    sc_signal< sc_lv<1> > tmp_2_2_nbreadreq_fu_370_p3;
    sc_signal< sc_lv<1> > tmp_3_2_nbreadreq_fu_378_p3;
    sc_signal< sc_lv<6> > tmp_dest_V_reg_924;
    sc_signal< bool > ap_predicate_op28_read_state2;
    sc_signal< bool > ap_predicate_op31_read_state2;
    sc_signal< bool > ap_predicate_op34_read_state2;
    sc_signal< bool > ap_predicate_op40_read_state2;
    sc_signal< bool > ap_predicate_op42_read_state2;
    sc_signal< bool > ap_predicate_op44_read_state2;
    sc_signal< bool > ap_block_state2_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state2_io;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<5> > tmp_id_V_reg_929;
    sc_signal< sc_lv<2> > tmp_user_V_reg_934;
    sc_signal< sc_lv<8> > tmp_strb_V_reg_939;
    sc_signal< sc_lv<8> > tmp_keep_V_reg_944;
    sc_signal< sc_lv<1> > tmp_3_nbreadreq_fu_489_p3;
    sc_signal< sc_lv<1> > tmp_1_3_nbreadreq_fu_497_p3;
    sc_signal< sc_lv<1> > tmp_2_3_nbreadreq_fu_505_p3;
    sc_signal< sc_lv<1> > tmp_3_3_nbreadreq_fu_513_p3;
    sc_signal< bool > ap_predicate_op65_read_state3;
    sc_signal< bool > ap_predicate_op67_read_state3;
    sc_signal< bool > ap_predicate_op69_read_state3;
    sc_signal< bool > ap_block_state3_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<1> > tmp_last_V_reg_995;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0_reg;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_lv<8> > ap_port_reg_curr_input_keep_V;
    sc_signal< sc_lv<8> > ap_port_reg_curr_input_strb_V;
    sc_signal< sc_lv<2> > ap_port_reg_curr_input_user_V;
    sc_signal< sc_lv<5> > ap_port_reg_curr_input_id_V;
    sc_signal< sc_lv<6> > ap_port_reg_curr_input_dest_V;
    sc_signal< sc_lv<1> > ap_port_reg_last_V;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_1_2_0_phi_fu_585_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_2_0_reg_581;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_2_2_0_phi_fu_598_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_2_2_0_reg_594;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_3_2_0_phi_fu_611_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_3_2_0_reg_607;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_2_4_0_reg_620;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_4_0_reg_633;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_3_4_0_reg_646;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_1_2_1_phi_fu_662_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_2_1_reg_659;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_2_2_1_phi_fu_673_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_2_2_1_reg_670;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_3_2_1_phi_fu_684_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_3_2_1_reg_681;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_2_4_1_reg_692;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_4_1_reg_704;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_3_4_1_reg_716;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_1_2_2_phi_fu_731_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_2_2_reg_728;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_2_2_2_phi_fu_742_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_2_2_2_reg_739;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_3_2_2_phi_fu_753_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_3_2_2_reg_750;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_2_4_2_reg_761;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_0_2_4_2_reg_761;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_4_2_reg_772;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_0_1_4_2_reg_772;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_3_4_2_reg_783;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_0_3_4_2_reg_783;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_1_2_3_phi_fu_797_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_1_2_3_reg_794;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_0_1_2_3_reg_794;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_2_2_3_phi_fu_807_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_2_2_3_reg_804;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_0_2_2_3_reg_804;
    sc_signal< sc_lv<16> > ap_phi_mux_curr_output_0_3_2_3_phi_fu_817_p4;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter0_curr_output_0_3_2_3_reg_814;
    sc_signal< sc_lv<16> > ap_phi_reg_pp0_iter1_curr_output_0_3_2_3_reg_814;
    sc_signal< sc_lv<64> > tmp_data_fu_824_p5;
    sc_signal< bool > ap_block_pp0_stage1_01001;
    sc_signal< sc_lv<64> > tmp_data_1_fu_837_p5;
    sc_signal< bool > ap_block_pp0_stage2_01001;
    sc_signal< sc_lv<64> > tmp_data_2_fu_850_p5;
    sc_signal< bool > ap_block_pp0_stage3_01001;
    sc_signal< sc_lv<64> > tmp_data_3_fu_863_p5;
    sc_signal< bool > ap_block_pp0_stage0_01001;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to0;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_idle_pp0_1to1;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_499;
    sc_signal< bool > ap_condition_109;
    sc_signal< bool > ap_condition_736;
    sc_signal< bool > ap_condition_740;
    sc_signal< bool > ap_condition_744;
    sc_signal< bool > ap_condition_749;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_pp0_stage0;
    static const sc_lv<4> ap_ST_fsm_pp0_stage1;
    static const sc_lv<4> ap_ST_fsm_pp0_stage2;
    static const sc_lv<4> ap_ST_fsm_pp0_stage3;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_01001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_01001();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_01001();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_01001();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_state1_pp0_stage0_iter0();
    void thread_ap_block_state2_io();
    void thread_ap_block_state2_pp0_stage1_iter0();
    void thread_ap_block_state3_io();
    void thread_ap_block_state3_pp0_stage2_iter0();
    void thread_ap_block_state4_io();
    void thread_ap_block_state4_pp0_stage3_iter0();
    void thread_ap_block_state5_io();
    void thread_ap_block_state5_pp0_stage0_iter1();
    void thread_ap_condition_109();
    void thread_ap_condition_499();
    void thread_ap_condition_736();
    void thread_ap_condition_740();
    void thread_ap_condition_744();
    void thread_ap_condition_749();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to0();
    void thread_ap_idle_pp0_1to1();
    void thread_ap_phi_mux_curr_output_0_1_2_0_phi_fu_585_p4();
    void thread_ap_phi_mux_curr_output_0_1_2_1_phi_fu_662_p4();
    void thread_ap_phi_mux_curr_output_0_1_2_2_phi_fu_731_p4();
    void thread_ap_phi_mux_curr_output_0_1_2_3_phi_fu_797_p4();
    void thread_ap_phi_mux_curr_output_0_2_2_0_phi_fu_598_p4();
    void thread_ap_phi_mux_curr_output_0_2_2_1_phi_fu_673_p4();
    void thread_ap_phi_mux_curr_output_0_2_2_2_phi_fu_742_p4();
    void thread_ap_phi_mux_curr_output_0_2_2_3_phi_fu_807_p4();
    void thread_ap_phi_mux_curr_output_0_3_2_0_phi_fu_611_p4();
    void thread_ap_phi_mux_curr_output_0_3_2_1_phi_fu_684_p4();
    void thread_ap_phi_mux_curr_output_0_3_2_2_phi_fu_753_p4();
    void thread_ap_phi_mux_curr_output_0_3_2_3_phi_fu_817_p4();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_1_2_0_reg_581();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_1_2_3_reg_794();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_1_4_2_reg_772();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_2_2_0_reg_594();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_2_2_3_reg_804();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_2_4_2_reg_761();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_3_2_0_reg_607();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_3_2_3_reg_814();
    void thread_ap_phi_reg_pp0_iter0_curr_output_0_3_4_2_reg_783();
    void thread_ap_predicate_op28_read_state2();
    void thread_ap_predicate_op31_read_state2();
    void thread_ap_predicate_op34_read_state2();
    void thread_ap_predicate_op40_read_state2();
    void thread_ap_predicate_op42_read_state2();
    void thread_ap_predicate_op44_read_state2();
    void thread_ap_predicate_op65_read_state3();
    void thread_ap_predicate_op67_read_state3();
    void thread_ap_predicate_op69_read_state3();
    void thread_ap_predicate_op86_read_state4();
    void thread_ap_predicate_op88_read_state4();
    void thread_ap_predicate_op90_read_state4();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_outStream_TDATA();
    void thread_outStream_TDATA_blk_n();
    void thread_outStream_TDEST();
    void thread_outStream_TID();
    void thread_outStream_TKEEP();
    void thread_outStream_TLAST();
    void thread_outStream_TSTRB();
    void thread_outStream_TUSER();
    void thread_outStream_TVALID();
    void thread_out_stream_group_0_V_V_blk_n();
    void thread_out_stream_group_0_V_V_read();
    void thread_out_stream_group_10_V_V_blk_n();
    void thread_out_stream_group_10_V_V_read();
    void thread_out_stream_group_11_V_V_blk_n();
    void thread_out_stream_group_11_V_V_read();
    void thread_out_stream_group_12_V_V_blk_n();
    void thread_out_stream_group_12_V_V_read();
    void thread_out_stream_group_13_V_V_blk_n();
    void thread_out_stream_group_13_V_V_read();
    void thread_out_stream_group_14_V_V_blk_n();
    void thread_out_stream_group_14_V_V_read();
    void thread_out_stream_group_15_V_V_blk_n();
    void thread_out_stream_group_15_V_V_read();
    void thread_out_stream_group_1_V_V_blk_n();
    void thread_out_stream_group_1_V_V_read();
    void thread_out_stream_group_2_V_V_blk_n();
    void thread_out_stream_group_2_V_V_read();
    void thread_out_stream_group_3_V_V_blk_n();
    void thread_out_stream_group_3_V_V_read();
    void thread_out_stream_group_4_V_V_blk_n();
    void thread_out_stream_group_4_V_V_read();
    void thread_out_stream_group_5_V_V_blk_n();
    void thread_out_stream_group_5_V_V_read();
    void thread_out_stream_group_6_V_V_blk_n();
    void thread_out_stream_group_6_V_V_read();
    void thread_out_stream_group_7_V_V_blk_n();
    void thread_out_stream_group_7_V_V_read();
    void thread_out_stream_group_8_V_V_blk_n();
    void thread_out_stream_group_8_V_V_read();
    void thread_out_stream_group_9_V_V_blk_n();
    void thread_out_stream_group_9_V_V_read();
    void thread_tmp_1_1_nbreadreq_fu_330_p3();
    void thread_tmp_1_2_nbreadreq_fu_362_p3();
    void thread_tmp_1_3_nbreadreq_fu_497_p3();
    void thread_tmp_1_nbreadreq_fu_322_p3();
    void thread_tmp_1_s_nbreadreq_fu_298_p3();
    void thread_tmp_2_1_nbreadreq_fu_338_p3();
    void thread_tmp_2_2_nbreadreq_fu_370_p3();
    void thread_tmp_2_3_nbreadreq_fu_505_p3();
    void thread_tmp_2_nbreadreq_fu_354_p3();
    void thread_tmp_2_s_nbreadreq_fu_306_p3();
    void thread_tmp_3_1_nbreadreq_fu_346_p3();
    void thread_tmp_3_2_nbreadreq_fu_378_p3();
    void thread_tmp_3_3_nbreadreq_fu_513_p3();
    void thread_tmp_3_nbreadreq_fu_489_p3();
    void thread_tmp_3_s_nbreadreq_fu_314_p3();
    void thread_tmp_data_1_fu_837_p5();
    void thread_tmp_data_2_fu_850_p5();
    void thread_tmp_data_3_fu_863_p5();
    void thread_tmp_data_fu_824_p5();
    void thread_tmp_s_nbreadreq_fu_290_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif