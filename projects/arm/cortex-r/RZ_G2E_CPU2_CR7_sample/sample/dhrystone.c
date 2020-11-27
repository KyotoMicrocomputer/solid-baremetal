#include <stdlib.h>
#include <string.h>

#include "dhrystone.h"

#define LOOPS 1750

char Version[] = "1.1";
#define structassign(d, s) d = s

typedef enum
{
	Ident1,
	Ident2,
	Ident3,
	Ident4,
	Ident5
} Enumeration;

typedef int OneToThirty;
typedef int OneToFifty;
typedef char CapitalLetter;
typedef char String30[31];
typedef int Array1Dim[51];
typedef int Array2Dim[51][51];

struct Record
{
	struct Record *PtrComp;
	Enumeration Discr;
	Enumeration EnumComp;
	OneToFifty IntComp;
	String30 StringComp;
};

typedef struct Record RecordType;
typedef RecordType *RecordPtr;
typedef int boolean;

#define TRUE 1
#define FALSE 0

#ifndef REG
#define REG
#endif

void Proc0(void);
void Proc1(RecordPtr PtrParIn);
void Proc2(OneToFifty *IntParIO);
void Proc3(RecordPtr *PtrParOut);
void Proc4(void);
void Proc5(void);
void Proc6(Enumeration EnumParIn, Enumeration *EnumParOut);
void Proc7(OneToFifty IntParI1, OneToFifty IntParI2, OneToFifty *IntParOut);
void Proc8(Array1Dim Array1Par, Array2Dim Array2Par, OneToFifty IntParI1, OneToFifty IntParI2);

Enumeration Func1(CapitalLetter CharPar1, CapitalLetter CharPar2);
boolean Func2(String30 StrParI1, String30 StrParI2);
boolean Func3(Enumeration EnumParIn);

void dhrystone(void)
{

	while (1) {
		Proc0();
	}
}

/*
 * Package 1
 */
int IntGlob;
boolean BoolGlob;
char Char1Glob;
char Char2Glob;
Array1Dim Array1Glob;
Array2Dim Array2Glob;
RecordPtr PtrGlb;
RecordPtr PtrGlbNext;

void Proc0(void)
{
	OneToFifty IntLoc1;
	REG OneToFifty IntLoc2;
	OneToFifty IntLoc3;
	//	REG char		CharLoc;
	REG char CharIndex;
	Enumeration EnumLoc;
	String30 String1Loc;
	String30 String2Loc;
	char buf1[sizeof(RecordType)] __attribute((aligned(4)));
	char buf2[sizeof(RecordType)] __attribute((aligned(4)));
	/*	extern char		*malloc(); */
	register unsigned long i;

	long starttime;
	long benchtime;
	long nulltime;

	starttime = 0;
	//for (i = 0; i < LOOPS; ++i);
	nulltime = 0;

	PtrGlbNext = (RecordPtr)buf1;
	PtrGlb = (RecordPtr)buf2;
	PtrGlb->PtrComp = PtrGlbNext;
	PtrGlb->Discr = Ident1;
	PtrGlb->EnumComp = Ident3;
	PtrGlb->IntComp = 40;
	strcpy(PtrGlb->StringComp, "DHRYSTONE PROGRAM, SOME STRING");
#ifndef GOOF
	strcpy(String1Loc, "DHRYSTONE PROGRAM, 1'ST STRING"); /*GOOF*/
#endif
	Array2Glob[8][7] = 10; /* Was missing in published program */
//	puts(PtrGlb->StringComp);
/*****************
-- Start Timer --
*****************/
	starttime = 0;
	for (i = 0; i < LOOPS; ++i)
	{

		Proc5();
		Proc4();
		IntLoc1 = 2;
		IntLoc2 = 3;
		strcpy(String2Loc, "DHRYSTONE PROGRAM, 2'ND STRING");
		EnumLoc = Ident2;
		BoolGlob = !Func2(String1Loc, String2Loc);
		while (IntLoc1 < IntLoc2)
		{
			IntLoc3 = 5 * IntLoc1 - IntLoc2;
			Proc7(IntLoc1, IntLoc2, &IntLoc3);
			++IntLoc1;
		}
		Proc8(Array1Glob, Array2Glob, IntLoc1, IntLoc3);
		Proc1(PtrGlb);
		for (CharIndex = 'A'; CharIndex <= Char2Glob; ++CharIndex)
			if (EnumLoc == Func1(CharIndex, 'C'))
				Proc6(Ident1, &EnumLoc);
		IntLoc3 = IntLoc2 * IntLoc1;
		IntLoc2 = IntLoc3 / IntLoc1;
		IntLoc2 = 7 * (IntLoc3 - IntLoc2) - IntLoc1;
		Proc2(&IntLoc1);
	}

	/*****************
-- Stop Timer --
*****************/

	benchtime = 0;
}

