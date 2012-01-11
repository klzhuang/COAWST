/*
** svn $Id: estuary_test.h 429 2009-12-20 17:30:26Z arango $
*******************************************************************************
** Copyright (c) 2002-2010 The ROMS/TOMS Group                               **
**   Licensed under a MIT/X style license                                    **
**   See License_ROMS.txt                                                    **
*******************************************************************************
**
** Options for Estuary test.
**
** Application flag:   ESTUARY_TEST
** Input script:       ocean_estuary_test.in
*/

#define ROMS_MODEL

#define UV_LOGDRAG
#define TS_U3HADVECTION
#define SALINITY
#define SOLVE3D
#define SPLINES
#define DJ_GRADPS
#define CURVGRID
#define UV_ADV
#undef  UV_COR
#define UV_VIS2
#define MIX_S_UV

#define EAST_FSGRADIENT
#define EAST_M2CLAMPED
#define EAST_M3GRADIENT
#define EAST_TCLAMPED
#define WEST_FSCHAPMAN
#define WEST_M2REDUCED
#define FSOBC_REDUCED
#define WEST_M3GRADIENT
#define WEST_TCLAMPED

#define GLS_MIXING
#if defined GLS_MIXING
# define KANTHA_CLAYSON
# define N2S2_HORAVG
#endif

#define MASKING
#define ANA_INITIAL
#define ANA_SMFLUX
#define ANA_STFLUX
#define ANA_BTFLUX
#define ANA_SSFLUX
#define ANA_BSFLUX
#define ANA_SPFLUX
#define ANA_BPFLUX
#define ANA_FSOBC
#define ANA_M2OBC
#define ANA_TOBC
