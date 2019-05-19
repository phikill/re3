#pragma once

#include "Physical.h"

enum PedAction
{
	PED_PASSENGER = 44,
};

class CVehicle;

class CPed : public CPhysical
{
public:
	// 0x128
	CStoredCollPoly m_collPoly;
	float m_fCollisionSpeed;
	uint8 m_ped_flagA1 : 1;
	uint8 m_ped_flagA2 : 1;
	uint8 m_ped_flagA4 : 1;
	uint8 m_ped_flagA8 : 1;
	uint8 m_ped_flagA10 : 1;
	uint8 m_ped_flagA20 : 1;
	uint8 m_ped_flagA40 : 1;
	uint8 m_ped_flagA80 : 1;
	uint8 m_ped_flagB1 : 1;
	uint8 m_ped_flagB2 : 1;
	uint8 m_ped_flagB4 : 1;
	uint8 m_ped_flagB8 : 1;
	uint8 m_ped_flagB10 : 1;
	uint8 m_ped_flagB20 : 1;
	uint8 m_ped_flagB40 : 1;
	uint8 m_ped_flagB80 : 1;
	uint8 m_ped_flagC1 : 1;
	uint8 m_ped_flagC2 : 1;
	uint8 m_ped_flagC4 : 1;
	uint8 m_ped_flagC8 : 1;
	uint8 m_ped_flagC10 : 1;
	uint8 m_ped_flagC20 : 1;
	uint8 m_ped_flagC40 : 1;
	uint8 m_ped_flagC80 : 1;
	uint8 m_ped_flagD1 : 1;
	uint8 m_ped_flagD2 : 1;
	uint8 m_ped_flagD4 : 1;
	uint8 m_ped_flagD8 : 1;
	uint8 m_ped_flagD10 : 1;
	uint8 m_ped_flagD20 : 1;
	uint8 m_ped_flagD40 : 1;
	uint8 m_ped_flagD80 : 1;
	uint8 m_ped_flagE1 : 1;
	uint8 m_ped_flagE2 : 1;
	uint8 m_ped_flagE4 : 1;
	uint8 m_ped_flagE8 : 1;
	uint8 m_ped_flagE10 : 1;
	uint8 m_ped_flagE20 : 1;
	uint8 m_ped_flagE40 : 1;
	uint8 m_ped_flagE80 : 1;
	uint8 m_ped_flagF1 : 1;
	uint8 m_ped_flagF2 : 1;
	uint8 m_ped_flagF4 : 1;
	uint8 m_ped_flagF8 : 1;
	uint8 m_ped_flagF10 : 1;
	uint8 m_ped_flagF20 : 1;
	uint8 m_ped_flagF40 : 1;
	uint8 m_ped_flagF80 : 1;
	uint8 m_ped_flagG1 : 1;
	uint8 m_ped_flagG2 : 1;
	uint8 m_ped_flagG4 : 1;
	uint8 m_ped_flagG8 : 1;
	uint8 m_ped_flagG10 : 1;
	uint8 m_ped_flagG20 : 1;
	uint8 m_ped_flagG40 : 1;
	uint8 m_ped_flagG80 : 1;
	uint8 m_ped_flagH1 : 1;
	uint8 m_ped_flagH2 : 1;
	uint8 m_ped_flagH4 : 1;
	uint8 m_ped_flagH8 : 1;
	uint8 m_ped_flagH10 : 1;
	uint8 m_ped_flagH20 : 1;
	uint8 m_ped_flagH40 : 1;
	uint8 m_ped_flagH80 : 1;
	uint8 m_ped_flagI1 : 1;
	uint8 m_ped_flagI2 : 1;
	uint8 m_ped_flagI4 : 1;
	uint8 m_ped_flagI8 : 1;
	uint8 m_ped_flagI10 : 1;
	uint8 m_ped_flagI20 : 1;
	uint8 m_ped_flagI40 : 1;
	uint8 m_ped_flagI80 : 1;
	uint8 stuff1[199];
	int32 m_nPedState;
	uint8 stuff2[196];
	CEntity *m_pCurrentPhysSurface;
	CVector m_vecOffsetFromPhysSurface;
	CEntity *m_pCurSurface;
	uint8 stuff3[16];
	CVehicle *m_pMyVehicle;
	bool bInVehicle;
	uint8 stuff4[23];
	int32 m_nPedType;

	uint8 stuff5[28];
	CEntity *m_pCollidingEntity;
	uint8 stuff6[496];

//	static void *operator new(size_t);
//	static void operator delete(void*, size_t);

	bool IsPlayer(void) { return m_nPedType == 0 || m_nPedType== 1 || m_nPedType == 2 || m_nPedType == 3; }
	void KillPedWithCar(CVehicle *veh, float impulse);
};
static_assert(offsetof(CPed, m_nPedState) == 0x224, "CPed: error");
static_assert(offsetof(CPed, m_pCurSurface) == 0x2FC, "CPed: error");
static_assert(offsetof(CPed, m_pMyVehicle) == 0x310, "CPed: error");
static_assert(offsetof(CPed, m_nPedType) == 0x32C, "CPed: error");
static_assert(offsetof(CPed, m_pCollidingEntity) == 0x34C, "CPed: error");
static_assert(sizeof(CPed) == 0x540, "CPed: error");
