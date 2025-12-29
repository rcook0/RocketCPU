VERILATOR ?= verilator
RTL = ../../rtl/noc/yc_noc_defs.sv ../../rtl/noc/yc_skid.sv ../../rtl/noc/yc_rr_arbN.sv ../../rtl/noc/yc_router_skel.sv ../../rtl/noc/yc_niu_skel.sv
TB  = ../../tb/yc_noc_router_tb.sv

all: sim

sim:
	$(VERILATOR) -sv -cc -exe -build -Wno-fatal -o sim_noc $(RTL) $(TB)
	./obj_dir/sim_noc

clean:
	rm -rf obj_dir sim_noc *.vcd
