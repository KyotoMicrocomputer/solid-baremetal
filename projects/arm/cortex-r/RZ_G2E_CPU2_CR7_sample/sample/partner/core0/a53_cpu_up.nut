

PortOut(0xe6150900, 0x5a5affff, 4);
Wait(100);
PortOut(0xe6150904, 0xa5a50000, 4);
Wait(100);

local val = PortIn(0xe6151180, 4);
Wait(100);
val = val | 0x00800000;
PortOut(0xe6151180, val, 4);
Wait(100);

PortOut(0xe618014c, 0x1, 4);		// SCU
Wait(100);
PortOut(0xe6151010, 0x3, 4);		// CA53 wup ctrl
Wait(100);
PortOut(0xe6160044, 0x5a5a0000, 4);	// reset release
Wait(100);


