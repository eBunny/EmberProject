/*************************************************************************
Crytek Source File.
Copyright (C), Crytek Studios, 2001-2004.
-------------------------------------------------------------------------
$Id$
$DateTime$
Description: Rocket

-------------------------------------------------------------------------
History:
- 12:10:2005   11:15 : Created by M�rcio Martins

*************************************************************************/
#ifndef __ROCKET_H__
#define __ROCKET_H__

#if _MSC_VER > 1000
# pragma once
#endif


#include "Projectile.h"


class CRocket : public CProjectile
{
public:
    CRocket();
    virtual ~CRocket();


    // CProjectile
    virtual void HandleEvent(const SGameObjectEvent &);
    virtual void Launch(const Vec3 &pos, const Vec3 &dir, const Vec3 &velocity, float speedScale);

    //virtual void Serialize(TSerialize ser, unsigned aspects);
    // ~CProjectile

protected:
    void AutoDropOwnerWeapon();
    void EnableTrail();
    void DisableTrail();
    virtual bool ShouldCollisionsDamageTarget() const;
    virtual void ProcessEvent(SEntityEvent &event);

    Vec3			m_launchLoc;
    bool			m_detonatorFired;
};


#endif // __ROCKET_H__