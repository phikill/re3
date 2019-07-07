#pragma once

#include "DamageManager.h"
#include "Vehicle.h"

struct CDoor
{
	float m_fAngleWhenOpened;
	float m_fAngleWhenClosed;
	char field_8;
	char field_9;
	char field_10;
	char field_11;
	float m_fAngle;
	float m_fPreviousAngle;
	float m_fAngularVelocity;
	CVector m_vecVelocity;
};

class CAutomobile : public CVehicle
{
public:
	// 0x288
	CDamageManager Damage;
	CDoor Doors[6];
	RwFrame *m_aCarNodes[NUM_CAR_NODES];
	CColPoint m_aWheelColPoints[4];
	float m_aWheelDist[4];
	float m_aWheelDistPrev[4];
	float m_aWheelSkidThing[4];
	int field_49C;
	bool m_aWheelSkidmarkMuddy[4];
	bool m_aWheelSkidmarkBloody[4];
	float m_aWheelRotation[4];
	float m_aWheelPosition[4];
	float m_aWheelSpeed[4];
	uint8 stuff3[12];
	uint32 m_nBusDoorTimerEnd;
	uint32 m_nBusDoorTimerStart;
	float m_aSuspensionRange[4];
	float m_aSuspensionLineLength[4];
	float m_fHeightAboveRoad;
	float m_fImprovedHandling;
	uint8 stuff6[32];
	CPhysical *m_aGroundPhysical[4];	// physicals touching wheels
	CVector m_aGroundOffset[4];		// from ground object to colpoint
	CEntity *m_pBlowUpEntity;
	float m_weaponThingA;	// TODO
	float m_weaponThingB;	// TODO
	float m_fCarGunLR;
	float m_fCarGunUD;
	float m_fWindScreenRotation;
	uint8 stuff4[4];
	uint8 m_nWheelsOnGround_2;
	uint8 m_nWheelsOnGround;
	uint8 m_nWheelsOnGroundPrev;
	uint8 stuff5[5];
	int32 m_aWheelState[4];

	CAutomobile(int, uint8);
	CAutomobile* ctor(int, uint8);
	void SetDoorDamage(int32, uint32, bool); /* TODO: eDoors */
	void SetPanelDamage(int32, uint32, bool); /* TODO: ePanels */
	void SetBumperDamage(int32, uint32, bool); /* TODO: ePanels */
	void dtor() { this->CAutomobile::~CAutomobile(); }
};
static_assert(sizeof(CAutomobile) == 0x5A8, "CAutomobile: error");
static_assert(offsetof(CAutomobile, m_aWheelDist) == 0x46C, "CAutomobile: error");
