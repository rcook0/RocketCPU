SHELL := /bin/bash
VERI := verilator -sv --timescale 1ns/1ps -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-UNSIGNED
.PHONY: verilate_fair verilate_soc_round verilate_sweep lint clean
verilate_fair:
	$(VERI) --binary --top-module yc_router_fair_tb -f files_fair.f && ./obj_dir/Vyc_router_fair_tb
verilate_soc_round:
	$(VERI) --binary --top-module yc_soc_roundtrip_tb -f files_soc_round.f && ./obj_dir/Vyc_soc_roundtrip_tb
verilate_sweep:
	$(VERI) --binary --top-module yc_skid_sweep_tb -f files_sweep.f && ./obj_dir/Vyc_skid_sweep_tb
lint:
	verilator -sv --lint-only -f files_fair.f
	verilator -sv --lint-only -f files_sweep.f
	verilator -sv --lint-only -f files_soc_round.f
clean:
	rm -rf obj_dir *.vcd
