{debug_init
br eb000000~ebffffff,mem
g,/w
brc *
*このマクロで、0xeb00_0000からの RAMが利用可能
}