void Proc1(RecordPtr PtrParIn)
{
#define NextRecord (*(PtrParIn->PtrComp))

	structassign(NextRecord, *PtrGlb);
	PtrParIn->IntComp = 5;
	NextRecord.IntComp = PtrParIn->IntComp;
	NextRecord.PtrComp = PtrParIn->PtrComp;
	Proc3(NextRecord.PtrComp);
	if (NextRecord.Discr == Ident1)
	{
		NextRecord.IntComp = 6;
		Proc6(PtrParIn->EnumComp, &NextRecord.EnumComp);
		NextRecord.PtrComp = PtrGlb->PtrComp;
		Proc7(NextRecord.IntComp, 10, &NextRecord.IntComp);
	}
	else
		structassign(*PtrParIn, NextRecord);
}

void Proc2(OneToFifty *IntParIO)
{
	REG OneToFifty IntLoc;
	REG Enumeration EnumLoc;

	IntLoc = *IntParIO + 10;
	for (;;)
	{
		if (Char1Glob == 'A')
		{
			--IntLoc;
			*IntParIO = IntLoc - IntGlob;
			EnumLoc = Ident1;
		}
		if (EnumLoc == Ident1)
			break;
	}
}

void Proc3(RecordPtr *PtrParOut)
{
	if (PtrGlb != NULL)
		*PtrParOut = PtrGlb->PtrComp;
	else
		IntGlob = 100;
	Proc7(10, IntGlob, &PtrGlb->IntComp);
}

void Proc4(void)
{
	REG boolean BoolLoc;

	BoolLoc = Char1Glob == 'A';
	BoolLoc |= BoolGlob;
	Char2Glob = 'B';
}

void Proc5(void)
{
	Char1Glob = 'A';
	BoolGlob = FALSE;
}

void Proc6(Enumeration EnumParIn, Enumeration *EnumParOut)
{
	*EnumParOut = EnumParIn;
	if (!Func3(EnumParIn))
		*EnumParOut = Ident4;
	switch (EnumParIn)
	{
		case Ident1:
			*EnumParOut = Ident1;
			break;
		case Ident2:
			if (IntGlob > 100)
				*EnumParOut = Ident1;
			else
				*EnumParOut = Ident4;
			break;
		case Ident3:
			*EnumParOut = Ident2;
			break;
		case Ident4:
			break;
		case Ident5:
			*EnumParOut = Ident3;
	}
}

void Proc7(OneToFifty IntParI1, OneToFifty IntParI2, OneToFifty *IntParOut)
{
	REG OneToFifty IntLoc;

	IntLoc = IntParI1 + 2;
	*IntParOut = IntParI2 + IntLoc;
}

void Proc8(Array1Dim Array1Par, Array2Dim Array2Par, OneToFifty IntParI1, OneToFifty IntParI2)
{
	REG OneToFifty IntLoc;
	REG OneToFifty IntIndex;

	IntLoc = IntParI1 + 5;
	Array1Par[IntLoc] = IntParI2;
	Array1Par[IntLoc + 1] = Array1Par[IntLoc];
	Array1Par[IntLoc + 30] = IntLoc;
	for (IntIndex = IntLoc; IntIndex <= (IntLoc + 1); ++IntIndex)
		Array2Par[IntLoc][IntIndex] = IntLoc;
	++Array2Par[IntLoc][IntLoc - 1];
	Array2Par[IntLoc + 20][IntLoc] = Array1Par[IntLoc];
	IntGlob = 5;
}

Enumeration Func1(CapitalLetter CharPar1, CapitalLetter CharPar2)
{
	REG CapitalLetter CharLoc1;
	REG CapitalLetter CharLoc2;

	CharLoc1 = CharPar1;
	CharLoc2 = CharLoc1;
	if (CharLoc2 != CharPar2)
		return (Ident1);
	else
		return (Ident2);
}

boolean Func2(String30 StrParI1, String30 StrParI2)
{
	REG OneToThirty IntLoc;
	REG CapitalLetter CharLoc;

	IntLoc = 1;
	while (IntLoc <= 1)
		if (Func1(StrParI1[IntLoc], StrParI2[IntLoc + 1]) == Ident1)
		{
			CharLoc = 'A';
			++IntLoc;
		}
	if (CharLoc >= 'W' && CharLoc <= 'Z')
		IntLoc = 7;
	if (CharLoc == 'X')
		return (TRUE);
	else
	{
		if (strcmp(StrParI1, StrParI2) > 0)
		{
			IntLoc += 7;
			return (TRUE);
		}
		else
			return (FALSE);
	}
}

boolean Func3(Enumeration EnumParIn)
{
	REG Enumeration EnumLoc;

	EnumLoc = EnumParIn;
	if (EnumLoc == Ident3)
		return (TRUE);
	return (FALSE);
}
