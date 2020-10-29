{READ_CPUID
pis mpidr_el1
}

* A53の CPU1-3の電源投入とリセット解除
{CPU_UP
exec a53_cpu_up.nut
}

{xstart
ed e6340000,0x14000000
*CA53 cpu1 Boot address
pod e6160090,0
pod e6160094,e6340000
CPU_UP
wait 40
sync start 1
}


{R7_START
R7_Reset_clr
}

{R7_Reset_clr
*;Software reset clearing register 2 (SRSTCLR2)  ##ここでR7 run
pod e6150948,00400000
}

R7_START
core2
g
wait 2
esc

